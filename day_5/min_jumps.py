def can():
    i = 0
    j = 0
    while i < len(jumps) - 1:
        if i + 3 < len(jumps) and jumps[i + 3] != 0:
            i += 3
        elif i + 2 < len(jumps) and jumps[i + 2] != 0:
            i += 2
        elif i + 1 < len(jumps) and jumps[i + 1] != 0:
            i += 1
        else:
            return -1  # Stuck, no valid jump
        j += 1
    return j

jumps = list(map(int, input().split()))
print(can())
