#include "MyDSA.hpp"
#include <iostream>
using namespace std;

// Function Definition
void printVector(const vector<int>& vec) {
    for (int val : vec) {
        cout << val << " ";
    }
    cout << endl;
}

// Class Definitions
void MyStack::push(int val) {
    stack.push_back(val);
}

void MyStack::pop() {
    if (!stack.empty())
        stack.pop_back();
}

int MyStack::top() const {
    if (!stack.empty())
        return stack.back();
    return -1; // Indicating empty stack
}

bool MyStack::isEmpty() const {
    return stack.empty();
}
