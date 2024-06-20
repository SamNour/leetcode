#include <algorithm>
#include <iostream>
#include <map>
#include <unordered_map>
#include <vector>

using namespace std;
class Solution {
public:
  bool isValid(string s) {
    std::vector<char> stack;
    for (const auto &c : s) {
      if (c == '[' || c == '{' || c == '(') {
        stack.push_back(c);
        continue;
      } else if (stack.empty()){
        return false;
      }

      if ((stack.back() == '[' && c != ']') ||
          (stack.back() == '(' && c != ')') ||
          (stack.back() == '{' && c != '}')) {
        return false;
      } else {
        stack.pop_back();
      }
    }
    return stack.empty();
  }
};

int main() {
  Solution solution;
  std::string s = "()";
  bool result = solution.isValid(s);

  // Print the result
  std::cout << "The string is " << (result ? "valid" : "not valid")
            << std::endl;

  return 0;
}
