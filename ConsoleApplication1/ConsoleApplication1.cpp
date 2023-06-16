#include <iostream>


int main() {
    std::cout << "Hello World!\n";
    int aInStack[10];
    std::cout << aInStack << std::endl;
    int* aInHeap = new int[10];
    std::cout << aInHeap;
}
