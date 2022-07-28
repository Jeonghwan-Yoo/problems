from random import randrange

def shuffle(A):
    lenA = len(A)
    for i in reversed(range(1, lenA)):
        j = randrange(i + 1)
        A[i], A[j] = A[j], A[i]

def shuffle2(A):
    lenA = len(A)
    for i in range(lenA - 1):
        j = randrange(i, lenA)
        A[i], A[j] = A[j], A[i]

if __name__ == '__main__':
    A = [1, 2, 3, 4, 5, 6]
    shuffle(A)
    print(A)
    shuffle2(A)
    print(A)