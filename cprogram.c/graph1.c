#include <stdio.h>

#define V 4 // Number of vertices

void init(int arr[V][V]) {
    for (int i = 0; i < V; i++)
        for (int j = 0; j < V; j++)
            arr[i][j] = 0;
}

void addEdge(int arr[V][V], int i, int j) {
    arr[i][j] = 1;
    arr[j][i] = 1; // Symmetric for undirected graph
}

void printAdjMatrix(int arr[V][V]) {
    for (int i = 0; i < V; i++) {
        for (int j = 0; j < V; j++) {
            printf("%d ", arr[i][j]);
        }
        printf("\n");
    }
}

int main() {
    int adjMatrix[V][V];
    init(adjMatrix);
    addEdge(adjMatrix, 0, 1);
    addEdge(adjMatrix, 0, 2);
    addEdge(adjMatrix, 1, 2);
    addEdge(adjMatrix, 2, 3);

    printAdjMatrix(adjMatrix);
    return 0;
}
