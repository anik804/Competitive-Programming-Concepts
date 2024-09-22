#include<bits/stdc++.h>
using namespace std;

const int mX = 1E7+123;
int cnt[mX];
int main()
{
    int limit = 10;

    for( int i = 1 ; i <= limit ; i++ )
    {
        for( int j = i ; j <= limit ; j += i )
        {
            cnt[j]++;
        }
    }

    for( int i = 1 ; i <= limit ; i++ )
    {
        cout << i << " : " << cnt[i] << endl;
    }

    return 0;
}