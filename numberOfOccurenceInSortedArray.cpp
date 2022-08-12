//{ Driver Code Starts

#include<bits/stdc++.h>

using namespace std;


// } Driver Code Ends
//User function template for C++
class Solution{
    
    int firstOccurence(int a[],int low,int high,int x)
    {
        int ans=-1;
        
        while(low <= high)
        {
            int mid=low+((high-low)>>1);
            
            if(a[mid] == x)
            {
                ans=mid;
                high=mid-1;
            }
            else if(a[mid] > x)
            {
                high=mid-1;
            }
            else
            {
                low=mid+1;
            }
        }
        return ans;
    }
    int lastOcurrence(int a[],int low,int high,int x)
    {
        int ans=high+1;
        
        while(low <= high)
        {
            int mid=low+((high-low)>>1);
            
            if(a[mid] == x)
            {
                ans=mid;
                low=mid+1;
            }
            else if(a[mid] < x)
            {
                low=mid+1;
            }
            else
            {
                high=mid-1;
            }
        }
        return ans;
    }
public:	
	/* if x is present in arr[] then returns the count
		of occurrences of x, otherwise returns 0. */
	int count(int arr[], int n, int x) {
	    int last=lastOcurrence(arr,0,n-1,x);
	    int first=firstOccurence(arr,0,n-1,x);
	    
	    if(last == n || first == -1)
	    {
	        return 0;
	    }
	    return last-first+1;
	}
};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, x;
        cin >> n >> x;
        int arr[n];
        for (int i = 0; i < n; i++) {
            cin >> arr[i];
        }
        Solution ob;
        auto ans = ob.count(arr, n, x);
        cout << ans << "\n";
    }
    return 0;
}

// } Driver Code Ends
