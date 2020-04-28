class Solution {
public:
    int countshareSides(vector<vector<int>>& grid, int row, int col) {
        int shareSides = 0;
        
        if(row-1 > - 1) { 
            if(grid[row-1][col] == 1)
                shareSides ++;
        }
        if(row+1 < grid.size()) { 
            if(grid[row+1][col] == 1)
                shareSides ++;
        }
        if(col-1 > - 1) { 
            if(grid[row][col-1] == 1)
                shareSides ++;
        }
        if(col+1 < grid[0].size()) { 
            if(grid[row][col+1] == 1)
                shareSides ++;
        }
        
        return shareSides;
    }

    int islandPerimeter(vector<vector<int>>& grid) {
        int perimeter = 0;
        
        for(int i = 0; i < grid.size(); i++) {
            for(int j = 0; j < grid[i].size(); j++) {
                if(grid[i][j] == 1) 
                    perimeter += (4 - countshareSides(grid, i, j));
            }
        }
        
        return perimeter; 
    }
};
