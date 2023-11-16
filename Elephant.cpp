#include<bits/stdc++.h>
using namespace std;
int main()
{
    int k = 0;
    float x;
    cin >> x;
    while ( x != 0)
    {
    if ( x >= 5 ){
        x -= 5;
        k++;
        }
    else if ( x >= 4 ){
        x -= 4;
        k++;
        }
    else if ( x >= 3 ){
        x-= 3;
        k++;
        }
    else if ( x >= 2 ){
        x-= 2;
        k++;
        }
    else{
        x -= 1;
        k++;
    }
    }
    cout << k;
return 0;
}
