#include <iostream>

using namespace std;

int main()
{
    string s, check = "hello";
    int it=0;
    cin >> s;
    for (int i=0 ; i<s.size() ; i++)
    {
        if (it < check.size() && s[i] == check[it])
            it++;
    }
    if (it == check.size())
        cout << "YES";
    else
        cout << "NO";
    return 0;
}

