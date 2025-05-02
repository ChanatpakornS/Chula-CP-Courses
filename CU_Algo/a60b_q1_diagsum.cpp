#include <iostream>
#include <vector>
#include <algorithm>
#include <climits>
using namespace std;

int main()
{
    int n;
    cin >> n;

    vector<vector<int>> A(n, vector<int>(n));
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cin >> A[i][j];
        }
    }

    int maxSum = INT_MIN;

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            int sum = 0;
            int maxLen = min(n - i, n - j);
            for (int p = 0; p < maxLen; p++)
            {
                sum += A[i + p][j + p];
                maxSum = max(maxSum, sum);
            }
        }
    }

    cout << maxSum << "\n";

    return 0;
}
