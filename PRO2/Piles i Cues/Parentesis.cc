#include <iostream>
#include <stack>
using namespace std; 

int main(){
    char x;
    stack<char> st;
    cin >> x;
    bool ok = true;
    while(ok and x != '.'){
        if(x == '[' or x == '(') st.push(x);
        else if(x == ']'){
            if(st.empty() or st.top() != '[') ok = false;
            else st.pop();
        }
        else if(x == ')'){
            if(st.empty() or st.top() != '(') ok = false;
            else st.pop();
        }
        cin >> x;
    }

    if(ok and st.empty()) cout << "Correcte" << endl;
    else cout << "Incorrecte" << endl;
    st = stack<char>();
}
