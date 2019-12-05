#include <iostream>
#include "type_name.hpp"

template<typename T>
struct s {
  T x;
  double y;
};

int& foo_lref();

int&& foo_rref();

int foo_value();

int main() {
  int a;
  double arr[10];
  s<int> s1{};
  int i = 0;
  const int ci = 0;

  std::cout << "decltype(a) is " << type_name<decltype(a)>() << '\n';
  std::cout << "decltype(arr) is " << type_name<decltype(arr)>() << '\n';
  std::cout << "decltype(s1) is " << type_name<decltype(s1)>() << '\n';
  std::cout << "decltype(s1.x) is " << type_name<decltype(s1.x)>() << '\n';
  std::cout << "decltype(s1.y) is " << type_name<decltype(s1.y)>() << '\n';
  std::cout << "decltype(i) is " << type_name<decltype(i)>() << '\n';
  std::cout << "decltype((i)) is " << type_name<decltype((i))>() << '\n';
  std::cout << "decltype(ci) is " << type_name<decltype(ci)>() << '\n';
  std::cout << "decltype((ci)) is " << type_name<decltype((ci))>() << '\n';
  std::cout << "decltype(static_cast<int&>(i)) is " << type_name<decltype(static_cast<int&>(i))>() << '\n';
  std::cout << "decltype(static_cast<int&&>(i)) is " << type_name<decltype(static_cast<int&&>(i))>() << '\n';
  std::cout << "decltype(static_cast<int>(i)) is " << type_name<decltype(static_cast<int>(i))>() << '\n';
  std::cout << "decltype(foo_lref()) is " << type_name<decltype(foo_lref())>() << '\n';
  std::cout << "decltype(foo_rref()) is " << type_name<decltype(foo_rref())>() << '\n';
  std::cout << "decltype(foo_value()) is " << type_name<decltype(foo_value())>() << '\n';
  return 0;
}
