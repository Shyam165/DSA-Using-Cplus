#include <iostream>
#include <vector>
#include <unordered_set>

using namespace std;

vector<int> removeDuplicates(const vector<int>& arr) {
    unordered_set<int> seen;
    vector<int> result;
    
    for (int num : arr) {
        if (seen.find(num) == seen.end()) {  // If not found in the set
            seen.insert(num);                // Insert it into the set
            result.push_back(num);           // Add to result
        }
    }
    
    return result;
}

int main() {
    int n;
    cout << "Enter the number of elements in the array: ";
    cin >> n;

    vector<int> arr(n);
    cout << "Enter the elements of the array: ";
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    vector<int> uniqueArr = removeDuplicates(arr);

    cout << "Array after removing duplicates: ";
    for (int num : uniqueArr) {
        cout << num << " ";
    }

    cout << endl;

    return 0;
}





//2_method if we do not use unordered_set

// #include <iostream>
// #include <vector>
// #include <algorithm>  // For sort()

// using namespace std;

// vector<int> removeDuplicates(vector<int>& arr) {
//     // Sort the array
//     sort(arr.begin(), arr.end());

//     // Vector to store the result
//     vector<int> result;

//     // Traverse through the sorted array and add unique elements to result
//     for (int i = 0; i < arr.size(); i++) {
//         if (i == 0 || arr[i] != arr[i - 1]) {
//             result.push_back(arr[i]);
//         }
//     }

//     return result;
// }

// int main() {
//     int n;
//     cout << "Enter the number of elements in the array: ";
//     cin >> n;

//     vector<int> arr(n);
//     cout << "Enter the elements of the array: ";
//     for (int i = 0; i < n; i++) {
//         cin >> arr[i];
//     }

//     vector<int> uniqueArr = removeDuplicates(arr);

//     cout << "Array after removing duplicates: ";
//     for (int num : uniqueArr) {
//         cout << num << " ";
//     }

//     cout << endl;

//     return 0;
// }
