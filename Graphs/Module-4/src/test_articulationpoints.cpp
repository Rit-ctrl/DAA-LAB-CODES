#include<bits/stdc++.h>
#include"../include/input.h"
using namespace std;

vector<int> adj[100];
  int n;
  bool flag=0;
 
vector<bool> visited;
vector<int> tin, low;
int timer;


void dfs(vector<int>adj[], int n, int v, int p = -1) {
    visited[v] = true;
    tin[v] = low[v] = timer++;
    int children=0;
    for (int to=0;to< adj[v].size();to++) {
        if (adj[v][to] == p) continue;
        if (visited[adj[v][to]]) {
            
            low[v] = min(low[v], tin[adj[v][to]]);
        } else {
            dfs(adj,n,adj[v][to], v);
            low[v] = min(low[v], low[adj[v][to]]);
            if (low[adj[v][to]] >= tin[v] && p!=-1)
                cout<<v<<" ";
            ++children;
        }
    }
    if(p == -1 && children > 1)
        cout<<v<<" ";
}

void find_cutpoints(vector<int>adj[],int n) {
    timer = 0;
    visited.assign(n, false);
    tin.assign(n, -1);
    low.assign(n, -1);
    for (int i = 0; i < n; ++i) {
        
        if (!visited[i])
            dfs (adj,n,i);
    }
}
int main() 
{   

    

  get_graph(adj,n,flag);//flag for undirected or directed
  cout<<"OUTPUT: "<<endl;  
  find_cutpoints(adj,n);
    return 0; 
}