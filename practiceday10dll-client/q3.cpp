//Following driver program gets a value at the specified position in the linked list.The At function checks if the specified position is within the bounds of valid elements, throwing an out_of_range exception if it is not.Your job is to implement the At function.

#include <cassert>
#include <stdexcept>
#include <iostream>

/*Work fine(updated)*/
struct Node {
    int data;
    Node* next;
};

struct List {
    Node* head;
    int size;
};

void CreateList(List& list) {
    list.head = nullptr;
    list.size = 0;
}
void PushBack(List& list, int val) {
    Node* newNode = new Node;
    newNode->data = val;
    newNode->next = nullptr;

    if (list.head == nullptr) {
        list.head = newNode;
    }
    else {
        Node* current = list.head;
        while (current->next != nullptr) {
            current = current->next;
        }
        current->next = newNode;
    }

    list.size++;

}

int At(List& list, int pos) {
    if (pos >= list.size || pos < 0) {
        throw std::out_of_range("Position is out of range.");
    }
    Node* current = list.head;
    for (int i = 0; i < pos; ++i) {
        current = current->next;
    }
    return current->data;
}



void DeleteList(List& list) {
    Node* current = list.head;
    while (current->next != nullptr) {
        Node* tmp = current;
        current = current->next;
        delete tmp;
    }
    list.head = nullptr;
}

int main() {
    int n[]{ 5, 3, 2, -1, 4, 2, 7, 9, 5, 3 }, result = 0.0;
    List list;
    CreateList(list);
    for (int i = 0; i < sizeof(n) / sizeof(int); ++i) {
        PushBack(list, n[i]);
    }
    try {
        for (int i = 0; i < list.size; ++i) {
            result = At(list, i);
            assert(result == n[i]);
        }
    }
    catch (std::out_of_range& e) {
        std::cout << "Position is out of range." << std::endl;
    }
    DeleteList(list);
    _CrtDumpMemoryLeaks();
}
