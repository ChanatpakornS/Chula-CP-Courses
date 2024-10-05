#include <iostream>
int main() {
    int n;
    scanf("%d", &n);
    int m = (n) ? 1 : 0;
    while(m < n) m*=2;
    printf("%d", m-n);
}