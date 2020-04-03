#include <iostream>
#include <queue>
using namespace std;

void recalcular_max_min_mitj(int& max, int&min, double& mitj, queue<int>& q){
    
    if(not q.empty()){
        queue<int> aux = q; 
        max = min = mitj = aux.front();
        aux.pop();
        while(not aux.empty()){
            if(aux.front() < min) min = aux.front();
            if(aux.front() > max) max = aux.front();
            mitj += aux.front();
            aux.pop();
        }
    }
    else{
        min = 1001; 
        max = -1002; 
        mitj = 0;
    }
      
}

int main(){
    int num; 
    int min = 1001, max = -1002; 
    double mitj = 0; 
    queue<int> q1;
    while(cin >> num and num < 1000 and num > -1002){
        if(num == -1001){
            if (not q1.empty()){
                q1.pop();
                recalcular_max_min_mitj(max, min, mitj, q1);
            }
        }
        else{
            if(num < min) min = num; 
            if(num > max) max = num; 
            mitj += num;
            q1.push(num);
        }

        if(q1.empty()) cout << 0 << endl; 
        else{
            cout << "min " << min << "; max " << max << "; media " << mitj/q1.size() << endl;
        }
    }
}