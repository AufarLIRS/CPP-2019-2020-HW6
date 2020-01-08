#ifndef MYUNIQUEPTR_H
#define MYUNIQUEPTR_H

template <class T>
class MyUniquePtr
{
private:
    T* pointer;

public:

    MyUniquePtr(const MyUniquePtr&) = delete;
    MyUniquePtr& operator=(const MyUniquePtr&) = delete;

    const T* getPonter()
    {
        return pointer;
    }

    T getContent()
    {
        return *pointer;
    }

    MyUniquePtr()
    {
      pointer = nullptr;
    }

    explicit MyUniquePtr(T* pointer)
    {
      this->pointer = pointer;
    }

    MyUniquePtr<T>& operator=(MyUniquePtr&& a)
    {
      this->pointer = a.pointer;
      a.pointer = nullptr;
      return *this;
    }

    explicit  MyUniquePtr(MyUniquePtr&& a)
    {
      this->pointer = a.pointer;
      a.pointer = nullptr;
    }

    ~MyUniquePtr()
    {
      delete pointer;
    }

};

#endif // MYUNIQUEPTR_H
