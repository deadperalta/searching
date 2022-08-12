int closestToZero(int arr[], int n)
        {
            sort(arr,arr+n);
            
            if(arr[0] > 0)
            {
                return arr[0]+arr[1];
            }
            if(arr[n-1] < 0)
            {
                return arr[n-1]+arr[n-2];
            }
            
            int low=0;
            int high=n-1;
            
            int minSum=arr[low]+arr[high];
            
            while(low < high)
            {
                int sum=arr[low]+arr[high];
                
                if(abs(minSum) > abs(sum))
                {
                    minSum=sum;
                }
                else if(abs(minSum) == abs(sum))
                {
                    minSum=max(minSum,sum);
                }
                if(sum < 0)
                {
                    low++;
                }
                else
                {
                    high--;
                }
            }
            return minSum;
        }
