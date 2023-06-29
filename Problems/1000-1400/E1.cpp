#include <bits/stdc++.h>
using namespace std;
int grid[1005][1005];
int dp[1005][1005];
int n;

int dfs(int x, int y)
{
    if(x < 0 || y >= n || x >= n) return 0;
    if(dp[x][y] != -1) return dp[x][y];
    return dp[x][y] = grid[x][y] + max({dfs(x+1,y+2),dfs(x-1,y+2),dfs(x+2,y+1),dfs(x-2,y+1)});
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int x, y;
        memset(grid, 0, sizeof(grid));
        memset(dp, -1, sizeof(dp));
        cin >> n;
        string s;
        for (int i = 0; i < n; i++)
        {
            cin >> s;
            for (int j = 0; j < n; j++)
            {
                if (s[j] == 'P')
                {
                    grid[i][j]++;
                }
                else if (s[j] == 'K')
                {
                    x = i;
                    y = j;
                }
            }
        }
        cout << dfs(x,y) << '\n';
    }
}