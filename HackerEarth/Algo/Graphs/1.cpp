#include<iostream>
#include<vector>
#include<queue>

using namespace std;

void bfs(vector<int>g[], int n, int index, vector<bool>&vis){
    queue <int>q;
    q.push(index);
    while(!q.empty()){
        int x = q.front();
        q.pop();
        vis[x] = true ;
        for(int i=0; i<g[x].size(); i++){
            if(!vis[g[x][i]]){
                q.push(g[x][i]);
            }
        }
    }
}

int main(){
    int n, m, k;
    cin>>n>>m>>k;
    vector<int>g[n+1];
    for(int i=1; i<=m; i++){
        int x, y;
        cin>>x>>y;
        g[x].push_back(y);
        g[y].push_back(x);
    }

    vector<bool>vis(n+1, false);
    int count=0;
    for(int i=1; i<n+1; i++){
        if(!vis[i]){
            bfs(g,n,i,vis);
            count++;
        }
    }
    if(count>k){
        cout<<-1;
    }
    else{
        cout<<m-(n-k);
    }
}