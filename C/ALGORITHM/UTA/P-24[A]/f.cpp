#include <iostream>
#include <vector>
#include <queue>
using namespace std;

int n, m;
vector<string> grid;
vector<vector<bool>> visited;

int dx[] = {-1, 1, 0, 0};
int dy[] = {0, 0, -1, 1};

bool is_inside(int x, int y) {
    return x >= 0 && x < n && y >= 0 && y < m;
}

int bfs(int sx, int sy) {
    queue<pair<int, int>> q;
    queue<int> steps;
    visited[sx][sy] = true;
    q.push({sx, sy});
    steps.push(0);

    while (!q.empty()) {
        auto [x, y] = q.front(); q.pop();
        int step = steps.front(); steps.pop();

        for (int d = 0; d < 4; d++) {
            int nx = x + dx[d];
            int ny = y + dy[d];

            if (!is_inside(nx, ny)) {
                // Escaped the grid
                return step + 1;
            }

            if (!visited[nx][ny] && grid[nx][ny] == '.') {
                visited[nx][ny] = true;
                q.push({nx, ny});
                steps.push(step + 1);
            }
        }
    }

    return -1; // Cannot escape
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    cin >> n >> m;
    grid.resize(n);
    visited.assign(n, vector<bool>(m, false));

    int sx = -1, sy = -1;

    for (int i = 0; i < n; i++) {
        cin >> grid[i];
        for (int j = 0; j < m; j++) {
            if (grid[i][j] == '$') {
                sx = i;
                sy = j;
                grid[i][j] = '.'; // Mark as walkable
            }
        }
    }

    int result = bfs(sx, sy);
    cout << result << "\n";

    return 0;
}
