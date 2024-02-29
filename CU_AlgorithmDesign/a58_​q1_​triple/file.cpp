#include <iostream>
#include <stdio.h>
#include <unordered_set>

using namespace std;

int main()
{
    int n, q;
    scanf("%d %d", &n, &q);
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
    int sum;
    bool found;
    int l, r;
    for (int i = 0; i < q; ++i)
    {
        found = false;
        scanf("%d", &sum);
        for (int j = 0; j < n - 1; ++j)
        {
            l = j + 1;
            r = n - 1;
            while (l < r)
            {
                if (sum == arr[j] + arr[l] + arr[r])
                {
                    found = true;
                    printf("YES\n");
                    break;
                }
                else if (sum > arr[j] + arr[l] + arr[r])
                    l++;
                else
                    r--;
            }
            if (found)
                break;
        }
        if (!found)
            printf("NO\n");
    }
}