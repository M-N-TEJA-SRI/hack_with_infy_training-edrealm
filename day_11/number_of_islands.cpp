class Solution {
public:
void dfs(vector<vector<char>>&grid,int i,int j,int n,int m){
    if(i<0||j<0||i>=n||j>=m||grid[i][j]=='0'||grid[i][j]=='2')
    return;
    grid[i][j]='2';
    dfs(grid,i+1,j,n,m);
    dfs(grid,i-1,j,n,m);
    dfs(grid,i,j-1,n,m);
    dfs(grid,i,j+1,n,m);
}
    int numIslands(vector<vector<char>>& grid) {
        int i,j,n=grid.size(),m=grid[0].size(),c=0;
        for(i=0;i<n;i++){
            for(j=0;j<m;j++){
                if(grid[i][j]=='1'){
                    c++;
                    dfs(grid,i,j,n,m);
                }
            }
        }
        return c;
    }
};
