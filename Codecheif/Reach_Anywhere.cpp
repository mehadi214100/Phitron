#include <bits/stdc++.h>
using namespace std;
const int N = 1e5 + 5;
int dis[N];
bool vis[N];
int par[N];
vector<int> v[N];
void bfs(int s)
{
    queue<int> q;
    q.push(s);
    dis[s] = 0;
    par[s] = -1;
    vis[s] = true;
    while (!q.empty())
    {
        int parent = q.front();
        q.pop();
        for (int child : v[parent])
        {
            if (!vis[child])
            {
                q.push(child);
                par[child] = parent;
                dis[child] = dis[parent] + 1;
                vis[child] = true;
            }
        }
    }
}
int main()
{
    int t;cin>>t;
    while (t--)
    {
            int n, e;
            cin >> n >> e;
            while (e--)
            {
                int a, b;
                cin >> a >> b;
                v[a].push_back(b);
                v[b].push_back(a);
            }
            bfs(1);
            if(vis[n]){
                cout<<dis[n]<<endl;
            }else{
                cout<<-1<<endl;
            }
    }
    
    return 0;
}