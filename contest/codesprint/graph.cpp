#include<iostream>
#include<list>
using namespace std;

class Graph{
    long long int v;
    list<long long int>*adj;
    public:
    
    Graph(long long int v);
    void addEdge(long long int v,long long  int w);
    long long int  DFSUtil(long long int v, bool visited[],long long int &count);
    
};

Graph::Graph(long long int v)
    {
    this->v = v;
    adj = new list<long long int>[v+1];
}
void Graph::addEdge(long long int v,long long  int w)
    {
    adj[v].push_back(w);
    adj[w].push_back(v);
}

long long int Graph::DFSUtil(long long int v, bool visited[],long long int &count)
    {
    if(!visited[v]){
    count++;
    visited[v] = true;
    //cout<<count<<endl;
    }
    list<long long int>::iterator i;
    for(i=adj[v].begin();i!=adj[v].end();i++)
        {
        if(!visited[*i])
            {
            DFSUtil(*i,visited,count);
        }
    }

    return count;

}

int main()
    {
    long long int queries;
    cin>>queries;
    while(queries--)
        {
        long long int city,roads,lib_cost,city_cost;
        cin>>city>>roads>>lib_cost>>city_cost;
        Graph g(city);
        while(roads--)
            {
            long long int path1,path2;
            cin>>path1>>path2;
            g.addEdge(path1,path2);
        }
        
        if(lib_cost<city_cost)
            {
            cout<<lib_cost*city<<endl;
        }
        else
            {
            long long int cost = 0;
            bool visited[city+1];
    for(long long int i=0;i<=city;i++){
        visited[i] = false;
    }

    for(long long int i=1;i<=city;i++){
        long long int count =0;
        if(!visited[i])
            {
             cost+=lib_cost;
            cost += city_cost*(g.   DFSUtil(i,visited,count)-1);
                // cout<<g.DFSUtil(i,visited,count)<<endl;
                // cout<<count<<endl;
        }
        
    }
            cout<<cost<<endl;
            
        }
    }
}