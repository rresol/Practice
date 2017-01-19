#include<iostream>
#include<list>
using namespace std;

class Graph::Graph{
	int v;
	list<int> *adj;
	bool isCyclicUtil(int v, bool visited[], int parent);
	public:
	Graph(int v);
	void addEdge(int v, int w);
	bool isCyclic();	
}

Graph::Graph(int v)
{
	this->v = v;
	list<int> *adj = new list<int>[v];
}

void Graph::addEdge(int v, int w)
{
	adj[v].push_back(w);
	adj[w].push_back(v);
}

bool isCyclicUtil(int v, bool visited[], int parent)
{
	visited[v] = true;
	list<int>iterator::i;
	
	if()
}
int main()
{

}