#include <iostream>

#include <bits/stdc++.h>

using namespace std;

int main()
{
    string word;
    int start=0, index, steps, total=0;
    cin >> word;
    for (unsigned int i=0 ; i < word.length() ; i++)
    {
        index = word[i]-97;
        steps = abs(start - index);
        if (steps > 13)
            total += (26-steps);
        else
            total += steps;
        start = index;
    }
    cout << total;
    return 0;
}

