#include <iostream>

#include <bits/stdc++.h>



using namespace std;



void bfs_search(map<int, list<int>> graph, int root){


	cout<<"bfs path: ";
	queue<int> qlist;
	int num_nodes = graph.size();
	vector<bool> visited(num_nodes, false);

        visited[root] = true;	
	qlist.push(root);

	while(!qlist.empty()){
		int node = qlist.front(); qlist.pop();
		cout<<node<<" ";
		
		for(auto i: graph[node]){
			if(!visited[i]){
				visited[i] = true;
				qlist.push(i);
			}
		}
	
	}
	cout<<endl;
	

}









#if 0
vector<vector<int>> create_matrix(int num_nodes){

	vector<vector<int>> mat(num_nodes);
	for(int i=0; i < num_nodes; i++){
        	for(int j=0; j < num_nodes; j++){
			mat[i].push_back(0);
		}
	}
	return mat;
#else
map<int, list<int>> create_matrix(int num_nodes){
	map<int, list<int>> adj_list;	
	return adj_list;
#endif

}

void print_matrix(map<int, list<int>> &vec){
#if 0
  for(int i=0; i < vec.size(); i++){
  	for(int j=0; j < vec[i].size(); j++){
		cout<<vec[i][j]<<" ";
	}
	cout<<endl;
  }
#else
  for(auto i : vec){
  	cout<< i.first<<": ";
	for(auto j : i.second){
		cout<< j<<"-> ";
	}
	cout<<endl;
  }

#endif

}


void add_edge(map<int, list<int>> &mat, int src, int des){
#if 0
	mat[src][des] = 1;
	mat[des][src] = 1;
#else
	mat[src].push_back(des);
	mat[des].push_back(src);
#endif

}

int main(){

  // create adjacency matrix
  map<int, list<int>> org_mat =  create_matrix(4);
  // Adding the specified edges in the graph
  add_edge(org_mat, 1, 0);
  add_edge(org_mat, 2, 0);
  add_edge(org_mat, 1, 2);
  print_matrix(org_mat);

  bfs_search(org_mat, 0);



  return 0;
}














