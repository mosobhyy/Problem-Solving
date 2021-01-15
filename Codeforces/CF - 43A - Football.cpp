#include <iostream>
#include <bits/stdc++.h>

using namespace std;

int main()
{
    string str, team1 = "null", team2 = "null";
    int n, score1 = 0, score2 = 0;
    cin >> n;
    for(int i = 0 ; i < n ; i++)
    {
        cin >> str;
        if(team1 == "null" || str == team1)
        {
            team1 = str;
            score1++;
        }
        else
        {
            team2 = str;
            score2++;
        }
    }
    (score1 > score2) ? cout << team1 : cout << team2;
    return 0;
}
