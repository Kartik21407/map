
#include<bits/stdc++.h>
using namespace std;
class Solution{
    public:
    vector<int>twoSum(vector<int>& nums,int target){
        vector<int>v;
        unordered_map<int,int>mpp;
        int n=nums.size();
        for(int i=0;i<n;i++){
            int m=nums[i];
            int s=target-m;
            if(mpp.find(s)!=mpp.end()){
                v.push_back(mpp[s]);
                v.push_back(i);
            }
            else{
                mpp.insert({m,i});
            }
        }
        return v;
    }
};
int main() {
    Solution s;
    vector<int> nums = {2, 7, 11, 15};
    int target = 9;
    vector<int> result = s.twoSum(nums, target);
    cout << "Indices: ";
    for(int i=0; i<result.size(); i++) {
        cout << result[i] << " ";
    }
    cout << endl;
    return 0;
}
