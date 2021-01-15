#include <iostream>

using namespace std;

int main()
{
    string s;
    bool series;
    cin >> s;
    for (unsigned int i=0 ; i < s.size()-1 ; i++)
    {
        series = true;
        for (unsigned int x=i+1; x<i+7; x++)
        {
            if (s[i]!=s[x])
            {
                series = false;
                break;
            }
        }
        if (series)
        {
            cout << "YES";
            return 0;
        }
    }
    cout << "NO";
    return 0;
}

