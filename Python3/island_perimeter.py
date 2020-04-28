class Solution:
    def islandPerimeter(self, grid: List[List[int]]) -> int:
        perimeter = 0
        
        for i in range(len(grid)):
            for j in range(len(grid[i])):
                if grid[i][j] == 1:
                    perimeter += (4 - self.countshareSides(grid, i, j))
        
        return perimeter        
    
    def countshareSides(self, grid, row, col) -> int:
        shareSides = 0
        
        for num_row, num_col in [(row + 1, col), (row - 1, col), (row, col + 1), (row, col - 1)]:
            if num_row > - 1 and num_row < len(grid) and num_col > - 1 and num_col < len(grid[0]):
                if grid[num_row][num_col] == 1: shareSides += 1
        
        return shareSides
