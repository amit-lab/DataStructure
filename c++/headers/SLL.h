#pragma once

class Node {
public:
    int data;
    Node* next;

    Node(int data) {
        this->data = data;
        this->next = nullptr;
    }
};

class SLL {
private:
    Node *head = nullptr, *tail=nullptr;

public:
    void displayList();
    void append(int data);
    void addAtBegginning(int data);
    Node* getMiddleNode();
    int length();
    bool isPresent(int data);
};

