#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <climits>

using namespace std;

class MinStack {
public:
    vector<int> stack{};
    MinStack(){
    
    };

    void push(int val) {
        stack.push_back(val);
    }
    
    void pop() {
        stack.pop_back();
    }
    
    int top() {
       return stack.back();
    }
    
    int getMin() {
        int min = INT_MAX;
        for (auto& i : stack){
            if (i < min){
                min = i;
            }
        }
        return min;
    }
};

int main() {
    MinStack* obj = new MinStack();
    obj->push(5);
    obj->push(3);
    obj->push(1);
    obj->pop();
    int top = obj->top();
    int min = obj->getMin();

    // Print the top and minimum values
    std::cout << "Top: " << top << std::endl;
    std::cout << "Min: " << min << std::endl;

    delete obj; // Don't forget to delete the object when you're done with it

    return 0;
}
