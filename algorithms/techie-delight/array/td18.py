def findProduct(A):
    lenA = len(A)
    
    product = [1] * lenA
    for i in range(lenA):
        for j in range(lenA):
            if A[i] != A[j]:
                product[i] *= A[j]
    for i in range(lenA):
        A[i] = product[i]

def findProduct2(A):
    lenA = len(A)

    left = [None] * lenA
    right = [None] * lenA
    left[0] = 1
    right[-1] = 1
    for i in range(1, lenA):
        left[i] = left[i - 1] * A[i - 1]
    for i in reversed(range(lenA - 1)):
        right[i] = right[i + 1] * A[i + 1]
    for i in range(lenA):
        A[i] = left[i] * right[i]

def findProduct3(A, n, index = 0, left = 1):
    if index == n:
        return 1
    
    cur = A[index]
    
    right = findProduct3(A, n, index + 1, left * cur)
    
    A[index] = left * right

    return cur * right

if __name__ == "__main__":
    A = [5, 3, 4, 2, 6, 8]
    findProduct3(A, len(A))
 
    print(A)