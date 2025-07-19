//图的高级应用-迪杰斯特拉
#include <stdio.h>
#include <stdlib.h>
#include <limits.h>

#define MAX_VERTICES 100
#define INF 32767

typedef struct {
    char name;
    int index;
} Vertex;

Vertex vertices[MAX_VERTICES];
int adjacencyMatrix[MAX_VERTICES][MAX_VERTICES];
int numVertices = 0;

int findVertexIndex(char name) {
    for (int i = 0; i < numVertices; i++) {
        if (vertices[i].name == name) {
            return i;
        }
    }
    return -1;
}

void addEdge(char v1, char v2, int weight) {
    int i = findVertexIndex(v1);
    int j = findVertexIndex(v2);
    if (i != -1 && j != -1) {
        adjacencyMatrix[i][j] = weight;
        adjacencyMatrix[j][i] = weight;
    }
}

void dijkstra(int start, int end, int *distances, int *previous) {
    int visited[MAX_VERTICES] = {0};

    for (int i = 0; i < numVertices; i++) {
        distances[i] = INF;
        previous[i] = -1;
    }
    distances[start] = 0;

    for (int count = 0; count < numVertices - 1; count++) {
        int minDistance = INF;
        int u = -1;

        for (int v = 0; v < numVertices; v++) {
            if (!visited[v] && distances[v] < minDistance) {
                minDistance = distances[v];
                u = v;
            }
        }

        if (u == -1) break;
        visited[u] = 1;

        for (int v = 0; v < numVertices; v++) {
            if (!visited[v] && adjacencyMatrix[u][v] != INF) {
                if (distances[u] + adjacencyMatrix[u][v] < distances[v]) {
                    distances[v] = distances[u] + adjacencyMatrix[u][v];
                    previous[v] = u;
                }
            }
        }
    }
}

void printPath(int end, int *previous) {
    if (previous[end] == -1) {
        printf("%c", vertices[end].name);
        return;
    }
    printPath(previous[end], previous);
    printf("%c", vertices[end].name);
}

int main() {
    int numEdges;
    scanf("%d %d", &numVertices, &numEdges);

    // 读取顶点数据
    for (int i = 0; i < numVertices; i++) {
        scanf(" %c", &vertices[i].name);
        vertices[i].index = i;
    }

    // 初始化邻接矩阵
    for (int i = 0; i < numVertices; i++) {
        for (int j = 0; j < numVertices; j++) {
            adjacencyMatrix[i][j] = INF;
        }
    }

    // 读取边
    for (int i = 0; i < numEdges; i++) {
        char edge[3];
        int weight;
        scanf("%s %d", edge, &weight);
        addEdge(edge[0], edge[1], weight);
    }

    // 读取起点和终点
    char startChar, endChar;
    scanf(" %c %c", &startChar, &endChar);
    int start = findVertexIndex(startChar);
    int end = findVertexIndex(endChar);

    int distances[MAX_VERTICES];
    int previous[MAX_VERTICES];
    dijkstra(start, end, distances, previous);

    // 输出路径
    printPath(end, previous);
    printf("\n");

    return 0;
}
