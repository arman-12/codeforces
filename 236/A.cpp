#include<bits/stdc++.h>
using namespace std;
int main()
{
int len, res = 0;
string s[len];
cin >> s;
len = s.size();
    for ( int i = 0; i < len/2; i++)
    {
        if(s[i] != s[len-i])
        {
            res += 2;
        }
    }
    cout << res;
return 0;    
}