#include <iostream>

long long int bsrch(int l, int r, int n);

int main()
{
    int t, n;
    std::cin >> t;

    while (t--)
    {
        std::cin >> n;
        int ans = bsrch(1, 100000, n);
        std::cout << ans << std::endl;
    }

    return 0;
}

long long int bsrch(int l, int r, int n)
{
    if (r - l <= 1)
    {
        long long int mid2 = (l + r) / 2;
        long long int temp = (mid2 * (mid2 + 1) / 2);

        if (temp == n)
            return mid2;
        else if (temp > n)
            return l;
        else
        {
            long long int temp2 = (r * (r + 1) / 2);
            if (temp2 <= n)
                return r;
            else
                return mid2;
        }
    }
    else
    {
        long long int mid = (l + r) / 2;
        long long int temp = (mid * (mid + 1) / 2);

        if (temp == n)
            return mid;
        else if (temp < n)
            return bsrch(mid, r, n);
        else
            return bsrch(l, mid - 1, n);
    }
}
