#include "headers/SLL.h"
#include <iostream>
using namespace std;

void SLL::displayList() {
    if (this->head == nullptr)
        cout << "List is empty !!" << endl;
    else if (this->head->next == nullptr)
        cout << this->head->data << endl;
    else {
        Node* tmp = this->head;
        while(true) {
            cout << tmp->data << " -> ";
            if(tmp->next->next != nullptr)
                tmp = tmp->next;
            else {
                tmp = tmp->next;
                break;
            }
        }
        cout << tmp->data << endl;
    }
}

void SLL::append(int data) {
    Node* newNode = new Node(data);
    if(this->head == nullptr) {
        this->head = newNode;
        this->tail = newNode;
    } 
    else {
        this->tail->next = newNode;
        this->tail = newNode;
    }
}

void SLL::addAtBegginning(int data) {
    Node* newNode = new Node(data);
    if(this->head == nullptr)
        this->head = newNode;
    else {
        newNode->next = this->head;
        this->head = newNode;
    }
}


Node* SLL::getMiddleNode() {
    Node *mid, *jump;
    mid = jump = this->head;

    if(this->head == nullptr)
        return mid;

    while(true) {
        if(jump->next == nullptr || jump->next->next == nullptr)
            break;
        else {
            jump = jump->next->next;
            mid = mid->next;
        }
    }
    return mid;
}

int SLL::length() {
    int count = 0;
    Node* tmp = this->head;
    while(tmp != nullptr) {
        count++;
        tmp = tmp->next;
    }
    return count;
}

bool SLL::isPresent(int data) {
    return false;
}
