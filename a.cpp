#include <iostream>
#include <string>
#include <vector>

template<typename ... T>
void print(T... t) {
  int n = sizeof...(T);

  std::vector<std::string> vec = {std::to_string(t)...};

  std::cout << n << "\n";

  for (auto &a : vec) {
    std::cout << a << "\n";
  }
}

int main() {
  print(1, 3, 4);
}
