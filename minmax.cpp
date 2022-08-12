//{ Driver Code Starts
/* Driver program to test above function */

#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends
//User function Template for C++

class Solution
{
    struct Pair{
        int min;
        int max;
    };
   public:
    int findSum(int arr[], int n)
    {
    	Pair minmax;
    	int i=0;
    	
    	if(n % 2 == 0)
    	{
    	    if(arr[0] > arr[1])
    	    {
    	        minmax.min=arr[1];
    	        minmax.max=arr[0];
    	    }
    	    else
    	    {
    	        minmax.min=arr[0];
    	        minmax.max=arr[1];
    	    }
    	    i=2;
    	}
    	else
    	{
    	    minmax.min=arr[0];
    	    minmax.max=arr[0];
    	    i=1;
    	}
    	
    	while(i < n-1)
    	{
    	    if(arr[i+1] > arr[i])
    	    {
    	        if(minmax.max < arr[i+1])
    	        {
    	            minmax.max=arr[i+1];
    	        }
    	        if(minmax.min > arr[i])
    	        {
    	            minmax.min=arr[i];
    	        }
    	    }
    	    else
    	    {
    	        if(minmax.max < arr[i])
    	        {
    	            minmax.max=arr[i];
    	        }
    	        if(minmax.min > arr[i+1])
    	        {
    	            minmax.min=arr[i+1];
    	        }
    	    }
    	    i+=2;
    	}
    	
    	return minmax.min+minmax.max;
    }

};

//{ Driver Code Starts.
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
	    int n;
	    cin>>n;
	    int arr[n];
	    for(int i=0;i<n;i++)
	      cin>>arr[i];
	    Solution ob;  
	    int ans=ob.findSum(arr, n);
	    cout<<ans;
	    cout<<"\n";
	}
	return 0;
}

// } Driver Code Ends
