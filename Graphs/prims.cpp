#include<bits/stdc++.h>
#include<iostream>
#include<vector>

using namespace std;

struct triplets{
		int u, v, w;
};

void addEdge(vector<pair<int, int>> adj[], int u, int v, int wt, bool flag=0){    //0 for undirected and 1 for directed.

	if(flag == 0){
		
		adj[u].push_back(make_pair(v, wt));
		adj[v].push_back(make_pair(u, wt));
	}
	else{
		adj[u].push_back(make_pair(v, wt));
	}
}

bool cmppair(const triplets &i1, triplets &i2) 
{ 
    return (i1.w < i2.w); 
}

void MST_Prim(vector<pair<int, int>> G[], int vert){

	vector<pair<int, int>> MST[vert];

	int vertertex = 0, count = 1;
	bool neighbour[vert] = {0};
	neighbour[0] = 1;
	cout<<"\n\n";
	for(int i=0; i<vert-1; i++){
		
		// cout<<"1";
		vector<triplets> pairs;

		// Push all neighbours of the vertices in focus
		int k = 0;
		while(k<vert){
			if(neighbour[k]){
				for(int q=0; q<G[k].size(); q++){
					triplets push;
					push.u = k;
					push.v = G[k][q].first;
					push.w = G[k][q].second;
					
					pairs.push_back(push);
				}
			}
			k++;
		}
		// cout<<"2";
		
		//Sort them to find edge with least weight
		sort(pairs.begin(), pairs.end(), cmppair);
		// cout<<"3";

		int u = pairs[0].u, v = pairs[0].v, w = pairs[0].w;

		//Push minimum edge (u, v) and (v, u) into MST.
		printf("Pushing: %d, %d, %d\n", u, v, w);
		MST[u].push_back(make_pair(v, w));
		MST[v].push_back(make_pair(u, w));
		int adr;
		
		// Find and delete edge (u, v)
		for(int j=0; j<G[u].size(); j++){

			if(v == G[u][j].first){
				adr = j;
				break;
			}
		}

		// cout<<"4";
		G[u].erase(G[u].begin()+adr);

		// //Find and delete edge (v, u)		
		for(int j=0; j<G[v].size(); j++){

			if(u == G[v][j].first){
				adr = j;
				break;
			}
		}
		G[v].erase(G[v].begin()+adr);

		// cout<<"4";
		// G[u].erase(G[u].begin()+adr);
		// cout<<"5";

		cout<<"\n\nEdges of G are:\n";

		for(int i=0; i<vert; i++){
			cout<<i<<": ";
			for(int j=0; j<G[i].size(); j++){
				printf("(%d, %d)", G[i][j].first, G[i][j].second);
			}
			cout<<endl;
		}

		neighbour[v] = 1;
		count ++;

	
	}

	cout<<"\n\nEdges of MST are:\n";
	for(int i=0; i<vert; i++){
		cout<<i<<": ";
		for(int j=0; j<MST[i].size(); j++){
			printf("(%d, %d)", MST[i][j].first, MST[i][j].second);
		}
	cout<<endl;
	}
}


int main (){

	int v;
	cout<<"Enter number of vertices of graph\n";
	cin>>v;
	vector<pair<int, int>> adj[v];
	
	bool flag;
	cout<<"Enter 1 for directed and 0 for undirected\n";
	cin>>flag;
	
	int e;
	cout<<"Enter number of edges:\n";
	cin>>e;

	for(int i=0; i<e; i++){
		
		int u, v, wt;
		// cout<<"Enter u, v, wt: ";
		printf("%d:Enter u, v, wt: ", i);
		cin>>u>>v>>wt;
		addEdge(adj, u, v, wt, flag);
	}

	cout<<"\n\nEdges are:\n";
	for(int i=0; i<v; i++){
		cout<<i<<": ";
		for(int j=0; j<adj[i].size(); j++){
			printf("(%d, %d)", adj[i][j].first, adj[i][j].second);
		}
		cout<<endl;
	}

	MST_Prim(adj, v);

	

}