import sys

sys.stdin = open("../input.txt", "r")

if __name__ == "__main__":
    N = int(sys.stdin.readline().strip())
    sum = 5 + (3 * N + 8) * (N - 1) // 2
    print(sum % 45678)