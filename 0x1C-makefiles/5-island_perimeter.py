#!/usr/bin/python3
""" Island perimeter """


def island_perimeter(grid):
    """ Island perimenter """

    count = 0

    for x in range(len(grid)):
        for y in range(len(grid[x]) - 1):

            if grid[x][y]:
                if (x - 1) < 0:
                    count += 1
                else:
                    if grid[x - 1][y] == 0:
                        count += 1
                if (y - 1) < 0:
                    count += 1
                else:
                    if grid[x][y - 1] == 0:
                        count += 1
                if (x + 1) >= len(grid) - 1:
                    count += 1
                else:
                    if grid[x + 1][y] == 0:
                        count += 1
                if (y + 1) >= len(grid) - 1:
                    count += 1
                else:
                    if grid[x][y + 1] == 0:
                        count += 1
    return (count)
