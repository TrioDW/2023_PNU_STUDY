#define MAX_NODES 10
#define INF 1000000000
#define False 0
#define True 1

#include <stdio.h>

typedef struct GraphType {
    int n;
    int cost[MAX_NODES][MAX_NODES];
} GraphType;

int distance[MAX_NODES];
int found[MAX_NODES];

void print_status(GraphType* g, int step) {
    printf("STEP %d:\n", step);
    printf("\tdistance:\t");
    for (int i = 0; i < g->n; i++) {
        if (distance[i] == INF) {
            printf("*\t");
        } else {
            printf("%d\t", distance[i]);
        }
    }
    printf("\n\t   found:\t");
    for (int i = 0; i < g->n; i++) {
        printf("%d\t", found[i]);
    }
    printf("\n");
}

int choose(int distance[], int n, int found[]) {
    int cmp = INF, ans = 0;
    for (int i = 0; i < n; i++) {
        if (found[i] == False && distance[i] < cmp) {
            cmp = distance[i];
            ans = i;
        }
    }
    return ans;
}

void shortest_path(GraphType* g, int start_node) {
    found[start_node] = True;
    for (int i = 0; i < g->n; i++) {
        distance[i] = g->cost[start_node][i];
    }
    for (int i = 0; i < g->n; i++) {
        print_status(g, i);
        int now = choose(distance, g->n, found);
        found[now] = True;
        for (int next = 0; next < g->n; next++) {
            if (distance[now] + g->cost[now][next] < distance[next]) {
                distance[next] = distance[now] + g->cost[now][next];
            }
        }
    }
}



int main() {
  int start_node_index = 1;

//  GraphType G = {
//      6,
//      {
//          {0, 5, 3, 7, INF, INF},
//          {5, 0, 4, INF, 7, 9},
//          {3, 4, 0, 3, 8, INF},
//          {7, INF, 3, 0, 4, INF},
//          {INF, 7, 8, 4, 0, 2},
//          {INF, 9, INF, INF, 2, 0},
//      }
//  };

  GraphType G = {
      7,
      {
          {0, 7, INF, INF, 3, 10, INF},
          {7, 0, 4, 10, 2, 6, INF},
          {INF, 4, 0, 2, INF, INF, INF},
          {INF, 10, 2, 0, 11, 9, 4},
          {3, 2, INF, 11, 0, INF, 5},
          {10, 6, INF, 9, INF, 0, INF},
          {INF, INF, INF, 4, 5, INF, 0},
      }
  };


  shortest_path(&G, start_node_index);
}