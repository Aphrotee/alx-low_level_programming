#!/usr/bin/python3
"""
This module provides the function island_perimeter.
"""


def island_perimeter(grid):
    """
    This is a function that returns the perimeter
    of the island described in grid.
    """
    if len(grid) == 0 or not isinstance(grid, list):
        return 0
    else:
        for a in grid:
            if len(a) == 0:
                return 0
            elif not isinstance(a, list):
                return 0

    n = 0
    for unit in grid:
        for cell in unit:
            if cell == 1:
                n += 2
    if n:
        n += 2
    return n
