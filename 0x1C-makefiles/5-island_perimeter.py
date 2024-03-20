#/usr/bin/python3

"""starting point"""


def island_perimeter(grid):
    """
    Function: island_perimeter(grid)
    Returns the perimeter of the island described in the grid.

    Parameters:
    grid (list of list of integers): Represents the grid where:
        - 0 represents a water zone
        - 1 represents a land zone

    Returns:
    int: The perimeter of the island

    Assumptions:
    - One cell is a square with side length 1
    - Grid cells are connected horizontally/vertically (not diagonally).
    - Grid is rectangular, width and height don’t exceed 100
    - Grid is completely surrounded by water, and there is one island (or nothing).
    - The island doesn’t have “lakes” (water inside that isn’t connected to the water around the island).
    """

    perimeter = 0
    row = len(grid)
    col = len(grid[0])

    if grid is None:
        return 0

    for i in range(row):
        for j in range(col):
            if grid[i][j] == 1:
                perimeter += 4
                if i > 0 and grid[i-1][j] == 1:
                    perimeter -= 2
                if j > 0 and grid[i][j-1] == 1:
                    perimeter -= 2

    return perimeter
