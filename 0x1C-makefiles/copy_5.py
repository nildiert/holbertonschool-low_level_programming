#!/usr/bin/python3
""" Island perimeter """


def island_perimeter(grid):
    """ Island perimenter """

    count = 0

    for x in range(len(grid)):
        for y in range(len(grid[x])):

            if grid[x][y] is 1:
                print("[{}] [{}] ::".format(x, y))
                if (x - 1) < 0:
                    count += 1
                    print("Condicion 1")
                else:
                    if grid[x - 1][y] == 0:
                        count += 1
                        print("Condicion 2")
                if (y - 1) < 0:
                    count += 1
                    print("Condicion 3")
                else:
                    if grid[x][y - 1] == 0:
                        count += 1
                        print("Condicion 4")
                if (x + 1) > len(grid) - 1:
                    count += 1
                    print("Condicion 5")
                else:
                    if grid[x + 1][y] == 0:
                        count += 1
                        print("Condicion 6")
                if (y + 1) > len(grid):
                    count += 1
                    print("Condicion 7")
                else:
                    if grid[x][y + 1] == 0:
                        count += 1
                        print("Condicion 8")
    return (count)
