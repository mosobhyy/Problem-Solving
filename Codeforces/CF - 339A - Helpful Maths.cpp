#include <iostream>
#include<bits/stdc++.h>

using namespace std;

int main()
{
    string word;
    cin >> word;
    for (int i = 0; i < word.size()-1; i++)
    {
        for (int j = i+2; j < word.size(); j+=2)
        {
            if(word[i]>word[j])
                swap(word[i], word[j]);
        }
    }
    cout << word;
    return 0;
}
