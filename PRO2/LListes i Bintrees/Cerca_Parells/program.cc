#include <iostream>
#include <list>
#include "ParInt.hh"
#include "LlistaIOParInt.hh" 
using namespace std;

int main(){
    list<ParInt> llista;
    LlegirLlistaParInt(llista);
    int n; 
    int suma = 0, c = 0;
    cin >> n;
    for(list<ParInt>::iterator l = llista.begin(); l != llista.end(); ++l){
        if((*l).primer() == n){
            suma += (*l).segon();
            ++c;
        }
    }
    cout << n << " " << c << " " << suma << endl;


}
