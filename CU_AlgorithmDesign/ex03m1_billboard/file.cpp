#include <iostream>
int main()
{
    int n;
    int d;
    int ad = 0, not_ad = 0;
    std::cin >> n;
    for (int i = 0; i < n; ++i)
    {
        std::cin >> d;
        int new_ad = not_ad + d;
        int new_not_ad = std::max(ad, not_ad);
        ad = new_ad;
        not_ad = new_not_ad;
    }

    std::cout << std::max(ad, not_ad);
    return 0;
}