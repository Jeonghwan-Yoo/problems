import sys

sys.stdin = open("../input.txt", "r")

if __name__ == "__main__":
    N = int(sys.stdin.readline())
    print(N * (N - 1))