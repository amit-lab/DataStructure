#include "headers/SLL.h"
#include <iostream>
using namespace std;

int main() {
    SLL sll;
    sll.append(10);
    sll.append(20);
    sll.append(30);
    sll.append(40);
    sll.append(50);
    sll.append(60);
    sll.append(70);
    sll.displayList();

    Node* middle = sll.getMiddleNode();
    cout << middle->data << endl;

    cout << boolalpha << sll.isPresent(10) << endl;

    return 0;
}
