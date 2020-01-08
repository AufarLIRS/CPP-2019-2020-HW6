#include <iostream>
#include <swap.h>
#include <Array.h>
#include <MyUniquePtr.h>
int main()
{

    int c = 42;

    std::cout << &c<< std::endl;

   int *a = &c;

   std::cout << a << std::endl;
    MyUniquePtr<int> ptr(a);

    return 0;
}
