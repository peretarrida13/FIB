#include "LlistaIOEstudiant.hh"

void LlegirLlistaEstudiant(list<Estudiant>& l){
    Estudiant aux;
    aux.llegir(); 

    while(aux.consultar_DNI() != 0 and aux.consultar_nota() != 0){
        l.push_back(aux);
        aux.llegir();
    }
}

void EscriureLlistaEstudiant(list<Estudiant> l){
    for(list<Estudiant>::iterator it = l.begin(); it != l.end(); ++it) (*it).escriure();
}