#include "LlistaIOEstudiant.hh"
#include "solution.hh"
using namespace std; 

void esborra_tots(list<Estudiant>& t, int x){
  for(list<Estudiant>::iterator it = t.begin(); it != t.end(); ++it){
    if((*it).consultar_DNI() == x){
      it = t.erase(it);
    }
  }
}

int main() {
  list<Estudiant> t; 
  LlegirLlistaEstudiant(t); 
 
  int x;
  cin >> x;
 
  esborra_tots(t,x); 
  EscriureLlistaEstudiant(t);
}
  
