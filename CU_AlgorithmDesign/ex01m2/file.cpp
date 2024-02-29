#include <iostream>

#include <vector>

using namespace std;

int main()
{
    int n;
    int ans = 0;
    scanf("%d", &n);
    int vec[n];
    for (int i = 0; i < n; ++i)
    {
        int a;
        scanf("%d", &a);
        vec[i] = a;
    }

    for (int i = 0; i < n - 1; ++i)
    {
        for (int j = i + 1; j < n; ++j)
        {
            if (vec[i] > vec[j])
                ans++;
        }
    }

    printf("%d", ans);
}