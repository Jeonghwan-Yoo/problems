/*
 * Given an unsorted integer array, find a pair with the given sum in it.
 */

#include <iostream>
#include <algorithm>
#include <unordered_set>

using namespace std;

// Using brute-force
void findPair(int nums[], int size, int target) {
    for (int i = 0; i < size - 1; i++) {
        for (int j = i + 1; j < size; j++) {
            if (nums[i] + nums[j] == target) {
                cout << "pair : (" << nums[i] << ", " << nums[j] << ")" << endl;
                return;
            }
        }
    }
    cout << "pair not found" << endl;
}

// Using sorting
void findPair2(int nums[], int size, int target) {
    sort(nums, nums + size);
    int left = 0;
    int right = size - 1;
    while (left < right) {
        if (nums[left] + nums[right] > target) {
            right--;
        } else if (nums[left] + nums[right] < target) {
            left++;
        } else {
            cout << "pair : (" << nums[left] << ", " << nums[right] << ")" << endl;
            return;
        }
    }
    cout << "pair not found" << endl;
}

// Using hashing
void findPair3(int nums[], int size, int target) {
    unordered_set<int> havingNums;
    for (int i = 0; i < size; i++) {
        if (havingNums.find(target - nums[i]) != havingNums.end()) {
            cout << "pair : (" << nums[i] << ", " << target - nums[i] << ")" << endl;
            return;
        }
        havingNums.insert(nums[i]);
    }
    cout << "pair not found" << endl;
}

int main() {
    int nums[] = { 8, 7, 2, 5, 3, 1 };
    int target = 10;
    int size = sizeof(nums) / sizeof(nums[0]);
    findPair(nums, size, target);
    findPair2(nums, size, target);
    findPair3(nums, size, target);
    
    return 0;
}