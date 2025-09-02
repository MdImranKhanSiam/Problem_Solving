#include <iostream>
#include <list>

int main() {
    std::list<int> myList = {10, 20, 30, 40, 50};

    int target = 30;

    if (myList.contains(target)) {
        std::cout << "Found " << target << " in the list.\n";
    } else {
        std::cout << target << " not found in the list.\n";
    }

    return 0;
}
