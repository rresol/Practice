class Solution {
public:
    vector<vector<int>> generate(int numRows) {
        vector< vector<int> > ans1;
        vector<int>ans;
        ans.push_back(1);
        ans1.push_back(ans);
        for(int i=2;i<=numRows;i++)
        {
            for(int j=1;i<(i+1)/2;j++)
            {
              ans.push_back(ans[i-1][j-1]+ans[i-1][j]);
            }
            ans.insert(ans.begin(),1);
            ans.insert(ans.end(),1);
            ans1.push_back(ans);
            ans.clear();
            
        }
        return ans1;
    }
};
