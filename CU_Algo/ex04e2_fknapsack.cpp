
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    double w, p = 0;
    cin >> w >> n;

    vector<double> val(n), weight(n);
    vector<pair<double, int>> ratio(n);
    for (int i = 0; i < n; ++i)
        cin >> val[i];
    for (int i = 0; i < n; ++i)
        cin >> weight[i];
    for (int i = 0; i < n; ++i)
        ratio[i] = {val[i] / weight[i], i};
    sort(ratio.begin(), ratio.end(), greater());
    for (int i = 0; i < n; ++i)
    {
        if (w - weight[ratio[i].second] < 0)
        {
            p += ratio[i].first * w;
            break;
        }
        else
        {
            w -= weight[ratio[i].second];
            p += val[ratio[i].second];
        }
    }

    printf("%.4f", p);

    return 0;
}