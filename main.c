#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define MAX_VERTICES 5000

typedef struct node
{
    int vertex;
    struct node *next;
} node;

typedef struct
{
    node *head;
} matrix;

// prototypes

void initial(int n, matrix *list);
void addEdge(matrix *list, int src, int new);
int degree(int n, matrix *list);
int random(int n, matrix *list);

int main()
{
    int n;

    printf("Enter the number of vertices (max %d): ", MAX_VERTICES);
    scanf("%d", &n);

    if (n <= 0 || n > MAX_VERTICES)
    {
        printf("Invalid number of vertices. Please enter a number between 1 and %d.\n", MAX_VERTICES);
        return 1;
    }

    matrix *list = (matrix *)malloc(n * sizeof(matrix));

    initial(n, list);

    clock_t start_time = clock();

    int edgeCount = random(n, list);
    int deg = degree(n, list);

    printf("Number of edges: %d\n", edgeCount);

    if (2 * edgeCount == deg)
    {
        printf("The handshaking logic holds\n");
    }

    clock_t end_time = clock();

    double time_taken = ((double)(end_time - start_time)) / CLOCKS_PER_SEC * 1000;

    printf("Computational Time: %f ms\n", time_taken);

    return 0;
}

void initial(int n, matrix *list)
{
    for (int i = 0; i < n; ++i)
    {
        list[i].head = NULL;
    }
}

void addEdge(matrix *list, int src, int new)
{
    node *newnode;

    newnode = (node *)malloc(sizeof(node));
    newnode->vertex = new;
    newnode->next = list[src].head;
    list[src].head = newnode;

    newnode = (node *)malloc(sizeof(node));
    newnode->vertex = src;
    newnode->next = list[new].head;
    list[new].head = newnode;
}

int degree(int n, matrix *list)
{
    int degrees[MAX_VERTICES] = {0};
    int sumDegrees = 0;

    for (int i = 0; i < n; ++i)
    {
        node *current = list[i].head;
        while (current != NULL)
        {
            degrees[i]++;
            current = current->next;
        }
        sumDegrees += degrees[i];
    }

    printf("\nSum of degrees: %d\n", sumDegrees);
    return sumDegrees;
}

int random(int n, matrix *list)
{
    srand(time(NULL));
    int edgeCount = 0;

    for (int i = 0; i < n; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            if (rand() % 2 == 1)
            {
                addEdge(list, i, j);
                edgeCount++;
            }
        }
    }

    return edgeCount;
}
