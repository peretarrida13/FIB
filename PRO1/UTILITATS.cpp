#include <iostream>
#include <vector>
using namespace std; 

vector<int> llegir(int n){
    vector <int> v(n); 
    for(int i = 0; i < n; ++i) cin >> v[i]; 
    return v; 
}

void escriure(const vector<int>& v){
    int n = v.size(); 
    for(int i = 0; i < n; ++i) cout << v[i] << " "; 
    cout << endl; 
}