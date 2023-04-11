//centroid can be atmax 2


#include<bits/stdc++.h>
using namespace std;
#define int long long

#define rep(i,m,n) for(int i = m; i < (int)(n); i++)

#define rrep(i,m,n) for(int i = (int)(m) ; i >= n; i--)
#define all(x) begin(x), end(x)
#define raint(x) rbegin(x), rend(x)

int n;
vector<vector<int>> g;
vector<int> subTreeSz; 
vector<int> centroid;

void dfs(int nn,int p){
    subTreeSz[nn]=1;
    for(auto x:g[nn]){
        if(x!=p){
            dfs(x,nn);
            subTreeSz[nn]+=subTreeSz[x];
        }
    }
}
void findcentroid(int nn,int p){
    subTreeSz[nn]=1;
    for(auto x:g[nn]){
        if(x!=p){
            dfs(x,nn);
            subTreeSz[nn]+=subTreeSz[x];
        }
    }
    bool iscentroid=true;
    for(auto x:g[nn]){
        if(x!=p){
            if(2*(subTreeSz[x])>n) iscentroid=false;
        }
    }
    if(iscentroid){
        if(2*(n-subTreeSz[nn])>n) iscentroid=false;
    }
    if(iscentroid){
        centroid.push_back(nn);
    }
    
}
void solve() {
    cin>>n;
    g.resize(n+1);
    centroid.resize(n+1);
    subTreeSz.resize(n+1);
    rep(i,0,n-1){
        int a,b;
        cin>>a>>b;
        g[a].push_back(b);
        g[b].push_back(a);
    }
    
    
  
 
}

 

signed main(){
  int t;
   cin>>t;
   int count=1;
   while(t--){
   solve();
   cout<<'\n';
   }
}
