//just do not visit parent again

void dfs(int node,int par){
  for(auto x:node){
    if(x!=par){
      dfs(x,node);
    }
}
