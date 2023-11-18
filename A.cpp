#include<bits/stdc++.h>
using namespace std;
int main()
{
    string cap = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
    string small = "abcdefghijklmnopqrstuvwxyz";
    string word;
    int k = 0, len,temp1 = 0,temp2 = 0;
    cin >> word;
    len = word.length();
    for ( int i = 0; i < len; i++ )
    {
        for ( int j = 0; j < 26; j++)
        {
            if ( word [i] == cap [j] )
            {
                temp1++;
            }
            if ( word [i] == small [j])
            {
                temp2++;
            }
        }
    }

if ( temp1 > temp2 )
{
    for ( int i = 0; i < len; i++)
    {
         for ( int j = 0; j < 26; j++)
        {
            if ( word [i] == small [j])
            {
            word [i] = cap [j];
            }
        }
    }
   
}
if (temp2 >= temp1)
{
    for ( int i = 0; i < len; i++)
    {
        for ( int j = 0; j < 26; j++ )
        {
            if ( word [i] == cap [j] )
            {
                word [i] = small [j];
            }
        }
    }
}
cout << word;

return 0;
}