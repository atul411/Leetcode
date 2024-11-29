class Solution
{
public:
	void explore(vector<vector<char>> &grid, int i, int j){
		if(grid[i][j]=='0')
			return;
		grid[i][j] = '0';
		if(i+1<grid.size())
			explore(grid, i+1, j);
		if(i-1>=0)
			explore(grid, i-1, j);
		if(j+1<grid[0].size())
			explore(grid, i, j+1);
		if(j-1>=0)
			explore(grid, i, j-1);
	}
	int numIslands(vector<vector<char>> &grid)
	{
		int ans = 0, n = grid.size(), m = grid[0].size();
		for(int i=0; i<n; i++)
		{
			for(int j =0; j<m; j++)
			{
				if(grid[i][j]=='1')
					ans++;
				explore(grid, i, j);
			}
		}
		return ans;

	}
};