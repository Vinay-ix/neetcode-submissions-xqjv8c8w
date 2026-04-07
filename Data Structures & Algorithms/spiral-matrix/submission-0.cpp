class Solution {
public:
    vector<int> spiralOrder(vector<vector<int>>& matrix) {
        int n=matrix.size();
        int m = matrix[0].size();
        vector<int> res;
        int minr = 0;
        int minc =0;
        int maxc = m-1;
        int maxr =n-1;
        int ttl = n*m;
        int count =0;
        while(minr<=maxr && minc<=maxc){
            for(int i = minc;i<=maxc && count<ttl;i++){
                res.push_back(matrix[minr][i]);
                count++;
            }
            minr++;
            for(int i = minr;i<=maxr && count<ttl;i++){
                res.push_back(matrix[i][maxc]);
                count++;
            }
            maxc--;
            for(int i = maxc;i>=minc && count<ttl;i--){
                res.push_back(matrix[maxr][i]);
                count++;
            }
            maxr--;
            for(int i = maxr;i>=minr && count<ttl;i--){
                res.push_back(matrix[i][minc]);
                count++;
            }
            minc++;

        }
        return res;
    }
};
