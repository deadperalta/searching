int ceil(vector<int>&arr,int x)
{
  int low=0; 
  int high=arr.size()-1;
  int ans;
  
  while(low <= high)
  {
    int mid=low+((high-low)>>1);
    
    if(arr[mid] == x)
    {
      return arr[mid];
    }
    
    if(arr[mid] > x)
    {
      ans=arr[mid];
      high=mid-1;
    }
    else
    {
      low=mid+1;
    }
    
  }
  return ans;
