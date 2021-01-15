#include <iostream>

using namespace std;

int main()
{
    int distinct = 0;
    string letter;
    getline(cin, letter);
    for (size_t i = 0; i < letter.size(); i++)
    {
        bool flag = true;
        if ( (int(letter[i])) > 96 && (int(letter[i])) < 123)
        {
            for (size_t x = i+1; x < letter.size(); x++)
            {
                if (letter[i] == letter[x])
                {
                    flag = false;
                    break;
                }
            }
            if(flag)
                distinct++;
        }
    }
    cout << distinct;
}
