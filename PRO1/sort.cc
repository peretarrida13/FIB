#include <algorithm>
#include <iostream>
#include <vector>
using namespace std; 

bool comp(const int& a, const int& b){
    return a > b;
}
int main(){
    int x; 
    cin >> x;
    vector v(x); 
    for(int i = 0; i < x; ++i) cin >> v[i];
    sort(v.begin(), v.end(),comp ); 

    for(int i = 0; i < x; ++i) cout << v[i]; 
    cout << endl; 
}