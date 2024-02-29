#include <iostream>

using namespace std;

int main() {
    int n, ans;
    cin >> n;
    if (n <= 6) cout << n;
    else if (n <= 11) {
        switch (n)
        {
        case 7:
            cout << 6; 
            break;
        case 8:
            cout << 5;
            break;
        case 9:
            cout << 4;
            break;
        case 10:
            cout << 3;
            break;
        case 11:
            cout << 2;
            break;    
        default:
            break;
        }
    } else {
        
    }
}