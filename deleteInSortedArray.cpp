int binarySearch(int arr[],int n,int key)
{
  int low=0;
  int high=n-1;
  
  while(low <= high)
  {
    int mid=low+((high-low)>>1);
    
    if(arr[mid] == key)
    {
      return mid;
    }
    
    if(arr[mid] > key)
    {
      high=mid-1;
    }
    else
    {
      low=mid+1;
    }
  }
  return -1;
}

int deleteInArray(int arr[],int n,int key)
{
  int pos=binarySearch(arr,n,key);
  
  for(int i=pos;i<n;i++)
  {
    arr[i]=arr[i+1];
  }
}
