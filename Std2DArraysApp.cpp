#include "Std2Arrays.h"
#include <iostream>

int main() {
    std::array<std::array<int, MAXNUMBEROFCOLUMNS>, MAXNUMBEROFROWS> arr;
    int numberOfRows = 4;  // 4 satır
    int numberOfColumns = 4; // 4 sütun
    std::string fillMethod = "SW HOR"; // Dolum yöntemi

    try {
        fillArray(arr, numberOfRows, numberOfColumns, fillMethod);
        printArray(arr, numberOfRows, numberOfColumns);
    } catch (std::exception& e) {
        std::cout << "Exception: " << e.what() << std::endl;
    }

    return 0;
}
