
#include<bits/stdc++.h>
using namespace std;
class Solution {
    public:
        int longestConsecutive(vector<int>& nums) {
            sort(nums.begin(),nums.end());
            int n=nums.size();
            int count=1;
            int ans=0;
            if(n==0){
                return 0;
            }
            if(n==1){
                return 1;
            }
            for(int i=0;i<n-1;i++){
                if(nums[i]==nums[i+1]){
                    continue;
                }
                else if(nums[i]+1 == nums[i+1]){
                    count++;
                }
                else{
                    count=1;
                }
                ans=max(ans,count);
            }
            if(ans==0){
                ans=1;
            }
            
            return ans;
        }
    };

int main() {
    Solution lc;
    vector<int> arr = {100, 4, 200, 1, 3, 2};
    int result = lc.longestConsecutive(arr);
    cout << "Longest consecutive sequence length: " << result << endl;
    return 0;
}
