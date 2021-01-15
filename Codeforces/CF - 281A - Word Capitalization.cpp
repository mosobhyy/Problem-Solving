#include <iostream>

using namespace std;

int main()
{
    string word;
    cin >> word;
    if ( int(word[0]) > 64 &&  int(word[0]) < 91 )
        cout << word;
    else if (int(word[0]) > 96 &&  int(word[0]) < 123 ){
        word[0] = char(int(word[0]) - 32);
        cout << word;
    }
    return 0;
}
