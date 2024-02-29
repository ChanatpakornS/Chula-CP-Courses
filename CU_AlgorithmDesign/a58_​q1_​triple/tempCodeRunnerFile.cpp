#include <iostream>
#include <unordered_set>

using namespace std;

int main()
{
    std::ios_base::sync_with_stdio(false);
    cin.tie(0);
    int n, q;
    cin >> n >> q;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
    int query[q];
    for (int i = 0; i < q; ++i)
    {
        bool found = false;
        scanf("%d", &query[i]);
        for (int j = 0; j < n - 1; ++j)
        {
            int l = j + 1;
            int r = n - 1;
            while (l < r)
            {
                if (query[i] < arr[j] + arr[l] + arr[r])
                    r--;
                else if (query[i] > arr[j] + arr[l] + arr[r])
                    l++;
                else
                {
                    found = true;
                    break;
                }
            }
            if (found) break;
        }
        if (found)
                printf("YES\n");
            else
                printf("NO\n");
    }
}