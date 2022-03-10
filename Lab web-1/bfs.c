#include <stdio.h>

int adj[20][20];
int queue[20], visited[20];
int front = 0, rear = -1, vi = 0, n = 0;

void enqueue(int v){
    
    rear++;
    queue[rear] = v;
}

int dequeue(){
    int temp = queue[front];
    front++;
    return temp;
}

int notVisited(int v){
    int flag = 1;
    for (int i = 0; i < vi; i++)
    {
        if (v == visited[i])
        {
            flag = 0;
        }
        
    }
    return flag;
}

void markAsVisited(int v){
    visited[vi] = v;
    vi++;
}

void createMatrix(){
    printf("\n Enter no of vertices : ");
    scanf("%d", &n);
    printf("\n Enter adjacency matrix : \n");
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= n; j++)
        {
            scanf("%d", &adj[i][j]);
        }
        
    }
}

void checkAndAdd(int v){
    if (notVisited(v))
    {
        printf("%d  ", v);
        markAsVisited(v);
    }

    for (int i = 1; i <= n; i++)
    {
        if (adj[v][i] == 1 && notVisited(i))
        {
            printf("%d  ",i);
            enqueue(i);
            markAsVisited(i);
        }
        
    }
    
    
    if (front <= rear)
    {
       checkAndAdd(dequeue());
    }
    
    
}

void bfs(){
    printf("\nEnter starting vertex : ");
    int vertex;
    scanf("%d", &vertex);

    checkAndAdd(vertex);
}
void main(){
    createMatrix();
    bfs();
}