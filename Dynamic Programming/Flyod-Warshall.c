#include <stdio.h>

#define V 4
#define INF 99999  // A large value representing infinity

// Floyd-Warshall algorithm
void floydWarshall(int graph[V][V]) {
    int dist[V][V];

    // Initialize distance matrix with the given graph's adjacency matrix
    for (int i = 0; i < V; i++)
        for (int j = 0; j < V; j++)
            dist[i][j] = graph[i][j];

    // Compute shortest distances
    for (int k = 0; k < V; k++) {             // Intermediate vertex
        for (int i = 0; i < V; i++) {         // Source vertex
            for (int j = 0; j < V; j++) {     // Destination vertex
                if (dist[i][k] != INF && dist[k][j] != INF && dist[i][k] + dist[k][j] < dist[i][j])
                    dist[i][j] = dist[i][k] + dist[k][j];
            }
        }
    }

