import sys

sys.stdin = open("../input.txt", "r")

def isLCS(A, B, S):
    indexA = A.find(S)
    indexB = B.find(S)
    if indexA == -1 or indexB == -1:
        return False
    if indexA != 0 and indexB != 0 and A[indexA - 1] == B[indexB - 1]:
        return False
    if indexA + len(S) < len(A) and indexB + len(S) < len(B) and A[indexA + len(S)] == B[indexB + len(S)]:
        return False
    return True

if __name__ == "__main__":
    A = sys.stdin.readline().strip()
    B = sys.stdin.readline().strip()
    S = sys.stdin.readline().strip()
    
    if isLCS(A, B, S) == True:
        print("YES")
    else :
        print("NO")