#include <bits/stdc++.h>
using namespace std;

const int INF = 1e9;
const int dx[4] = {0, 1, 0, -1};
const int dy[4] = {1, 0, -1, 0};

int main()
{
    int n, m;
    cin >> n >> m;

    vector<string> grid(n);
    pair<int, int> start;

    for (int i = 0; i < n; ++i)
    {
        cin >> grid[i];
        for (int j = 0; j < m; ++j)
        {
            if (grid[i][j] == '$')
            {
                start = {i, j};
            }
        }
    }

    vector<vector<int>> dist(n, vector<int>(m, INF));
    queue<pair<int, int>> q;

    q.push(start);
    dist[start.first][start.second] = 0;

    while (!q.empty())
    {
        auto [x, y] = q.front();
        q.pop();

        for (int dir = 0; dir < 4; ++dir)
        {
            int nx = x + dx[dir], ny = y + dy[dir];

            if (nx >= 0 && nx < n && ny >= 0 && ny < m &&
                grid[nx][ny] == '.' && dist[nx][ny] == INF)
            {
                dist[nx][ny] = dist[x][y] + 1;
                q.push({nx, ny});
            }
        }
    }

    int minSteps = INF;
    
    for (int i = 0; i < n; ++i)
    {
        for (int j : {0, m - 1})
        {
            if (grid[i][j] == '.' || (i == start.first && j == start.second))
                minSteps = min(minSteps, dist[i][j]);
        }
    }
    for (int j = 0; j < m; ++j)
    {
        for (int i : {0, n - 1})
        {
            if (grid[i][j] == '.' || (i == start.first && j == start.second))
                minSteps = min(minSteps, dist[i][j]);
        }
    }

    if (minSteps == INF)
        cout << -1 << endl;
    else
        cout << minSteps + 1 << endl;

    return 0;
}