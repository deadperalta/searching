int lastOcurr(vector<int>&arr)
{
  int ind;
  int low=0;
  int high=arr.size()-1;
  
  while(low<=high)
  {
    int mid=low+((high-low)>>1);
    
    if(arr[mid] == 1)
    {
      ind=mid;
      low=mid+1;
    }
    else
    {
      high=mid-1;
    }
  }
  return ind;
}

int numberOfOnes(vector<int>&arr)
{
  if(arr[0] != 1)
  {
    return 0;
  }
  
  int lastInd=lastOccur(arr);
  
  return lastInd+1;
}
