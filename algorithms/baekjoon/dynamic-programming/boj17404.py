import sys

sys.stdin = open("../input.txt", "r")
MAX_VALUE = int(1e9)

if __name__ == "__main__":
    N = int(sys.stdin.readline().strip())
    costList = [[0 for i in range(3)] for j in range(N)]
    for i in range(N):
        costList[i] = list(map(int, sys.stdin.readline().strip().split()))

    minCost = MAX_VALUE
    for st in range(3):
        dp = [[0 for i in range(3)] for j in range(N)]
        for j in range(3):
            if st == j:
                dp[0][j] = costList[0][j]
            else:
                dp[0][j] = MAX_VALUE

        for i in range(1, N):
            for j in range(3):
                dp[i][j] = min(dp[i - 1][(j + 1) % 3] + costList[i][j], dp[i - 1][(j + 2) % 3] + costList[i][j])
        
        for j in range(3):
            if st == j:
                continue
            minCost = min(minCost, dp[N - 1][j])

    print(minCost)