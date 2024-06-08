#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, m;
    cin >> n >> m;
    vector<vector<char>> grid(n, vector<char>(m));
    vector<vector<int>> dist(n, vector<int>(m, INT_MAX));
    vector<vector<pair<int, int>>> parent(n, vector<pair<int, int>>(m, {-1, -1}));
    int startRow = 0, startCol = 0, endRow = 0, endCol = 0;
    
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            cin >> grid[i][j];
            if (grid[i][j] == 'A') {
                startRow = i;
                startCol = j;
            }
            if (grid[i][j] == 'B') {
                endRow = i;
                endCol = j;
            }
        }
    }
    
    int dr[4] = {-1, 0, 1, 0};
    int dc[4] = {0, 1, 0, -1};
    char dir[4] = {'U', 'R', 'D', 'L'};
    
    queue<pair<int, int>> q;
    q.push({startRow, startCol});
    dist[startRow][startCol] = 0;
    
    while (!q.empty()) {
        int r = q.front().first;
        int c = q.front().second;
        q.pop();
        
        for (int i = 0; i < 4; i++) {
            int nr = r + dr[i];
            int nc = c + dc[i];
            
            if (nr >= 0 && nc >= 0 && nr < n && nc < m && grid[nr][nc] != '#' && dist[nr][nc] == INT_MAX) {
                dist[nr][nc] = dist[r][c] + 1;
                parent[nr][nc] = {r, c};
                q.push({nr, nc});
                
                if (nr == endRow && nc == endCol) {
                    break;
                }
            }
        }
    }
    
    if (dist[endRow][endCol] == INT_MAX) {
        cout << "NO" << endl;
    } else {
        cout << "YES" << endl;
        cout << dist[endRow][endCol] << endl;
        
        string path;
        int r = endRow;
        int c = endCol;
        while (r != startRow || c != startCol) {
            pair<int, int> p = parent[r][c];
            for (int i = 0; i < 4; i++) {
                if (r - dr[i] == p.first && c - dc[i] == p.second) {
                    path.push_back(dir[i]);
                    break;
                }
            }
            r = p.first;
            c = p.second;
        }   
        reverse(path.begin(), path.end());
        cout << path << endl;
    }
    return 0;
}
