#include "LlistaIOParInt.hh"

void LlegirLlistaParInt(list<ParInt>& l){
    ParInt x;
    while(x.llegir()){
        l.push_back(x);
    }
}
// Pre: l és buida; el canal estandar d’entrada conté un nombre parell d’enters, acabat pel parell 0 0
// Post: s’han afegit al final de l els parells llegits fins al 0 0 (no inclòs)

void EscriureLlistaParInt(list<ParInt>& l){
    for( list<ParInt>::iterator l1 = l.begin(); l1 != l.end(); ++l1) (*l1).escriure(); 
}
//PRE: cert;
//POST: s'han escrit al canal estandar de sortida els elements de l