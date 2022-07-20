def findLargestSublist(nums):
    d = {}
    d[0] = -1
    endIndex = -1
    maxLen = 0
    sum = 0
    numsLen = len(nums)
    for i in range(numsLen):
        sum += 1 if (nums[i] == 1) else -1

        if sum in d:
            currentLen = i - d.get(sum)
            if maxLen < currentLen:
                maxLen = currentLen
                endIndex = i
        else:
            d[sum] = i

    if endIndex != -1:
        print(endIndex - maxLen + 1, endIndex)
    else:
        print("No sublist exists")

if __name__ == "__main__":
    nums = [0, 0, 1, 0, 1, 0, 0]
    findLargestSublist(nums)