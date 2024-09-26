#include <iostream>
#include <map>

int main() {
    // Create a map of string to int
    std::map<std::string, int> myMap;

    // Insert key-value pairs into the map
    myMap["apple"] = 5;
    myMap["banana"] = 3;
    myMap["orange"] = 2;

    // Declare an iterator for the map
    std::map<std::string, int>::iterator it;

    // Iterate over the map using the iterator
    for (it = myMap.begin(); it != myMap.end(); ++it) {
        // Access the key and value using the iterator
        std::cout << "Key: " << it->first << ", Value: " << it->second << std::endl;
    }

    // Alternatively, using auto keyword (C++11 and later)
    std::cout << "\nUsing auto keyword:\n";
    for (auto it = myMap.begin(); it != myMap.end(); ++it) {
        std::cout << "Key: " << it->first << ", Value: " << it->second << std::endl;
    }

    // Using a range-based for loop with auto
    std::cout << "\nUsing range-based for loop:\n";
    for (const auto& pair : myMap) {
        std::cout << "Key: " << pair.first << ", Value: " << pair.second << std::endl;
    }

    return 0;
}
