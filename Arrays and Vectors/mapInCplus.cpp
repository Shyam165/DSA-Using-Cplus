#include <iostream>
#include <map>

using namespace std;

int main() {
    // Create a map that stores integers as key and string as value
    map<int, string> orderedMap;

    // Insert elements into the map
    orderedMap[1] = "One";
    orderedMap[3] = "Three";
    orderedMap[2] = "Two";

    // Print the elements of the map (ordered by key)
    cout << "Ordered Map (std::map):" << endl;
    for (const auto &pair : orderedMap) {
        cout << pair.first << " -> " << pair.second << endl;
    }

    // Access element by key
    cout << "Value for key 2: " << orderedMap[2] << endl;

    return 0;
}
