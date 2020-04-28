int countshareSides(int** grid, int row, int col, int gridSize, int* gridColSize) {
    int shareSides = 0;
        
    if(row-1 > - 1) { 
        if(grid[row-1][col] == 1)
            shareSides ++;
    }
    if(row+1 < gridSize) { 
        if(grid[row+1][col] == 1)
            shareSides ++;
    }
    if(col-1 > - 1) { 
        if(grid[row][col-1] == 1)
            shareSides ++;
    }
    if(col+1 < *gridColSize) { 
        if(grid[row][col+1] == 1)
            shareSides ++;
    }
        
    return shareSides;
}

int islandPerimeter(int** grid, int gridSize, int* gridColSize){
    int perimeter = 0;
        
    for(int i = 0; i < gridSize; i++) {
        for(int j = 0; j < *gridColSize; j++) {
            if(grid[i][j] == 1) 
                perimeter += (4 - countshareSides(grid, i, j, gridSize, gridColSize));
        }
    }
        
    return perimeter;
}
