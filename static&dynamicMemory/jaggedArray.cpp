#include <iostream>

int main() {
    int **jaggedArray;
    int rows;

    // Get the number of rows from the user
    std::cout << "Enter the number of rows: ";
    std::cin >> rows;

    // Allocate memory for the array of pointers (rows)
    jaggedArray = new int*[rows];

    // Input elements for each sub-array
    for (int i = 0; i < rows; ++i) {
        int cols;
        std::cout << "Enter the number of elements for row " << i << ": ";
        std::cin >> cols;

        // Allocate memory for each sub-array
        jaggedArray[i] = new int[cols];

        // Input elements for the current sub-array
        std::cout << "Enter " << cols << " elements for row " << i << ": ";
        for (int j = 0; j < cols; ++j) {
            std::cin >> jaggedArray[i][j];
        }
    }

    // Output the jagged array
    std::cout << "Jagged Array:" << std::endl;
    for (int i = 0; i < rows; ++i) {
        for (int j = 0; j < sizeof(jaggedArray[i]) / sizeof(jaggedArray[i][0]); ++j) {
            std::cout << jaggedArray[i][j] << " ";
        }
        std::cout << std::endl;
    }

    // Deallocate memory
    for (int i = 0; i < rows; ++i) {
        delete[] jaggedArray[i];
    }
    delete[] jaggedArray;

    return 0;
}
