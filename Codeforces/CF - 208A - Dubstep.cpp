#include <iostream>

using namespace std;

int main()
{
    string s;
    bool space=false;
    cin >> s;
    for (int i=0 ; i<s.size() ; i++)
    {
        if (s[i]=='W' && s[i+1]=='U' && s[i+2]=='B')
        {
            i+=2;
            if(space)
                cout << " ";
        }
        else
        {
            cout << s[i];
            space=true;
        }
    }
    return 0;
}

