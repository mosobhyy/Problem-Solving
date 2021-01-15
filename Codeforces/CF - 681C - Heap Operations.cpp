#include <iostream>
#include <bits/stdc++.h>

using namespace std;

int main()
{
    multiset<int> numbers;
    vector<pair<string, int>> result;
    string op;
    int n, value;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cin >> op;
        if (op[0] == 'r')
        {
            if (numbers.empty())
                result.emplace_back("insert", 0);
            else
                numbers.erase(numbers.find(*numbers.begin()));
            result.emplace_back(op, 0);
        }

        else
        {
            cin >> value;
            if (op[0] == 'i')
                numbers.insert(value);

            else if (op[0] == 'g')
            {
                while (!numbers.empty() && (*numbers.begin()) < value)
                {
                    numbers.erase(numbers.find(*numbers.begin()));
                    result.emplace_back("removeMin", 0);
                }
                if (numbers.empty() || value < *numbers.begin())
                {
                    numbers.insert(value);
                    result.emplace_back("insert", value);
                }
            }
            result.emplace_back(op, value);
        }
    }
    cout << result.size() << endl;
    for (auto &i : result)
        if (i.first[0] == 'r')
            cout << i.first << '\n';
        else
            cout << i.first << " " << i.second << '\n';
    return 0;
}
