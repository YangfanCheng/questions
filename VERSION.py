class Solution:
    def compareVersion(self, A, B):
        A = A.split(".")
        B = B.split(".")
        less = len(A) if len(B) > len(A) else len(B)
        for i in range(less):
            if int(A[i]) > int(B[i]):
                return 1
            elif int(A[i]) < int(B[i]):
                return -1
            else:
                continue
        if len(A) > len(B) and int(A[len(B)]) != 0: 
            return 1
        if len(B) > len(A) and int(B[len(A)]) != 0:
            return -1
        return 0
