GraphNode* cloneGraph(int src)
{
  map<GraphNode*, GraphNode*>m;
  queue<GraphNode*> q;
  q.push(src);
  GraphNode *node;
  node = new GraphNode();
  node->val = src->val;
  m[src] = node;
  while(!q.empty())
  {
    GraphNode* u = q.front();
    q.pop();
    vector<GraphNode *>v = u->neighbours;
    for(int i=0;i<neighbour.size();i++)
    {
      if(!m[i])
      {
        GraphNode* newnode = new GraphNode();
        //m[v[i]]= newnode;
        newnode->val= v[i]->val;
        m[v[i]] = newnode;
        q.push(v[i]);
      }
      m[u]->neighbours.push_back(m[v[i]]);
    }

  }
  return m[src];
}
