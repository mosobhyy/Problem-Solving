#include <iostream>
#include <bits/stdc++.h>

using namespace std;

char grid[100][100];
bool seen[100][100];
int n;

bool valid(int i, int j)
{
    return i >= 0 && j >= 0 && i < n && j < n;
}

void dfs(int i, int j)
{
    if (!valid(i, j) || seen[i][j] || grid[i][j] == '.')
        return;

    seen[i][j] = true;
    dfs(i - 1, j);
    dfs(i + 1, j);
    dfs(i, j - 1);
    dfs(i, j + 1);
}

int main()
{
    int t, c = 1;
    cin >> t;
    while (t--)
    {
        int ans = 0;
        cin >> n;

        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < n; j++)
            {
                cin >> grid[i][j];
                seen[i][j] = false;
            }
        }

        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < n; j++)
            {
                if (!seen[i][j] && grid[i][j] == 'x')
                {
                    ans++;
                    dfs(i, j);
                }
            }
        }

        cout << "Case " << c++ << ": " << ans << endl;
    }
    return 0;
}