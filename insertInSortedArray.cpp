int insert(int arr[],int n,int key)
{
  n++;
  for(int i=n-1;i>=0 && arr[i]>key;i--)
  {
   arr[i+1]=arr[i];
  }
  arr[i+1]=key;
}
