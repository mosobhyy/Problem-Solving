#include <iostream>

using namespace std;

char grid[30][30];
bool seen[30][30];
int dx[8] = {1, -1, 0, 0, 1, 1, -1, -1};
int dy[8] = {0, 0, 1, -1, 1, -1, 1, -1};
int n;

bool valid(int i, int j)
{
    return i >= 0 && j >= 0 && i < n && j < n;
}

void dfs(int i, int j)
{
    if (seen[i][j])
        return;

    seen[i][j] = true;
    for (int k = 0; k < 8; k++)
    {
        int xm = dx[k] + i;
        int ym = dy[k] + j;
        if (valid(xm, ym) && !seen[xm][ym] && grid[xm][ym] == '1')
            dfs(xm, ym);
    }
}

int main()
{
    int t = 1;
    while (cin >> n)
    {
        int ans = 0;
        /*  Read input and initialize of seen 2d array by false  */
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
                if (!seen[i][j] && grid[i][j] == '1')
                {
                    dfs(i, j);
                    ans++;
                }
            }
        }

        cout << "Image number " << t++ << " contains " << ans << " war eagles.\n";
    }
    return 0;
}