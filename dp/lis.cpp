vector<int> soln;
for(auto x:v)
{
  if(soln.empty() || x>soln.back()){
  soln.push_back(x);
  }
  else{
    auto it=lower_bound(all(v),x);
    *it=x;
    }
  cout<<soln.size();
}
