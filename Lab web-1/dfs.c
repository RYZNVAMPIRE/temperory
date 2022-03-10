#include <stdio.h>

int adj[20][20];
int stack[20];
int top = -1;
int visited[20];
int vi = 0;
int n;

void create()
{
    printf("\nEnter number of vertices : ");
    scanf("%d", &n);
    printf("\nEnter adjacency matrix\n");
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            scanf("%d", &adj[i][j]);
        }
    }
}

void push(int data)
{
    top++;
    stack[top] = data;
}

int pop()
{
    int temp = stack[top];
    top--;
    return temp;
}

void markVisited(int v)
{
    visited[vi] = v;
    vi++;
}

int isVisited(int v)
{
    int flag = 0;
    for (int i = 0; i < vi; i++)
    {
        if (visited[i] == v)
        {
            flag = 1;
        }
    }
    return flag;
}

void checkAndAdd(int v)
{
    if ((isVisited(v) == 0))
    {
        printf("%d  ", v);
        markVisited(v);
    }

    for (int i = 0; i < n; i++)
    {

        if ((adj[v - 1][i] == 1) && (isVisited(i + 1) == 0))
        {
            markVisited(i + 1);
            printf("%d  ", i + 1);
            push(i + 1);
        }
    }
    if (top >= 0)
    {
        checkAndAdd(pop());
    }
}

void dfs()
{
    int v;
    printf("\nEnter starting vertex : ");
    scanf("%d", &v);
    checkAndAdd(v);
}

void main()
{
    create();
    dfs();
}