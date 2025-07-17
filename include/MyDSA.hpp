#ifndef MYDSA_HPP
#define MYDSA_HPP

#include <vector>
using namespace std;

// Function Declaration
void printVector(const vector<int>& vec);

// Class Declaration
class MyStack {
private:
    vector<int> stack;
public:
    void push(int val);
    void pop();
    int top() const;
    bool isEmpty() const;
};

#endif // MYDSA_HPP
