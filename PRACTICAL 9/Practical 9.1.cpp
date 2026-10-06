#include <iostream>
#include <queue>
using namespace std;

int graph[5][5] = {
    {0, 1, 1, 0, 0},
    {1, 0, 0, 1, 1},
    {1, 0, 0, 0, 1},
    {0, 1, 0, 0, 0},
    {0, 1, 1, 0, 0}
};

bool visited[5];

void DFS(int node) {

    cout << node << " ";
    visited[node] = true;

    for (int i = 0; i < 5; i++) {
        if (graph[node][i] == 1 && visited[i] == false)
            DFS(i);
    }
}

void BFS(int start) {

    queue<int> q;
    bool seen[5] = {false};

    q.push(start);
    seen[start] = true;

    while (!q.empty()) {

        int node = q.front();
        q.pop();

        cout << node << " ";

        for (int i = 0; i < 5; i++) {
            if (graph[node][i] == 1 && seen[i] == false) {
                q.push(i);
                seen[i] = true;
            }
        }
    }
}

int main() {

    cout << "DFS: ";
    DFS(0);

    cout << endl;

    cout << "BFS: ";
    BFS(0);

    return 0;
}
