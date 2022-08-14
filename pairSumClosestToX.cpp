vector<int> pairSum(vector<int>&arr,int x)
{
  int diff=INT_MAX;
  int l=0;
  int r=arr.size()-1;
  
  while(l < r)
  {
    int sum=arr[l]+arr[r];
    if(abs(x-sum) < diff)
    {
      diff=abs(x-sum);
      ans.clear();
      ans.push_back({nums[l],nums[r]});
    }
    if(sum > x)
    {
      r--;
    }
    else
    {
      l++;
    }
  }
  return ans;
}
