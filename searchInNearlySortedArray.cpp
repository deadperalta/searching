int search(vector<int>&arr,int low,int high,int x)
{
  while(low <= high)
  {
    int mid=low+((high-low)>>1);
    
    if(arr[mid] == x)
    {
      return mid;
    }
    
    if(mid > low && arr[mid-1] == x)
    {
      return mid-1;
    }
    if(mid < high && arr[mid+1] == x)
    {
      return mid+1;
    }
    
    if(arr[mid] > x)
    {
      return search(arr,low,mid-2,x);
    }
    else
    {
      return search(arr,mid+2,high,x);
    }
    
    return -1;
  }
