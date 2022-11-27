import sys
from datetime import date

sys.stdin = open("../input.txt", "r")

if __name__ == "__main__":
    print(date.today())