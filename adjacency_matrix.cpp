#include<bits/stdc++.h>
using namespace std;
void solve()
{
    int n,e;
    cin>>n>>e;
    int mat[n][n];
    memset(mat,0,sizeof(mat));
    while(e--)
    {
        int a,b;
        cin>>a>>b;
        mat[a][b]=1;
        mat[b][a]=1;
    }
    if(mat[3][1]==1)
    {
        cout<<"adjacent ache\n";
    }
    else
    {
        cout<<"adjacent nai\n";
    }
}
int main(){
 ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);

    solve();
    return 0;
}