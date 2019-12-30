#ifndef MYUNIQUEPTR_H
#define MYUNIQUEPTR_H
#include <utility>

template <typename T>
class MyUniquePtr
{
private:
    T* pointer;

public:
    MyUniquePtr();
    MyUniquePtr(T* pointer);
    MyUniquePtr(const MyUniquePtr& a) = delete;
    MyUniquePtr& operator=(const MyUniquePtr& a) = delete;
    ~MyUniquePtr();
    MyUniquePtr& operator=(MyUniquePtr&& a);
    MyUniquePtr(const MyUniquePtr&& a);

    const T* getPonter();
};

#endif // MYUNIQUEPTR_H
