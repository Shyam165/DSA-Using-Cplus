// #include<iostream>
// using namespace std;

// int main(){
//     int n;
//     cin>>n;
//     int arr[n];
//     for (int i=0;i<n;i++){
//         cin>>arr[i];
//     }
//     for(int i=0;i<n;i++){
//         for(int j=0;j<n;j++){
//             if(arr[i]==arr[j]){
//                 cout<<arr[i]<<" ";
//             }
//         }
//     }
//     return 0;
// }


#include <iostream>
using namespace std;

void findDuplicates(int arr[], int n) {
    cout << "Duplicate elements in the array: ";
    bool hasDuplicates = false;

    // Iterate through the array
    for (int i = 0; i < n; i++) {
        // Compare the current element with all the next elements
        for (int j = i + 1; j < n; j++) {
            if (arr[i] == arr[j]) {
                // Print the duplicate and break to avoid printing the same element multiple times
                cout << arr[i] << " ";
                hasDuplicates = true;
                break;
            }
        }
    }

    if (!hasDuplicates) {
        cout << "No duplicate elements found." << endl;
    }
}

int main() {
    int arr[] = {1, 2, 3, 4, 5, 2, 3, 6, 7, 8, 9, 3};
    int n = sizeof(arr) / sizeof(arr[0]);

    findDuplicates(arr, n);

    return 0;
}
