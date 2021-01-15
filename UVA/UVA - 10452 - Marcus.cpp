#include <iostream>
#include <bits/stdc++.h>

using namespace std;

string str = "IEHOVA#";
char grid[9][9];
int dx[3] = {-1, 0, 0};
int dy[3] = {0, 1, -1};
string dir[3] = {"forth", "right", "left"};
int m, n, it;
vector<string> res;

bool valid(int i, int j)
{
    return i >= 0 && j >= 0 && i < m && j < n;
}

void dfs(int i, int j)
{
    for (int k = 0; k < 3; k++)
    {
        int xm = dx[k] + i;
        int ym = dy[k] + j;
        if (valid(xm, ym) && grid[xm][ym] == str[it])
        {
            res.push_back(dir[k]);
            it++;
            dfs(xm, ym);
        }
    }
}

int main()
{
    int t;
    cin >> t;
    while (t-- && cin >> m >> n)
    {
        it = 0;
        res.clear();
        for (int i = 0; i < m; i++)
            for (int j = 0; j < n; j++)
                cin >> grid[i][j];

        for (int i = 0; i < n; i++)
            if (grid[m - 1][i] == '@')
                dfs(m - 1, i);

        cout << res[0];
        for (int i = 1; i < res.size(); i++)
            cout << " " << res[i];
        cout << endl;
    }
    return 0;
}