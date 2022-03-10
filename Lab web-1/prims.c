#include <stdio.h>

int visited[20] = {0};
int v1, v2, ne = 1, v = 1, min = 0, cost = 0, n;
int adj[20][20];

void main()
{
    printf("\nEnter number of edges : ");
    scanf("%d", &n);

    printf("\nEnter cost adajacency matrix \n");
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= n; j++)
        {
            scanf("%d", &adj[i][j]);
            if (adj[i][j] == 0)
            {
                adj[i][j] = 999;
            }
        }
    }

    visited[v] = 1;
    while (ne < n)
    {
        min = 999;
        for (int i = 1; i <= n; i++)
        {
            for (int j = 1; j <= n; j++)
            {
                if (visited[i] == 1)
                {
                    if (adj[i][j] < min)
                    {
                        min = adj[i][j];
                        v1 = i;
                        v2 = j;
                    }
                }
            }
        }

        if (visited[v1] == 0 || visited[v2] == 0)
        {
            printf("\n");
            printf("cost of edge (%d, %d) = %d", v1, v2, min);
            cost += min;
            visited[v2] = 1;
            ne++;
        }
        adj[v1][v2] = adj[v2][v1] = 999;
        
    }

    printf("\nTotal Cost of the MST is %d", cost);
}
