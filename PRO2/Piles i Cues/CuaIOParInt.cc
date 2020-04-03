#include "CuaIOParInt.hh"
using namespace std; 

void llegirCuaParInt(queue<ParInt>& c){
// Pre: c és buida; el canal estandar d’entrada conté un nombre
// parell d’enters, acabat pel parell 0 0
// Post: s’han encuat a c els elements llegits fins al 0 0 (no inclòs)
    int n1, n2; 
    while(cin >> n1 >> n2 and n1 != 0 and n2 != 0){
        c.push(n1, n2);
    }
}

void escriureCuaParInt(queue<ParInt> c);
// Pre: cert
// Post: s’han escrit al canal estandar de sortida els elements de c