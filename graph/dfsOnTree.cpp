//just do not visit parent again
//diameter of a tree-longest path in tree
//to find diameter-ksis bhi node pe dfs call kro ab jo bhi max dis aaye use dfs call kro,ab jo bhi max dis aaya whi diameter ki length h
//centre of tree-node at half of diameter
//centroid-aisi node jise sare subtree ki size n/2 se kam ho,every tree has a centroid


void dfs(int node,int par){
  for(auto x:node){
    if(x!=par){
      dfs(x,node);
    }
}
