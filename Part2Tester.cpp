#include <iostream>
#include "LinkedList.h"
#include "Utils.h"

int main()
{
    int* reversedNums = reverse10();

    std::cout << "Reversed numbers:" << std::endl;
    for (int i = 0; i < 10; i++) 
    {
        std::cout << reversedNums[i] << " \n";
    }
    std::cout << std::endl;

    delete[] reversedNums;  
    return 0;
}
