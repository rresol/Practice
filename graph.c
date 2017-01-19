#include<stdlib.h>
#include<stdio.h>

typedef struct node{
  int data;
  struct node* next;
}node;

typedef struct adjList{
  node *head;
}adjList;

typedef struct Graph{
  int v;
  adjList* array;
}Graph;

node* createNode(int data)
{
  node* newNode  = (node*)malloc(sizeof(node));
  newNode->data = data;
  newNode->next = NULL;
  return newNode;
}

Graph* createGraph(int v)
{
  Graph* graph = (Graph* )malloc(sizeof(Graph));
  graph->v  = v;
  graph->array  = (adjList*)malloc(v*sizeof(adjList));

  int i;
  for(i=0;i<v;i++)
    graph->array[i].head = NULL;

  return graph;
}
void addEdge(Graph *graph,int src, int dest){
  node* graphnode = createNode(dest);
  graphnode->next = graph->array[src].head;
  graph->array[src].head = graphnode;

  graphnode = createNode(src);
  graphnode->next = graph->array[dest].head;
  graph->array[dest].head = graphnode;
}

void printGraph(Graph* graph)
{
  node* pCrawl;
  int i;
  int v = graph->v;
  for(i=0;i<(graph->v);i++)
  {
    pCrawl = graph->array[i].head;
    while(pCrawl)
    {
      printf("%d ",pCrawl->data );
      pCrawl = pCrawl->next;
    }
    printf("\n");
  }
}


int main()
{
    // create the graph given in above fugure
    int V = 5;
    Graph* graph = createGraph(V);
    addEdge(graph, 0, 1);
    addEdge(graph, 0, 4);
    addEdge(graph, 1, 2);
    addEdge(graph, 1, 3);
    addEdge(graph, 1, 4);
    addEdge(graph, 2, 3);
    addEdge(graph, 3, 4);

    // print the adjacency list representation of the above graph
    printGraph(graph);

    return 0;
}
