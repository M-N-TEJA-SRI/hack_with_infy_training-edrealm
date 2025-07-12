class Solution {
public:
int dfs(vector<vector<int>>&grid,int i,int j,int n,int m){
    if(i<0||j<0||i>=n||j>=m||grid[i][j]==0||grid[i][j]==2)
    return 0;
    grid[i][j]=2;
    return 1+dfs(grid,i+1,j,n,m)+dfs(grid,i-1,j,n,m)+dfs(grid,i,j-1,n,m)+dfs(grid,i,j+1,n,m);
}
    int maxAreaOfIsland(vector<vector<int>>& grid) {
         int i,j,n=grid.size(),m=grid[0].size(),maxi=0;
        for(i=0;i<n;i++){
            for(j=0;j<m;j++){
                if(grid[i][j]==1){
                    
                    maxi=max(maxi,dfs(grid,i,j,n,m));
                }
            }
        }
        return maxi;
    }
};
