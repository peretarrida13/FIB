#include <iostream>
#include <queue>
#include "ParInt.hh"
#include "CuaIOParInt.hh"
using namespace std; 

int main(){
    queue<ParInt> principal;
    queue<ParInt> cua1; 
    queue<ParInt> cua2;
    int temps_cua1 = 0;
    int temps_cua2 = 0;
    llegirCuaParInt(principal);
    while(not principal.empty()){
        if(temps_cua1 <= temps_cua2){
            temps_cua1 += principal.front().segon();
            cua1.push(principal.front());
            principal.pop();
            
        }
        else if(temps_cua2 < temps_cua1){
            temps_cua2 += principal.front().segon();
            cua2.push(principal.front());
            principal.pop();
        }
    }
    escriureCuaParInt(cua1);
    cout << endl;
    escriureCuaParInt(cua2);
}
