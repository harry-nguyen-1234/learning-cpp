#include <iostream>

typedef float metres;

void print_height(metres height);

int main(void) {
    std::cout << "Hello world!\n";

    print_height(100.75);

    return 0;
}

void print_height(metres height) {
    std::cout << "Height is: " << height << "\n";
}