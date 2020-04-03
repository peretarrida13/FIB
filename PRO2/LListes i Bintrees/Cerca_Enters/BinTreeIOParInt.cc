#include "BinTreeIOParInt.hh"
#include "ParInt.hh"
#include <iostream>
using namespace std;

void read_bintree_parint(BinTree<ParInt>& a){
    ParInt par;
    if(par.llegir()){
        BinTree<ParInt> a1; 
        BinTree<ParInt> a2;

        read_bintree_parint(a1);
        read_bintree_parint(a2);
        a = BinTree<ParInt> (par, a1, a2);
    }
}

void write_bintree_parint(const BinTree<ParInt>& a) {
    if(not a.empty()){
        write_bintree_parint(a.right());
        a.value().escriure();
        write_bintree_parint(a.left());
    }
}