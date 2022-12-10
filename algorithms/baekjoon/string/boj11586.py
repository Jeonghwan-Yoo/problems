import sys

sys.stdin = open("../input.txt", "r")

if __name__ == "__main__":
    N = int(sys.stdin.readline().strip())
    mirror = [sys.stdin.readline().strip() for _ in range(N)]
    K = int(sys.stdin.readline().strip())
    
    if K == 1:
        print('\n'.join(mirror))
    elif K == 2:
        print('\n'.join(i[::-1] for i in mirror))
    else :
        print('\n'.join(mirror[::-1]))