#include <iostream>
#include <vector>
#include <algorithm>
#include <unordered_map>

using namespace std;

// brute-force
int findMajorityElement(vector<int> const &input) {
    int n = (int)input.size();
    int n2 = n >> 1;
    for (int i = 0; i <= n2 && n > 0; i++) {
        int count = 1;
        for (int j = i + 1; j < n; j++) {
            if (input[i] == input[j]) {
                count++;
            }
        }
        if (count > n2) {
            return input[i];
        }
    }

    return -1;
}

// sorting
int findMajorityElement2(vector<int> const &input) {
    vector<int> input2(input.begin(), input.end());
    sort(input2.begin(), input2.end());

    int n = (int)input.size();
    int n2 = n >> 1;

    int count = 0;
    int index = 0;
    for (int i = 0; i < n; i++) {
        if (input2[index] == input2[i]) {
            count++;
            if (count > n2) {
                return input2[i];
            }
        } else {
            count = 1;
            index = i;
        }
    }

    return -1;
}

// linear time
int findMajorityElement3(vector<int> const &input) {
    unordered_map<int, int> map;
    int n = (int)input.size();
    int n2 = n >> 1;
    for (int i = 0; i < n; i++) {
        map[input[i]]++;
    }
    for (auto &m : map) {
        if (m.second > n2) {
            return m.first;
        }
    }

    return -1;
}

// Boyer-Moore majority vote algorithm
int findMajorityElement4(vector<int> const &input) {
    int n = (int)input.size();
    int m;
    int count = 0;
    for (int i = 0; i < n; i++) {
        if (count == 0) {
            m = input[i];
            count = 1;
        } else {
            if (m == input[i]) {
                count++;
            } else {
                count--;
            }
        }
    }

    return m;
}

int main() {
    vector<int> input = { 2, 8, 7, 2, 2, 5, 2, 3, 1, 2, 2 };
 
    int result = findMajorityElement4(input);
    if (result != -1) {
        cout << "The majority element is " << result;
    }
    else {
        cout << "The majority element doesn't exist";
    }
 
    return 0;
}