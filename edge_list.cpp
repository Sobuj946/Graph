#include<bits/stdc++.h>
using namespace std;
void solve()
{
    int n,e;
    cin>>n>>e;
    vector<pair<int,int>>v;
    while(e--)
    {
        int a,b;
        cin>>a>>b;
        v.push_back({a,b});
    }
    for(auto i:v)
    {
        cout<<i.first<<" "<<i.second<<endl;
    }
}
int main(){
 ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);

    solve();
    return 0;
}