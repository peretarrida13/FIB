#include <iostream>
#include <list>
using namespace std;

void recalcular_max_min(list<int>& l, int& min, int& max) {
    if (!l.empty()) {
        max = *l.begin();
        min = *l.begin();
        for (list<int>::const_iterator it = l.begin(); it != l.end(); ++it) {
            if (*it > max) max = *it;
            if (*it < min) min = *it;
        }
    }
}

void esborrar_element(list<int>& l, int& n, double& total) {
    if (!l.empty()) {
        list<int>::iterator it = l.begin();
        while (it != l.end()) {
            if (*it == n) {
                it = l.erase(it);
                total -= n;
                return;
            } else ++it;
        }
    }
}

int main() {
    int op, n, min, max;
    double total = 0;
    list<int> l;
    while (cin >> op >> n and not (op == 0 and n == 0)) {
        if (op == -1) {
            if (l.empty()) {
                min = max = n;
            } else {
                if (max < n) max = n;
                if (min > n) min = n;
            }
            l.push_back(n);
            total += n;
        }
        else if (op == -2) {
            esborrar_element(l, n, total);
            if (max == n or min == n) recalcular_max_min(l, min, max);
        }
        if (!l.empty()) cout << min << ' ' << max << ' ' << total/l.size() << endl;
        else cout << 0 << endl;
    }
}

