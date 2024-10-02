#include <iostream>

void function (int A[]) {
    std::cout << sizeof(A) << std::endl;
    std::cout << sizeof(int) << std::endl;
    std::cout << "size of the array in function: " << (sizeof(A) / sizeof(int)) << std::endl;
    for (int i = 0; i < 10; i++) {
        std::cout << A[i] << std::endl;
    }
}

int * func (int size) {
    int * arr = new int[size];
    for (int i = 0; i < size; i++) {
        arr[i] = i + 1;
    }
    return arr;
}

int main() {
    int array[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    int n = 10;
    int *p = array;
    std::cout << p[2] << std::endl;
    for (int x : array) {
        std::cout << x << std::endl;
    }
    //std::cout << "size of the array in main: " << (sizeof(array) / sizeof(int)) << std::endl;
    //function(p);

    int *ptr, size = 5;
    ptr = func(size);
    for (int i = 0; i < size; i++) {
        std::cout << ptr[i] << std::endl;
    }





    return 0;
}
