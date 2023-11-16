#include <bits/stdc++.h>
using namespace std;
int main()
{
    int k, n, w, t_price = 0;
    cin >> k >> n >> w;
    for (int i = 1; i <= w; i++)
    {
        t_price += i * k;
    }
    if (t_price > n)
    {
        cout << t_price - n;
    }
    else {cout << 0; }
    return 0;
}