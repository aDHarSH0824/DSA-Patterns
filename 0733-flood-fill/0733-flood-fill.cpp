class Solution {
public:
    void dfs(vector<vector<int>>& image,int startColor,int sr,int sc,vector<int>& x,vector<int>& y,int color){
        int n = image.size();
        int m = image[0].size();
        image[sr][sc] = color;
        for(int k=0;k<4;k++){
            int row = sr+x[k];
            int col = sc+y[k];
            if(row>=0 && col>=0 && row<n && col<m && image[row][col]==startColor){
                dfs(image,startColor,row,col,x,y,color);
            }
        }
    }
    vector<vector<int>> floodFill(vector<vector<int>>& image, int sr, int sc, int color) {
        int startColor = image[sr][sc];
        if(startColor==color) return image;
        vector<int> x = {-1,1,0,0};
        vector<int> y = {0,0,-1,1};
        dfs(image,startColor,sr,sc,x,y,color);
        return image;
    }
};