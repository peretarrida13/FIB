#include "Estudiant.hh"
#include "LlistaIOEstudiant.hh"
#include <list>
#include <iostream>
using namespace std;

int main(){
    list<Estudiant> llista;
    LlegirLlistaEstudiant(llista);

    int dni; 
    cin >> dni; 

    int c = 0; 
    for(list<Estudiant>::iterator it = llista.begin(); it != llista.end(); ++it){
        if((*it).consultar_DNI() == dni) ++c;
    }
    cout << dni << ' ' << c << endl;
}