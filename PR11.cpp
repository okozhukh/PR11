//Одновимірні динамічні масиви

#include <iostream>

int main() {
    int size;
    std::cout << "Enter the size of the array: ";
    std::cin >> size;

    // Створення динамічного масиву
    int* array = new int[size];

    // Заповнення масиву
    for (int i = 0; i < size; ++i) {
        std::cout << "Enter element " << i << ": ";
        std::cin >> array[i];
    }

    // Виведення масиву
    std::cout << "Array elements are: ";
    for (int i = 0; i < size; ++i) {
        std::cout << array[i] << " ";
    }
    std::cout << std::endl;

    // Звільнення пам'яті
    delete[] array;

    return 0;
}

//Багатовимірні динамічні масиви

#include <iostream>

int main() {
    int rows, cols;
    std::cout << "Enter the number of rows: ";
    std::cin >> rows;
    std::cout << "Enter the number of columns: ";
    std::cin >> cols;

    // Створення двовимірного динамічного масиву
    int** array = new int*[rows];
    for (int i = 0; i < rows; ++i) {
        array[i] = new int[cols];
    }

    // Заповнення масиву
    for (int i = 0; i < rows; ++i) {
        for (int j = 0; j < cols; ++j) {
            std::cout << "Enter element [" << i << "][" << j << "]: ";
            std::cin >> array[i][j];
        }
    }

    // Виведення масиву
    std::cout << "Array elements are:\n";
    for (int i = 0; i < rows; ++i) {
        for (int j = 0; j < cols; ++j) {
            std::cout << array[i][j] << " ";
        }
        std::cout << std::endl;
    }

    // Звільнення пам'яті
    for (int i = 0; i < rows; ++i) {
        delete[] array[i];
    }
    delete[] array;

    return 0;
}

//Використання std::vector
//Приклад (Одновимірний вектор)

#include <iostream>
#include <vector>

int main() {
    int size;
    std::cout << "Enter the size of the vector: ";
    std::cin >> size;

    // Створення вектора
    std::vector<int> vec(size);

    // Заповнення вектора
    for (int i = 0; i < size; ++i) {
        std::cout << "Enter element " << i << ": ";
        std::cin >> vec[i];
    }

    // Виведення вектора
    std::cout << "Vector elements are: ";
    for (int i = 0; i < size; ++i) {
        std::cout << vec[i] << " ";
    }
    std::cout << std::endl;

    return 0;
}

//Приклад (Двовимірний вектор)

#include <iostream>
#include <vector>

int main() {
    int rows, cols;
    std::cout << "Enter the number of rows: ";
    std::cin >> rows;
    std::cout << "Enter the number of columns: ";
    std::cin >> cols;

    // Створення двовимірного вектора
    std::vector<std::vector<int>> vec(rows, std::vector<int>(cols));

    // Заповнення вектора
    for (int i = 0; i < rows; ++i) {
        for (int j = 0; j < cols; ++j) {
            std::cout << "Enter element [" << i << "][" << j << "]: ";
            std::cin >> vec[i][j];
        }
    }

    // Виведення вектора
    std::cout << "Vector elements are:\n";
    for (int i = 0; i < rows; ++i) {
        for (int j = 0; j < cols; ++j) {
            std::cout << vec[i][j] << " ";
        }
        std::cout << std::endl;
    }

    return 0;
}
