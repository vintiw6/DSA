#include <stdio.h>
#include <limits.h>

#define V 5  // Number of vertices

// Function to find the vertex with the minimum key value that is not yet included in the MST
int minKey(int key[], int mstSet[]) {
    int min = INT_MAX, minIndex;

    for (int v = 0; v < V; v++)
        if (!mstSet[v] && key[v] < min) {
            min = key[v];
            minIndex = v;
        }

    return minIndex;
}

// Prim's Algorithm
void primMST(int graph[V][V]) {
    int parent[V];  // Array to store the MST
    int key[V];     // Key values to pick minimum weight edge
    int mstSet[V];  // Array to track vertices included in the MST

    // Initialize all keys to infinity and mstSet[] to false
    for (int i = 0; i < V; i++) {
        key[i] = INT_MAX;
        mstSet[i] = 0;
    }

    key[0] = 0;        // Start with the first vertex
    parent[0] = -1;    // First vertex is the root of the MST

    for (int count = 0; count < V - 1; count++) {
        // Pick the minimum key vertex not yet in MST
        int u = minKey(key, mstSet);
        mstSet[u] = 1;

        // Update key and parent for adjacent vertices of the picked vertex
        for (int v = 0; v < V; v++) {
            if (graph[u][v] && !mstSet[v] && graph[u][v] < key[v]) {
                parent[v] = u;
                key[v] = graph[u][v];
            }
        }
    }
}