#!/usr/bin/python3
"""A function module"""


def num_water_neighbors(grid, i, j):
    """Returns the number of water neighbors a cell has in a grid."""

    num = 0

    if i <= 0 or not grid[i - 1][j]:
        num += 1
    if j <= 0 or not grid[i][j - 1]:
        num += 1
    if j >= len(grid[i]) - 1 or not grid[i][j + 1]:
        num += 1
    if i >= len(grid) - 1 or not grid[i + 1][j]:
        num += 1

    return num


def island_perimeter(grid):
    """ This function returns the perimeter of the island described in grid
    Args:
        grid - is a list of integers
    """
    perimeter = 0
    for in range(len(grid)):
        for j in range(len(grid[i])):
            if grid[i][j]:
                perimeter += num_water_neighbours(grid, i, j)
    return perimeter
