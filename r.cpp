#include <iostream>
#include <algorithm>
#include <string>

int main() {
  std::string s = "AAAAGGGGGTCTCCC";

  // sort the string
  std::sort(s.begin(), s.end());

  // find the lower and upper bounds of 'A'
  auto lb = std::lower_bound(s.begin(), s.end(), 'A');
  auto ub = std::upper_bound(s.begin(), s.end(), 'A');

  // print the lower and upper bounds
  std::cout << "lower bound of 'A': " << *lb << std::endl;
  std::cout << "upper bound of 'A': " << *ub << std::endl;

  return 0;
}
