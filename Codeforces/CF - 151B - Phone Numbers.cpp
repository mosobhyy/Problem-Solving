#include <iostream>
#include <bits/stdc++.h>

using namespace std;

int main()
{
    map<string, int> taxi;
    map<string, int> pizza;
    map<string, int> girl;
    int n, s;
    cin >> n;
    vector<string> namesOrder(n);
    for (int i = 0; i < n; i++)
    {
        cin >> s;
        string name;
        cin >> name;
        namesOrder[i] = name;
        for (int j = 0; j < s; j++)
        {
            string phone;
            cin >> phone;
            if (phone[0] == phone[1] && phone[0] == phone[3] && phone[0] == phone[4] && phone[0] == phone[6] &&
                phone[0] == phone[7])
                taxi[name]++;
            else if (phone[0] > phone[1] && phone[1] > phone[3] && phone[3] > phone[4] && phone[4] > phone[6] && phone[6] > phone[7])
                pizza[name]++;
            else
                girl[name]++;
        }
    }
    int maxTaxi = 0, maxPizza = 0, maxGirl = 0;
    for (auto i :taxi)
        if (i.second > maxTaxi)
            maxTaxi = i.second;
    for (auto i :pizza)
        if (i.second > maxPizza)
            maxPizza = i.second;
    for (auto i :girl)
        if (i.second > maxGirl)
            maxGirl = i.second;
    cout << "If you want to call a taxi, you should call: ";
    int count = 0;
    for (auto i :namesOrder)
    {
        if (taxi[i] == maxTaxi)
        {
            if (count == 0)
                cout << i;
            else
                cout << ", " << i;
            count++;
        }
    }
    cout << ".\n";
    cout << "If you want to order a pizza, you should call: ";
    count = 0;
    for (auto i :namesOrder)
    {
        if (pizza[i] == maxPizza)
        {
            if (count == 0)
                cout << i;
            else
                cout << ", " << i;
            count++;
        }
    }
    cout << ".\n";
    cout << "If you want to go to a cafe with a wonderful girl, you should call: ";
    count = 0;
    for (auto i :namesOrder)
    {
        if (girl[i] == maxGirl)
        {
            if (count == 0)
                cout << i;
            else
                cout << ", " << i;
            count++;
        }
    }
    cout << ".";
    return 0;
}
