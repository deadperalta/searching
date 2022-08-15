int equal(vector<int>&arr)
{
  int n=arr.size();
  
  int y;
  
  if(n % 2 == 1)
  {
    y=arr[n/2];
  }
  else
  {
    y=(arr[n/2]+arr[n/2-1])/2;
  }
  
  int sum=0;
  
  for(int i:arr)
  {
    sum+=abs(i-y);
  }
  
  return sum;
}
