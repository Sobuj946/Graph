#include<bits/stdc++.h>
using namespace std;
void solve()
{
    int n,e;
    cin>>n>>e;
    vector<int>v[n+1];
    while(e--)
    {
        int a,b;
        cin>>a>>b;
        v[a].push_back(b);
        v[b].push_back(a);
    }
 
    for(int i=0;i<v[3].size();i++)
    {
        cout<<v[3][i]<<" ";
    }
}


int main(){
 ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);

    solve();
    return 0;
}