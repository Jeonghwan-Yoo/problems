#include <iostream>
#include <vector>
#include <set>
#include <string>
#include <experimental/iterator>

using namespace std;

void findCombinations(vector<int> const &arr, int index, int k, set<vector<int>> &subarray, vector<int> out) {
    int arrSize = arr.size();
    if (arrSize <= 0) {
        return;
    }

    if (k == 0) {
        subarray.insert(out);
        return;
    }

    if (index == arrSize) {
        return;
    }

    out.emplace_back(arr[index]);
    findCombinations(arr, index + 1, k - 1, subarray, out);
    out.pop_back();
    findCombinations(arr, index + 1, k, subarray, out);
}

template<typename T>
void printVector(vector<T> const &input) {
    cout << "[";
    copy(begin(input), end(input), std::experimental::make_ostream_joiner(cout, ", "));
    cout << "]\n";
}

int main() {
    vector<int> arr = { 1, 2, 3 };
    int k = 2;
 
    set<vector<int>> subarrays;
    vector<int> out;
 
    findCombinations(arr, 0, k, subarrays, out);
 
    for (auto const &vec: subarrays) {
        printVector(vec);
    }
    
    return 0;
}