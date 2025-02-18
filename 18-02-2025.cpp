class Solution {
    public:
      vector<vector<int>> kClosest(vector<vector<int>>& points, int k) {
          // Your code here
          priority_queue<pair<int,vector<int>>,vector<pair<int,vector<int>>>,greater<pair<int,vector<int>>>>pq;
          
          for(auto vec:points){
              int t=(vec[0]*vec[0])+(vec[1]*vec[1]);
              pq.push({t,vec});
          }
          vector<vector<int>> ans;
          while(k-->0){
              ans.push_back(pq.top().second);
              pq.pop();
          }
          return ans;
      }
  };
