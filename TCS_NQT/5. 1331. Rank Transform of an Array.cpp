class Solution {
public:
    vector<int> arrayRankTransform(vector<int>& arr) {
        set<int> st(arr.begin(), arr.end());
        unordered_map<int, int> mp;

        int rank = 1;
        for(int x : st) {
            mp[x] = rank++;
        }

        vector<int> ans;
        for(int& x : arr) {
            ans.push_back(mp[x]);
        }
        return ans;
    }
};
