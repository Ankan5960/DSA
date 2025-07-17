#ifndef LINKEDLIST_HPP
#define LINKEDLIST_HPP

struct Node {
    int data;
    Node* next;
    Node(int val);
};

class LinkedList {
private:
    Node* head;
public:
    LinkedList();
    ~LinkedList();
    void insertAtEnd(int val);
    void display() const;
};

#endif // LINKEDLIST_HPP
