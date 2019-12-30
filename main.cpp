#include <iostream>
#include <swap.h>
#include <Array.h>
#include <Array.cpp>
#include <swap.cpp>

int main()
{
   std::string a = "aaaaaaa";
   std::string b = "bbbbbbb";
   non_std::swap(a,b);
   std::cout << a;
}
