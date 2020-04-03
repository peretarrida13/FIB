#include <iostream>
#include <vector>
using namespace std; 
typedef vector < vector<int> > Matrix;

void swap(int& a, int& b){
    int c = a; 
    a = b; 
    b = c; 
}
void transposa(Matrix& m){
   int n = m.size();
   for(int i = 0; i < n -1; ++i){
       for(int j = i+1; j < n; ++j){
           swap(m[i][j], m[j][i]);
       }
   }
}

int main(){
    int x, y; 
    cin >> x >> y; 
    Matrix m(x, vector<int>(y));
    for(int i = 0; i < x; i++){
        for(int j = 0; j < y; ++j){
            cin >> m[i][j];
        }
    }
    transposa(m); 
    for(int i = 0; i < x; i++){
        for(int j = 0; j < y; ++j){
            cout << m[i][j];
        }
    }
}