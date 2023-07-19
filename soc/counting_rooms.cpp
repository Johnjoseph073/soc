#include <iostream>
#include <vector>

using namespace std;

vector<vector<char>> map;
vector<vector<bool>> visited;
int n, m;
int rooms = 0;

// Directions: Up, Down, Left, Right
int dx[] = {-1, 1, 0, 0};
int dy[] = {0, 0, -1, 1};

void dfs(int x, int y) {
    visited[x][y] = true;

    for (int i = 0; i < 4; i++) {
        int nx = x + dx[i];
        int ny = y + dy[i];

        if (nx >= 0 && nx < n && ny >= 0 && ny < m && map[nx][ny] == '.' && !visited[nx][ny])
            dfs(nx, ny);
    }
}

int countRooms() {
    visited.resize(n, vector<bool>(m, false));

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            if (map[i][j] == '.' && !visited[i][j]) {
                dfs(i, j);
                rooms++;
            }
        }
    }

    return rooms;
}

int main() {
    cin >> n >> m;

    map.resize(n, vector<char>(m));

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            cin >> map[i][j];
        }
    }

    int result = countRooms();
    cout << result << endl;

    return 0;
}
