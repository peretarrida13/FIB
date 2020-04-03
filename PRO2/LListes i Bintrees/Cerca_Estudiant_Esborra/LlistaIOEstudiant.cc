#include "LlistaIOEstudiant.hh"
using namespace std;

void LlegirLlistaEstudiant(list<Estudiant>& l){
    // Pre: l és buida; el canal estandar d’entrada conté parelles  
    // de valors <enter, double>, acabat per un parell 0 x (qualsevol double)
    // Post: s’han afegit al final de l els estudiants llegits fins al 0 x (no inclòs)
    Estudiant aux; 
    aux.llegir(); 
    while(aux.consultar_DNI() != 0){
        l.push_back(aux);
        aux.llegir();
    }

}

void EscriureLlistaEstudiant(list<Estudiant>& l){
    // Pre: cert
    // Post: s’han escrit al canal estandar de sortida els elements de l
    for(list<Estudiant>::iterator it = l.begin(); it != l.end(); ++it) (*it).escriure();
}