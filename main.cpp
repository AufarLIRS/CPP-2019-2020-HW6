#include <iostream>
#include <swap.h>
#include <Array.h>
#include <MyUniquePtr.h>
int main()
{
   int *a = new int;
   a[0]=42;
   int *q = new int;
   q[0]=0;
    MyUniquePtr<int> ptr(a);\
    MyUniquePtr<int> ptr1(q);
    ptr1 = ptr;
    std::cout << ptr.getPonter() << std::endl;
    std::cout << ptr1.getContent() << std::endl;
    return 0;
}
