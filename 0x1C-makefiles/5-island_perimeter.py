#!/usr/bin/python3
"""
Island Perimeter
"""


def island_perimeter(grid):
    """ Define island perimeter"""
    perimeter = 0
    for row in range(len(grid)):
        for col in range(len(grid[row])):
            if grid[row][col] == 1:
                if row - 1 >= 0 and grid[row - 1][col] == 0:
                    perimeter += 1
                if row + 1 >= 0 and grid[row + 1][col] == 0:
                    perimeter += 1
                if col - 1 >= 0 and grid[row][col - 1] == 0:
                    perimeter += 1
                if col + 1 >= 0 and grid[row][col + 1] == 0:
                    perimeter += 1
    return perimeter
