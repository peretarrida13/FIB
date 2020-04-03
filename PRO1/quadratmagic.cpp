#include <iostream>
#include <vector>
using namespace std; 

bool quadrat_magic( const vector< vector <int> >& t){
    int  n = t.size();
    int suma = 0; 
    //calculem la suma de la diagonal
    for(int i = 0; i < n; ++i) suma += t[i][i];
    //mirem si la suma de la 2a diagonal es = suma
    int s = 0; 
    for(int i = 0; i < n; ++i) s += t[n-i-1][i];
    if(s != suma) return false;

    //Mirem si la suma de totes les files es = suma; 
    for(int i = 0; i < n; ++i){
        s = 0; 
        for (int j = 0; j < n; ++j) s += t[i][j];
        if(s != suma) return false; 
    }
    //Mirem si la suma de totes les columnes es = a suma;
    for(int j = 0; j < n; ++j){
        s = 0; 
        for (int i = 0; i < n; ++i) s += t[i][j];
        if(s != suma) return false; 
    }

    //farem un vector de marcadors per veure quins valors han sortit.
    //mirem si tots els numeros entre 1 i n² apareixen 1 cop
    vector<bool> aparegut(n*n -1, false); 
    for(int i = 0; i < n; ++i){
        for(int j = 0; j < n; ++j){
            int x = t[i][j]; 
            if(x <  1 or x > n*n) return false; // ja que son valors ilegals
            if(aparegut[x]) return false; //repetició
            else aparegut[x] = true; //nou
        }
    }

    return true; //ja que ha passat totes les condicions    
}

int main(){

}