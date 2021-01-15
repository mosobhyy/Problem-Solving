#include <iostream>
#include <bits/stdc++.h>

using namespace std;

int main()
{
    string vowels = "aoyeui";
    string str;
    cin >> str;
    for(char & i : str)
    {
        if(int(i) <= 90)
            i += 32;
        if(i == 'a' || i == 'o' || i == 'y' || i == 'e' || i == 'u' || i == 'i')
            continue;
        else
            cout << "." << i;
    }
    return 0;
}
