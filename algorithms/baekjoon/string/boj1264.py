import sys

sys.stdin = open("../input.txt", "r")

if __name__ == "__main__":
    while True:
        line = sys.stdin.readline().strip()
        if line == "#":
            break
        count_of_vowels = 0
        for letter in line:
            if letter in "aeiouAEIOU":
                count_of_vowels += 1
        print(count_of_vowels)