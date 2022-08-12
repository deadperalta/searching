// { Driver Code Starts
#include <bits/stdc++.h>

using namespace std;

 // } Driver Code Ends
class Solution{
public:
    int *findTwoElement(int *arr, int N) {
        int Xor=0;
        
        for(int i=0;i<N;i++)
        {
            Xor^=arr[i];
        }
        
        for(int i=1;i<=N;i++)
        {
            Xor^=i;
        }
        
        int i=0;
        int lsb;
        for(;i<32;i++)
        {
            if(Xor & (1<<i))
            {
                lsb=i;
                break;
            }
        }
        
        int setHere=0;
        int unsetHere=0;
        
        for(int i=0;i<N;i++)
        {
            if(arr[i] & (1<<lsb))
            {
                setHere^=arr[i];
            }
            else
            {
                unsetHere^=arr[i];
            }
        }
        
        for(int i=1;i<=N;i++)
        {
            if(i & (1<<lsb))
            {
                setHere^=i;
            }
            else
            {
                unsetHere^=i;
            }
        }
        
        int missing=0;
        int repeating;
        
        for(int i=0;i<N;i++)
        {
            if(arr[i] == setHere)
            {
                repeating = arr[i];
                missing=unsetHere;
                break;
            }
            if(arr[i] == unsetHere)
            {
                repeating=arr[i];
                missing=setHere;
                break;
            }
        }
        
        int *ans=new int[2];
        ans[0]=repeating;
        ans[1]=missing;
        
        return ans;
    }
};

// { Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        int a[n];
        for (int i = 0; i < n; i++) {
            cin >> a[i];
        }
        Solution ob;
        auto ans = ob.findTwoElement(a, n);
        cout << ans[0] << " " << ans[1] << "\n";
    }
    return 0;
}  // } Driver Code Ends
