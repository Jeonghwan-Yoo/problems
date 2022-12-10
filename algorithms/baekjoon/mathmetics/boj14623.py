import sys

sys.stdin = open("../input.txt", "r")

if __name__ == "__main__":
    B1 = int(sys.stdin.readline().strip(), 2)
    B2 = int(sys.stdin.readline().strip(), 2)
    print(bin(B1 * B2).replace("0b", ""))