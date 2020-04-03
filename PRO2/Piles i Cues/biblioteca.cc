#include <iostream>
#include <vector>
#include <stack>
using namespace std; 

int main(){
    int mida; 
    cin >> mida; 
    vector <stack<string> > v(mida);

    string titol; 
    int cat; 
    int n;
    while(cin >> n and n != -4){
        if(n == -1){
            cin >> titol >> cat;
            v[cat - 1].push(titol);
        }
        else if(n == -2){
            int num;
            cin >> num >> cat; 
            while(0 < num){
                v[cat - 1].pop();
                --num;
            }
        }
        else if(n == -3){
            stack<string> temp; 
            cin >> cat; 
            temp = v[cat - 1];
            cout << "Pila de la categoria " << cat << endl;
            while(not temp.empty()){
                cout << temp.top() << endl;
                temp.pop();
            }
            cout << endl;
        }

    }

}