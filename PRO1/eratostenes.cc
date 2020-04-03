#include <iostream>
#include <vector>
using namespace std;
/*GRAELLA D'ERATOSTENES
Busquem els divisors, pero no com abans sino nomes fins la seva arrel, per cada divisor que trobis abans de la arrel hi haura a l'altre banda un altre que el divideix. 
Si tenim un problema en el qual ens demana la primalitat de molts numeros, si ens ho demanen moltes vegades és ineficient. el que fem es anar treballant la taula fins que 
al final arribem que si no està taxat vol dir que és primer.
*/
const int MAX = 1000001; // valor maxim possible dels numeros
//PRE: i >= 2, garabell[i] = true
//POST: Marcar a false tots els garbell[k] talls que k es multiple de i;

void marcar_multiples(int i, vector<bool>& garbell) {
    for(int j = 2 * i; j < int(garbell.size()); j += i){
        garbell[j] = false;
    }
}

// PRE: n >= 0; 
//POST; retornar un garabell de mida n on per tor i garbell[i] == true vol dir que i es primer

vector<bool> precalcula_garbell(int n){
    vector<bool> garbell(n, true); // inicialització

    if(n > 0) garbell[0] = false; // 0 no es primer
    if(n > 1) garbell[1] = false; // 1 no es primer
 //segon pass : recorregut marcant els multiples dels primer que trobem 
    for (int i = 2; i * i <= n; ++i){
        if(garbell[i]) marcar_multiples(i, garbell);
    }

    return garbell;
}

int main(){
    //precalculem el garbell
    vector<bool> primer = precalcula_garbell(MAX);
    int n; 
    while(cin >> n){
        if(primer[n]) cout << n << " es primer" << endl; 
        else cout << n << " no es primer" << endl;

    }
}