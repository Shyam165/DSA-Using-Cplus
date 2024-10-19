#include <iostream>
#include <map>

using namespace std;

int main() {
    map<int, string> myMap;
    myMap[1] = "One";
    myMap[2] = "Two";
    myMap[3] = "Three";

    // Search for a key
    auto it = myMap.find(2); // Find key 2

    if (it != myMap.end()) {
        cout << "Key found: " << it->first << " -> " << it->second << endl;
    } else {
        cout << "Key not found" << endl;
    }

    // Search for a non-existent key
    it = myMap.find(4); // Find key 4 (which doesn't exist)

    if (it != myMap.end()) {
        cout << "Key found: " << it->first << " -> " << it->second << endl;
    } else {
        cout << "Key not found" << endl;
    }

    return 0;
}
