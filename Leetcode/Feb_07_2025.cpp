// https://leetcode.com/problems/find-the-number-of-distinct-colors-among-the-balls/

class Solution {
public:
    vector<int> queryResults(int limit, vector<vector<int>>& queries) {
        int n = queries.size();
        vector<int> ans(n);

        unordered_map<int, int> colormp;
        unordered_map<int, int> ballmp;

        for(int i=0; i<n; i++){
            int ball = queries[i][0];
            int color = queries[i][1];

            if(ballmp.count(ball)){
                int prevColor = ballmp[ball];
                colormp[prevColor]--;
                if(colormp[prevColor]==0){
                    colormp.erase(prevColor);
                }
            }

            ballmp[ball] = color;
            colormp[color]++;

            ans[i] = colormp.size();
        }

        return ans;
    }
};