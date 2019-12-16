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

  MyUniquePtr(const MyUniquePtr&) = delete;
  MyUniquePtr& operator=(const MyUniquePtr&) = delete;
  MyUniquePtr(MyUniquePtr&& r)
  {
    pointer_ = r.pointer_;
    r.pointer_ = nullptr;
  }
  MyUniquePtr& operator=(MyUniquePtr&& r)
  {
    pointer_ = r.pointer_;
    r.pointer_ = nullptr;
    return *this;
  }
};

#endif  // MYUNIQUEPTR_H
