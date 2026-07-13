class Solution {
public:
    vector<int> generateRow(int n){
        vector<int> row;
        int ans=1;
        row.push_back(ans);
        for(int i=1;i<n;i++){
            ans=ans*(n-i)/i;
            row.push_back(ans);
        }
        return row;
    }
    vector<vector<int>> generate(int numRows) {
        vector<vector<int>> res;
        for(int i=1;i<=numRows;i++){
            res.push_back(generateRow(i));
        }
        return res;
    }
};