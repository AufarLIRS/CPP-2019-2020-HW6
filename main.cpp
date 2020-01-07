#include <iostream>
#include <swap.h>
#include <Array.h>
#include <Array.cpp>
#include <swap.cpp>

int main()
{
    Array<int> ints(10);
    for(int i = 0; i < 10; i++){
        ints[i] = i;
    }

    for(int i = 0; i < 10; i++)
        std::cout << ints[i] << " ";

}
