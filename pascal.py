def pascalTriangl(A):
    arr = []
    if A == 0:
        return arr
    arr = [[1]] # first item is always [1]
    for i in range(2, A+1):
        arr.append([0]*i)
        arr[i-1][0] = 1
        arr[i-1][-1] = 1
        for j in range(1,i-1):
            arr[i-1][j] = arr[i-2][j-1] + arr[i-2][j]
    return arr
