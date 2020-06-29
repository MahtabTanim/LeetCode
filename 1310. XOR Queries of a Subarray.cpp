class Solution {
public:
    vector<int> xorQueries(vector<int>& arr, vector<vector<int>>& queries) {
     vector<int> res(queries.size()),pre(arr.size());
        int x=0;
        for(int i = 0;i<arr.size();i++)
        {
             x = x^arr[i];
            pre.at(i)=(x);
        }
        for(int i = 0;i<queries.size();i++)
        {
            int l =queries[i][0],r=queries[i][1];
            if(l==0) res.at(i)=(pre.at(r));
            else res.at(i)=(pre.at(r)^pre.at(l-1));
        }
    return res;
    }
};
