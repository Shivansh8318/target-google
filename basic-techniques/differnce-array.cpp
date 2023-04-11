//range update in O(1)
//first create diffence array
//perform range update
//final array is prefix sum of differnce array

#include<bits/stdc++.h>
using namespace std;


#define rep(i,m,n) for(int i = m; i < (int)(n); i++)

void solve() {
    int n;
    cin>>n;
    int a[9]={1,2,3,4,5,6,7,8};
    int d[10];
    d[0]=a[0];
    rep(i,1,9){
        d[i]=a[i]-a[i-1];
    }
    
    //range update from index 3,6 by 2
    d[3]+=2;
    d[7]-=2;
    
    //range update index from 2,5 by 3
    d[2]+=3;
    d[5]-=3;
    
    
    //retriving final array
    a[0]=d[0];
    rep(i,1,n){
        a[i]=a[i-1]+d[i];
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
