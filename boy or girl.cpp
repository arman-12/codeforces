#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    string k;
    int len,len2,flag;
    cin >>s;
    len = s.length();
    for (int i = 0; i < len; i++)
    {   flag = 1;
        for ( int j = 0; j < len; j++)
        {
            if (s[i]==k[j])
                flag = 0;
        }
        if(flag)
            k[i]=s[i];
    }
len2 = k.length();
    cout << len2;
   // if ( l % 2 == 0 )
        //cout << "CHAT WITH HER!"<<endl;
   // else
        //cout << "IGNORE HIM!"<<endl;
return 0;
}
