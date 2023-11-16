#include <bits/stdc++.h>
using namespace std;
int main()
{
    long double m, n, a;
    long long int e, f, res = 0;
    long double c, d, g, h;
    cin >> m >> n >> a;
    if (m >= a && n >= a)
    {
        c = m / a;
        d = n / a;
        e = c;
        f = d;
        g = c - e;
        h = d - f;

        if (g != 0)
        {
            c = (c - g) + 1;
        }
        if (h != 0)
        {
            d = (d - h) + 1;
        }
        res = c * d;
        cout << res;
    }
    else if ( m <= a && n <= a)
    {
        res = 1;
        cout << res;
    }
    else if ( a == 1)
    {
        cout << m * n;
    }
    else
    {
        if ( m < a && n > a )
        {
            c = 1;
            d = n / a;
            f = d;
            h = d - f;
            if (h != 0)
        {
            d = (d - h) + 1;
        }
        cout << c * d;
        }
        if ( n < a && m > a)
        {
            d = 1;
            c = m / a;
            e = c;
            g = c - e;
         if (g != 0)
        {
            c = (c - g) + 1;
        }
        cout << c * d;
        }
    }
    return 0;
}