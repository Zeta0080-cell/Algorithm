//图的高级应用-图的遍历及连通性
#include <stdio.h>
#include <stdbool.h>

void DFS(int n, int A[n][n], bool visited[], int v) {
    visited[v] = true;
    for (int i = 0; i < n; i++) {
        if (A[v][i] == 1 && !visited[i]) {
            DFS(n, A, visited, i);
        }
    }
}

int main() {
    int n;
    scanf("%d", &n);
    int A[n][n];
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            scanf("%d", &A[i][j]);
        }
    }

    bool visited[n];
    for (int i = 0; i < n; i++) {
        visited[i] = false;
    }

    int count = 0;
    for (int i = 0; i < n; i++) {
        if (!visited[i]) {
            DFS(n, A, visited, i);
            count++;
        }
    }

    printf("%d\n", count);
    return 0;
}
