#include <iostream>
#include<bits/stdc++.h>

using namespace std;

int main()
{
    long long n, x, d=0;
    cin >> n >> x;
    for(int i=0 ; i<n ;i++)
    {
        int temp;
        char sign;
        cin >> sign >> temp;
        if(sign=='+')
            x+=temp;
        else
        {
            if(x-temp<0)
                d++;
            else
                x-=temp;
        }
    }
    cout << x << " " << d;
    return 0;
}
