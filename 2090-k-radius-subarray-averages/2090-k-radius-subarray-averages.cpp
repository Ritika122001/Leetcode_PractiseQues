class Solution {
public:
    vector<int> getAverages(vector<int>& nums, int k) 
    {
        
//          int n=nums.size();
//          vector<long long int> pre(n),suff(n);

//          pre[0]=nums[0];
//          for(int i=1;i<n;i++)
//             pre[i]=pre[i-1]+nums[i];
        
 
//         suff[n-1]=nums[n-1];
//         for(int i=n-2;i>=0;i--)
//             suff[i]=suff[i+1]+nums[i];

        
        
//         vector<int>ans;
        
//         for(int i=0;i<n;i++)
//         {
            
//             if(i-k<0 || i+k>=n)
//                 ans.push_back(-1);
            
//             else
//             {
//                  long long int sum = (long long int)((suff[i-k]-suff[i]) + (pre[i+k]-pre[i]) + nums[i]);
//                 sum=sum/(2*k+1);
//                 ans.push_back(sum);

//             }
            

//         }
//         return ans;
        
        
                int n=nums.size();
        vector<int>ans(n,-1);
      int j=0, i=0;
      long long sum=0;
        while(j<n){
            sum +=nums[j];
             if(j-i+1<2*k+1){
                j++;
                   }
          else if(j-i+1==2*k+1){ 
                ans[i+k]=sum/(2*k+1);
                sum-=nums[i];
                i++;
                j++;
                
            }
             else {
                break;
            }

        }
        return ans;

        
    }
};