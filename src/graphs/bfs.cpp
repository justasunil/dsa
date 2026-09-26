#include "graphs.h"

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
