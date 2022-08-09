def isConsecutive(A, i , j, minValue, maxValue):
    if j - i != maxValue - minValue:
        return False
    
    visited = [False] * (j - i + 1)
    for index in range(i, j + 1):
        if visited[A[index] - minValue]:
            return False
        visited[A[index] - minValue] = True
    return True

def findMaxSublist(A):
    maxLen = 1
    maxStart = maxEnd = 0

    lenA = len(A)
    for i in range(lenA - 1):
        maxValue = A[i]
        minValue = A[i]
        for j in range(1, lenA):
            maxValue = max(maxValue, A[j])
            minValue = min(minValue, A[j])
            if isConsecutive(A, i, j, minValue, maxValue):
                if maxLen < j - i + 1:
                    maxLen = j - i + 1
                    maxStart = i
                    maxEnd = j
    
    print("The largest sublist is", (maxStart, maxEnd))

if __name__ == "__main__":
    A = [2, 0, 2, 1, 4, 3, 1, 0]
    findMaxSublist(A)