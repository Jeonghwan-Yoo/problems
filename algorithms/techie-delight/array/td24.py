def findCombinations(A, k, subarrays, out = (), i = 0):
    lenA = len(A)
    if lenA <= 0 or lenA < k:
        return
    if k == 0:
        subarrays.add(out)
        print(subarrays)
        return
    
    for j in range(i, lenA):
        findCombinations(A, k - 1, subarrays, out + (A[j], ), j + 1);

if __name__ == "__main__":
 
    A = [1, 2, 3]
    k = 2
 
    subarrays = set()
 
    findCombinations(A, k, subarrays)
    print(subarrays)