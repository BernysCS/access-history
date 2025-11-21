#ifndef LIST_H 
#define LIST_H

class List {
private:
    struct Node {
        int data;
        Node *next;
    };
    Node* list;

public:

    List();
    ~List();
    void insert(int);
    void print();
    void search(int);
    void remove(int);
};

#endif
