#ifndef MYUNIQUEPOINER_H
#define MYUNIQUEPOINER_H

template <class Type>
class MyUniquePointer
{
  Type* pointer_;

public:
  MyUniquePointer(Type* pointer)
  {
    this->pointer_ = pointer;
  }
  ~MyUniquePointer()
  {
    delete pointer_;
  }

  MyUniquePointer& operator=(const MyUniquePointer&) = delete;

  MyUniquePointer(const MyUniquePointer&) = delete;

  MyUniquePointer(MyUniquePointer&& myAnotherUniquePointer)
  {
    pointer_ = myAnotherUniquePointer.pointer_;
    myAnotherUniquePointer.pointer_ = nullptr;
  }
  MyUniquePointer& operator=(MyUniquePointer&& myAnotherUniquePointer)
  {
    pointer_ = myAnotherUniquePointer.pointer_;
    myAnotherUniquePointer.pointer_ = nullptr;
    return *this;
  }
};

#endif  // MYUNIQUEPOINER_H
