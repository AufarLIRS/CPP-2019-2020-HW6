#include <iostream>
#include <vector>

using namespace std;

// Task 1
class MySwap
{
public:
  MySwap() : tst1_(0), tst2_(0.0)
  {
  }  // Конструктор без параметров
  MySwap(int i, double d) : tst1_(i), tst2_(d)
  {
  }  // Конструктор с двумя параметрами
  int get_i()
  {
    return tst1_;
  }  // Геттер tst1_
  double get_d()
  {
    return tst2_;
  }  // Геттер tst2_

private:
  int tst1_;
  double tst2_;
};

// Task 1
void swap(MySwap* s1, MySwap* s2)
{
  MySwap tmp(0, 0.0);

  memcpy(&tmp, s1, sizeof(*s1));
  memcpy(s1, s2, sizeof(*s1));
  memcpy(s2, &tmp, sizeof(*s1));
}

// Task 2
template <typename T>
class Array
{
public:
  size_t size() const
  {
    return vect_.size();
  }

  T& operator[](size_t ind)
  {
    return vect_[ind];
  }

  void push_back(T t1)
  {
    vect_.push_back(t1);
  }

  void pop_back()
  {
    vect_.pop_back();
  }

private:
  std::vector<T> vect_;
};

// Task 3
template <typename T>
class MyUniquePtr
{
public:
  MyUniquePtr(T* ptr = nullptr) : ptr_(ptr)
  {
  }

  MyUniquePtr(const MyUniquePtr&) = delete;

  MyUniquePtr& operator=(const MyUniquePtr&) = delete;

  MyUniquePtr& operator=(T* t)
  {
    this->free();
    ptr_ = t;
    return *this;
  }

  MyUniquePtr(MyUniquePtr&& mp) : ptr_(nullptr)
  {
    swap(mp);
  }

  MyUniquePtr& operator=(MyUniquePtr&& mp)
  {
    swap(mp);
    return *this;
  }

  explicit operator bool() const
  {
    return ptr_;
  }

  T& operator*() const
  {
    return *ptr_;
  }

  T* operator->() const
  {
    return ptr_;
  }

  T* get()
  {
    return ptr_;
  }

  void swap(MyUniquePtr& mp)
  {
    std::swap(ptr_, mp.ptr_);
  }

  T* release()
  {
    T* copy = ptr_;
    ptr_ = nullptr;
    return copy;
  }

  void reset(T* ptr = nullptr)
  {
    T* old = ptr_;
    ptr_ = ptr;
    if (old != nullptr)
      delete old;
  }

private:
  T* ptr_;
};

int main()
{
  // Task 1
  MySwap sw1(5, 11.8);
  MySwap sw2(7, 15.99);
  cout << "Obj1 (" << sw1.get_i() << ", " << sw1.get_d() << ")" << endl;
  cout << "Obj2 (" << sw2.get_i() << ", " << sw2.get_d() << ")" << endl;
  swap(&sw1, &sw2);
  cout << "Swapping" << endl;
  cout << "Obj1 (" << sw1.get_i() << ", " << sw1.get_d() << ")" << endl;
  cout << "Obj2 (" << sw2.get_i() << ", " << sw2.get_d() << ")\n\n";

  // Task 2
  Array<int> in;
  in.push_back(1);
  in.push_back(2);
  in.push_back(3);
  cout << "Array<int>: ";
  for (size_t i = 0; i < in.size(); i++)
  {
    cout << in[i];
    if (i < (in.size() - 1))
      cout << ", ";
  }
  cout << endl;
  Array<double> db;
  db.push_back(1.1);
  db.push_back(2.2);
  db.push_back(3.3);
  cout << "Array<double>: ";
  for (size_t i = 0; i < db.size(); i++)
  {
    cout << db[i];
    if (i < (db.size() - 1))
      cout << ", ";
  }
  cout << endl << endl;

  // Task 3
  MyUniquePtr<MySwap> p1(&sw1);
  MyUniquePtr<MySwap> p2(&sw2);
  MyUniquePtr<MySwap> tmp;
  // tmp = p2;         // Error
  // tmp = move(p1);   // Ok
  cout << "Obj1 (" << p1->get_i() << ", " << p1->get_d() << ")" << endl;
  cout << "Obj2 (" << p2->get_i() << ", " << p2->get_d() << ")" << endl;
  p1.swap(p2);
  cout << "Swapping" << endl;
  cout << "Obj1 (" << p1->get_i() << ", " << p1->get_d() << ")" << endl;
  cout << "Obj2 (" << p2->get_i() << ", " << p2->get_d() << ")\n\n";

  return 0;
}
