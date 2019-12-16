#ifndef MYUNIQUEPTR_H
#define MYUNIQUEPTR_H

template <typename T>
class MyUniquePtr
{
  T* pointer_;

public:
  MyUniquePtr(T* p)
  {
    this->pointer_ = p;
  }

  ~MyUniquePtr()
  {
    delete pointer_;
  }

  MyUniquePtr(const MyUniquePtr&) = delete;             // copy
  MyUniquePtr& operator=(const MyUniquePtr&) = delete;  // copy
  MyUniquePtr(MyUniquePtr&&) = default;                 // move
  MyUniquePtr& operator=(MyUniquePtr&&) = default;      // move
};

#endif  // MYUNIQUEPTR_H
