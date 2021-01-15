#include <iostream>

#include <cstdlib>

using namespace std;

int main()
{
    int val, upper = 0;
    string word;
    cin >> word;
    for (int i = 0 ; i < word.size() ; i++)
        if ( int(word[i]) >= 65 && int(word[i]) <= 90 )
            upper ++;
    if (upper > (word.size() / 2) ){
        for (int i = 0 ; i < word.size() ; i++)
            if ( int(word[i]) >= 97 && int(word[i]) <= 122 ){
                word[i] = char(int(word[i]) - 32);
            }
    }
    else{
        for (int i = 0 ; i < word.size() ; i++)
            if ( int(word[i]) >= 65 && int(word[i]) <= 90 ){
                word[i] = char(int(word[i]) + 32);
            }
    }
    cout << word;
    return 0;
}

