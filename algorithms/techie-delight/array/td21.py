import sys

def kadane(A):
    maximum = -sys.maxsize
    
    sum = 0
    for v in A:
        sum += v
        sum = max(sum, v)
        maximum = max(maximum, sum)

    return maximum

if __name__ == "__main__":
    A = [-2, 1, -3, 4, -1, 2, 1, -5, 4]
    B = [-8, -3, -6, -2, -5, -4]
    print("The sum of contiguous sublist with the largest sum is", kadane(A))
    print("The sum of contiguous sublist with the largest sum is", kadane(B))