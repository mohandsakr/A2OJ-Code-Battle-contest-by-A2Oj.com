//============================================================================
//problem link :https://a2oj.com/p?ID=481
// Name        : .cpp
// Author      : mohand sakr
// Version     :
// Copyright   : use code under your responsiblity
// Description : Hello World in C++, Ansi-style
//status:accepted
//============================================================================
#include<bits/stdc++.h>
#include <iostream>
using namespace std;
const int N=1001;
vector<int>adj[N];
bool arr[N];
int dis[N];
void bFS(int u){
    memset(dis, -1, sizeof dis);
    dis[u] = 0;
    queue<int> q;
    q.push(u);
    while(q.size()){
        u = q.front();
        q.pop();
        for(int v=0;v<adj[u].size();v++){
            if(dis[adj[ u ][ v]] == -1 && !arr[adj[ u ][ v]]){
                dis[adj[ u ][ v]] = dis[u] + 1;
                q.push(adj[ u ][ v]);

            }
        }
    }
}

int main() {
	int t;
	cin>>t;
	while(t--){
		int n,m;
		cin>>n>>m;

		vector <int> zeronode;
		for(int i=1;i<n;i++){
			cin>>arr[i];
		}
		for(int i=0;i<m;i++){
			int x,y;
			cin>>x>>y;
			/**if(!x){
				if(!arr[y]){
				adj[x].push_back(y);
				adj[y].push_back(x);
				zeronode.push_back(y);
				}

			}
			else{*/
			//if(arr[x]||arr[y])continue;
			//	else{
			adj[x].push_back(y);
			adj[y].push_back(x);}
			//}
		//}
		/*for(int i=0;i<zeronode.size();i++){
			int w=zeronode[i];
			for(int i=0;i<adj[w].size();i++){
				int z=arr[adj[w][i]];
				if(arr[adj[w][i]]){
					//adj[w].erase(z);
					//adj[z].erase(w);
				}
			}
		}*/
		 bFS(0);
		 for(int i=1;i<n;i++){
			 cout<<dis[i]<<" ";
	}
		 cout<<"\n";
		 for(int i=0;i<n;i++){
			 adj[i].clear();
		 	 	 }
		}
		return 0;
	}

