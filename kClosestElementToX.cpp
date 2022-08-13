//{ Driver Code Starts
//Initial template for C++

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
//User function template for C++

class Solution{   
    int crossPoint(vector<int>&arr,int n,int x)
    {
        int low=0;
        int high=n-1;
        
        int ind=0;
        
        while(low <= high)
        {
            int mid=low+((high-low)>>1);
            
            if(arr[mid] <= x)
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
public:
    vector<int> printKClosest(vector<int> arr, int n, int k, int x) {
        int low=crossPoint(arr,n,x);
        int high=low+1;
        
        if(arr[low] == x)
        {
            low--;
        }
        vector<int>ans;
        
        while(low >= 0 && high < n && k > 0)
        {
            if(arr[high]-x <= x-arr[low])
            {
                ans.push_back(arr[high]);
                high++;
                k--;
            }
            else
            {
                ans.push_back(arr[low]);
                low--;
                k--;
            }
        }
        
        while(low >= 0 && k > 0)
        {
            ans.push_back(arr[low]);
            low--;
            k--;
        }
        while(high < n && k > 0)
        {
            ans.push_back(arr[high]);
            high++;
            k--;
        }
        
        return ans;
    }
};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, k, x;
        cin >> n;
        vector<int> arr(n);
        for (int i = 0; i < n; i++) {
            cin >> arr[i];
        }
        cin >> k >> x;
        Solution ob;
        auto ans = ob.printKClosest(arr, n, k, x);
        for (auto e : ans) {
            cout << e << " ";
        }
        cout << "\n";
    }
    return 0;
}

// } Driver Code Ends
