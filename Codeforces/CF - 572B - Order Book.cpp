#include <iostream>
#include <bits/stdc++.h>

using namespace std;

int main()
{
    map<int, int, greater<>> buy;
    map<int, int> sell;
    int n, s, p, q;
    char d;
    cin >> n >> s;
    for (int i = 0; i < n; i++)
    {
        cin >> d >> p >> q;
        if (d == 'B')
            buy[p] += q;
        else
            sell[p] += q;
    }

    int count = 1;
    auto it = sell.begin();
    if (sell.size() == 1)
        cout << "S " << it->first << " " << it->second << endl;
    else if (sell.size() > 1)
    {
        for (; it != --sell.end() && count < s; it++, count++)
        {
        }
        for (; count > 0; count--, it--)
            cout << "S " << it->first << " " << it->second << endl;
    }
    count = s;
    for (auto i : buy)
    {
        if (count == 0)
            break;
        cout << "B " << i.first << " " << i.second << endl;
        count--;
    }
    return 0;
}
