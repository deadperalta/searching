int median(vector<int>&v1,vector<int>&v2)
{
  int i=v1.size()-1;
  int j=0;
  
  while(i >= 0 && j < v2.size() && v1[i] > v2[j])
  {
      swap(v1[i],v2[j]);
      i--;
      j++;
  }
  
  sort(v1.begin(),v1.end());
  sort(v2.begin(),v2.end());
  
  return (v1[v1.size()-1]+v2[0])/2;
}
