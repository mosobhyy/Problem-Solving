#include <iostream>
#include <bits/stdc++.h>

using namespace std;

char grid[30][30];
bool seen[30][30];
int dx[4] = {1, -1, 0, 0};
int dy[4] = {0, 0, 1, -1};
int h, w;

bool valid(int i, int j)
{
    return i >= 0 && j >= 0 && i < h && j < w;
}

void dfs(int i, int j)
{
    if (seen[i][j])
        return;

    seen[i][j] = true;
    for (int k = 0; k < 4; k++)
    {
        int xm = dx[k] + i;
        int ym = dy[k] + j;
        if (valid(xm, ym) && !seen[xm][ym] && grid[xm][ym] == grid[i][j])
            dfs(xm, ym);
    }
}

int main()
{
    map<char, int> ans;
    int t, c = 1;
    cin >> t;
    while (t-- && cin >> h >> w)
    {
        /*  Read input and initialize of seen 2d array by false  */
        for (int i = 0; i < h; i++)
        {
            for (int j = 0; j < w; j++)
            {
                cin >> grid[i][j];
                seen[i][j] = false;
            }
        }

        for (int i = 0; i < h; i++)
        {
            for (int j = 0; j < w; j++)
            {
                if (!seen[i][j])
                {
                    dfs(i, j);
                    ans[grid[i][j]]++;
                }
            }
        }

        cout << "World #" << c++ << endl;
        while (!ans.empty())
        {
            auto max = ans.begin();
            for (auto it = ans.begin(); it != ans.end(); it++)
                if (it->second > max->second)
                    max = it;
            cout << max->first << ": " << max->second << endl;
            ans.erase(max);
        }
    }
    return 0;
}