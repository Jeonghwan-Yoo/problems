import sys

def find_sublist(A, k):
    len_a = len(A)
    if len_a < k:
        return
    
    sum = 0
    min_sum = sys.maxsize
    end_index = 0
    for i in range(len_a):
        sum += A[i]
        if i + 1 >= k:
            if min_sum > sum:
                min_sum = sum
                end_index = i
            sum -= A[i + 1 - k]
    
    print("The minimum sum sublist is", (end_index - k + 1, end_index))

if __name__ == "__main__":
    A = [10, 4, 2, 5, 6, 3, 8, 1]
    k = 3
 
    find_sublist(A, k)