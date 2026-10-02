#include<bits/stdc++.h>
using namespace std;
vector<int>v[1005];
bool vis[1005];
void BFS(int src)
{
    queue<int>q;                                                                                                                                                                                                                                                                                                                                                               
    q.push(src);
   vis[src]=true;
   while(!q.empty())
   {
    int par=  q.front();
    q.pop();
    cout<<par<<endl;
    for(auto child:v[par])
    {

       if(vis[child]==false)
       {
        q.push(child);
        vis[child]=true;
       }
    }
   }

}
int main(){
 ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);

    int n,e;
    cin>>n>>e;
    while(e--)
    {
        int a,b;
        cin>>a>>b;
        v[a].push_back(b);
        v[b].push_back(a);
    }
    int src;
    cin>>src;
    BFS(src);
    memset(vis,false,sizeof(vis));
    return 0;
}