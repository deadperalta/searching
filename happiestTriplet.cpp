// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
class Solution
{
  public:
     vector<int> smallestDifferenceTriplet(int a[], int b[], int c[], int n)
    {
        vector<int>v;
        int x=0,y=0,z=0;
        sort(a,a+n);
        sort(b,b+n);
        sort(c,c+n);
        int diff=INT_MAX;
        while(x<n && y<n && z<n)
        {
            int maxi= max(a[x],max(b[y],c[z]));
            int mini=min(a[x],min(b[y],c[z]));
            if(diff > maxi-mini)
            {
                v.clear();
                v.push_back(a[x]);
                v.push_back(b[y]);
                v.push_back(c[z]);
                diff=maxi-mini;
            }
            if(a[x]==mini)
            {
                x++;
            }
            else if(b[y]==mini)
            {
                y++;
            }
            else
            {
                z++;
            }
        }
       sort(v.begin(),v.end(),greater<int>());
        return v;
    }
};

// { Driver Code Starts.
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int n;
		cin>>n;
		int a[n],b[n],c[n];
		for(int i=0;i<n;++i)
			cin>>a[i];
		for(int i=0;i<n;++i)
			cin>>b[i];
		for(int i=0;i<n;++i)
			cin>>c[i];
		
		Solution ob;	
		vector<int> ans=ob.smallestDifferenceTriplet(a,b,c,n);
		cout<< ans[0] <<" "<<ans[1]<<" "<<ans[2] << endl;
	}
	return 0;
}
  // } Driver Code Ends
