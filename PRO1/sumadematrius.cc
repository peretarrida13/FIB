#include <iostream>
#include <vector>
using namespace std; 

vector<int> llegir(int n){
    vector <int> v(n); 
    for(int i = 0; i < n; ++i) cin >> v[i]; 
    return v; 
}


Matrix matrix_sum(const matrix& a , const matrix& b){
	int f = a.size(); 
	int c = a[0].size(); 
	Matrix c(f, vector <int>(c)); 
	for(int i = 0; i < f; ++i){
		for(int j = 0; j < c; ++j){
			c[j][i] = a[i][j] + b[i][j];
		}
	}
	return c;
}