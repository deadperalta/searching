bool pairSum(vector<int>&arr)
{
  int sum=0;
  
  for(int i:arr)
  {
    sum+=i;
  }
  
  if(sum % 2 == 1)
  {
    return false;
  }
  
  sum/=2;
  
  unordered_set<int>st;
  
  for(int i=0;i<arr.size();i++)
  {
    int val=sum-arr[i];
    
    if(st.find(val) != st.end())
    {
      return true;
    }
    
    st.insert(arr[i]);
  }
  return false;
