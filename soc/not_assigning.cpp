#inlude<bits/stdc++.h>
using namespace std;

vector<vector<int>> adj;
vector<bool> visited;
ve

bool is_possible(){
	for(int x=0;x<n;x++){
		int branch=0;
		for(auto i: adj[x]){
			if (branch>2){
				return false;
			}
		}
	}
	return true;
}

void dfs(int parent,int x){
	visited[parent][x]=true;
	

}

int main(){
	int n; cin>>n;

	adj.resize(n,vector<int>(0));
	weights.resize(n,vector<int>(n));

	int u,v;
	for(int i=0;i<n-1;i++){
		cin>>u>>v;
		u--;v--;
		adj[u].push_back(v);
		adj[v].push_back(u);
		weights[u][v]=0;
	}
	visited.resize(n,false);




}