#include<bits/stdc++.h>
using namespace std;

class Solution {
    public:
        vector<int> topKFrequent(vector<int>& nums, int k) {
            vector<int>v;
            int n=nums.size();
            map<int,int>m;
            for(int i=0;i<n;i++){
                m[nums[i]]++;
            }
            vector<pair<int, int>> vp(m.begin(), m.end());
                sort(vp.begin(), vp.end(), [](pair<int, int>& a, pair<int, int>& b) {
                    return a.second > b.second;
                });
            for(int i=0;i<k;i++){
                v.push_back(vp[i].first);
            }
            return v;
        }
    };
int main() {
            Solution s;
            vector<int> a = {1, 1, 1, 2, 2, 3};
            int k = 2;
            vector<int> result = s.topKFrequent(a, k);
            cout << "Top " << k << " frequent elements: ";
            for(int i=0; i<result.size(); i++) {
                cout << result[i] << " ";
            }
                return 0;
}
