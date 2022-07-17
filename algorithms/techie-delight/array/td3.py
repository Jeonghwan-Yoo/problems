# Using brute-force
def printAllSublists(nums):
    size = len(nums)
    for i in range(size):
        sum = 0
        for j in range(i, size):
            sum += nums[j]
            if sum == 0:
                print('Sublist', (i, j))

# Using multimap to print all subarrays
def printAllSublists2(nums):
    size = len(nums)
    
    d = {}
    d.setdefault(0, []).append(-1)

    sum = 0
    for i in range(size):
        sum += nums[i]
        if sum in d:
            list = d.get(sum)
            for j in list:
                print('Sublist', (j + 1, i))
        d.setdefault(sum, []).append(i)

if __name__ == "__main__":
    nums = [3, 4, -7, 3, 1, 3, 1, -4, -2, -2]
    printAllSublists(nums)
    printAllSublists2(nums)