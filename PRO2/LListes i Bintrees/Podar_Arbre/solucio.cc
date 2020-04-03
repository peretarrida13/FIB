#include "BinTree.hh"

bool poda_subarbre(BinTree<int>& a, int x){
    bool b;
    if(a.empty()) b = false; 
    else if(a.value() == x){
        b = true; 
        a = BinTree<int> (); 
    }
    else{
        BinTree<int> left = a.left(); 
        BinTree<int> right = a.right();
        b = poda_subarbre(left, x);
        if(not b) b = poda_subarbre(right, x);

        a = BinTree<int> (a.value(), left, right);
    }
    return b; 
}
