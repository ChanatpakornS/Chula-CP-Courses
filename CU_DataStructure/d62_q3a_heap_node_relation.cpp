#include <iostream>

using namespace std;

int main() {
    int n, p;
    cin >> n >> p;
    int a, b;
    while(p--) {
        cin >> a >> b;
        if(a == b) {
            cout << "a and b are the same node\n";
        }
        if(a > b) {
            while(a > b && b != a) {
                a = (a - 1) / 2;
                if(b == a) cout << "b is an ancestor of a\n";
            }
            if(a < b) cout << "a and b are not related\n";
        } else {
            while(b > a && b != a) {
                b = (b - 1) / 2;
                if(b == a) cout << "a is an ancestor of b\n";
            }
            if(a > b) cout << "a and b are not related\n";
        }
    }
}