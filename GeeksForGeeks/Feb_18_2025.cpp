// https://www.geeksforgeeks.org/problems/k-closest-points-to-origin--172242/

class Solution {
  public:
    vector<vector<int>> kClosest(vector<vector<int>>& points, int k) {
        // Your code here
        vector<pair<int, pair<int, int>>> dist;
        for(int i=0; i<points.size(); i++){
            int x = points[i][0];
            int y=  points[i][1];
            
            int distance = sqrt(x*x+y*y);
            dist.push_back({distance, {x, y}});
        }
        
        sort(dist.begin(), dist.end());
        
        vector<vector<int>> ans(k);
        
        for(int i=0; i<k; i++){
            int x = dist[i].second.first;
            int y = dist[i].second.second;
            
            ans[i] = {x, y};
        }
        
        return ans;
    }
};