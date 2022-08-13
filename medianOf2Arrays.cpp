class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        int m=nums1.size();
        int n=nums2.size();
        
        if(m > n)
        {
            return findMedianSortedArrays(nums2,nums1);
        }
        
        int low=0;
        int high=m;
        
        while(low <= high)
        {
            int cut1=low+((high-low)>>1);
            int cut2=(m+n+1)/2-cut1;
            
            int left1,left2,right1,right2;
            
            if(cut1 == 0)
            {
                left1=INT_MIN;
            }
            else
            {
                left1=nums1[cut1-1];
            }
            
            if(cut1 == m)
            {
                right1=INT_MAX;
            }
            else
            {
                right1=nums1[cut1];
            }
            
            if(cut2 == 0)
            {
                left2=INT_MIN;
            }
            else
            {
                left2=nums2[cut2-1];
            }
            
            if(cut2 == n)
            {
                right2=INT_MAX;
            }
            else
            {
                right2=nums2[cut2];
            }
            
            if(left1 <= right2 && left2 <= right1)
            {
                if((m+n) % 2 == 1)
                {
                    return max(left1,left2);
                }
                else
                {
                    int x=max(left1,left2);
                    int y=min(right1,right2);
                    
                    return (((double)(x+y))/2.0);
                }
            }
            else if(left1 > right2)
            {
                high=cut1-1;
            }
            else
            {
                low=cut1+1;
            }
        }
        return -1;
    }
};
