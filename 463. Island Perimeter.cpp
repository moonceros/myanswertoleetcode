class Solution {
public:
    int islandPerimeter(vector<vector<int>>& grid) {
        int count=0;
    int l1=grid.size()-1;
    int l2=grid[0].size()-1;
    for(int i1=0;i1<=l1;i1++)
    {
        for(int i2=0;i2<=l2;i2++)
        {
            if(grid[i1][i2]==1)
             {
            if(i1==l1||grid[i1+1][i2]==0) count++;
            if(i1==0||grid[i1-1][i2]==0) count++;
            if(i2==l2||grid[i1][i2+1]==0) count++;
            if(i2==0||grid[i1][i2-1]==0) count++;
            }
        }
    }
    return count;
    }
};
