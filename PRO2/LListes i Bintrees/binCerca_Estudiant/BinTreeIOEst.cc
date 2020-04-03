#include "BinTree.hh"
#include "Estudiant.hh"
#include "BinTreeIOEst.hh"

// Pre: a és buit; el canal estandar d’entrada conté una seqüència
// de parells <int, double> que representa un arbre binari d’estudiants
// en preordre, on un parell amb l’int = ‘‘marca’’ representa
// un arbre buit
// Post: a conté l’arbre que hi havia al canal estandar d’entrada
void read_bintree_est(BinTree<Estudiant>& a) {
    Estudiant est;
    est.llegir();
    if (est.consultar_DNI() != 0 or est.consultar_nota() != 0) {
        BinTree<Estudiant> e1;
        BinTree<Estudiant> e2;

        read_bintree_est(e1);
        read_bintree_est(e2);
        a = BinTree<Estudiant> (est, e1, e2);
    }
}

// Pre: a = A
// Post: s’han escrit al canal estandar de sortida els elements
// d’a recorreguts en inordre, a = A
void write_bintree_est(const BinTree<Estudiant>& a) {
    if (not a.empty()) {
        write_bintree_est(a.right());
        if (a.value().te_nota()) a.value().escriure();
        else cout << a.value().consultar_DNI() << " -1" << endl;
        write_bintree_est(a.left());
    }
}
