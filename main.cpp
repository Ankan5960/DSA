#include <iostream>
#include "include/MyDSA.hpp"
#include "include/LinkedList.hpp"
using namespace std;

int main() {
    // Using function
    vector<int> nums = {1, 2, 3, 4, 5};
    printVector(nums);

    // Using class
    MyStack stack;
    stack.push(10);
    stack.push(20);
    cout << "Top: " << stack.top() << endl;
    stack.pop();
    cout << "Top after pop: " << stack.top() << endl;

    LinkedList list;
    list.insertAtEnd(1);
    list.insertAtEnd(2);
    list.insertAtEnd(3);
    cout << "Linked List: ";
    list.display();

    return 0;
}
