#include <iostream>
#include <vector>
using namespace std; 
typedef vector <vector <int> > Matrix;

void search(const Matrix& m, int x, int& i, int& j){
    cin >> x; 
    int f = a.size(); 
    int c = a[0].size();
    bool found = false;
    while(not found){
        if(m[i][j] == x) found = true; 
        else{
            if(i < f) ++i;
            else if(i == f){
                i = 0; 
                ++j; 
            }
        }
    }
    cout << i << " " << j << endl; 
}