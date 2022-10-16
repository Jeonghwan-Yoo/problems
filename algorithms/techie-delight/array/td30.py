import sys

# sorting
def findSmallestSublistLen(A, k):
    sortedA = sorted(A, key=lambda x: -x)
    sum = 0
    for i, v in enumerate(sortedA):
        sum += v
        if sum > k:
            return i + 1
    return sys.maxsize

# two pointer
def findSmallestSublistLen2(A, k):
    left = 0
    right = 0
    sum = 0
    minLen = sys.maxsize
    aLen = len(A)

    while right < aLen:
        sum += A[right]

        while left <= right and sum > k:
            minLen = min(minLen, right - left + 1)
            sum -= A[left]
            left += 1
        right += 1

    return minLen
        
if __name__ == "__main__":
    A = [1, 2, 3, 4, 5, 6, 7, 8]
    k = 21
 
    length = findSmallestSublistLen(A, k)
 
    if length != sys.maxsize:
        print("The smallest sublist length is", length)
    else:
        print("No sublist exists")