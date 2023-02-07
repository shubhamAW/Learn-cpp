//Following driver program gets the smallest value stored in the linked list.Your job is to implement missing functionsand structures.
#include<iostream>
#include <assert.h>
using namespace std;

/*Work fine*/

struct Node {
    int data;
    Node* next;
};

struct List {
    Node* head;
};

void CreateList(List& list) {
    list.head = nullptr;
}

void PushBack(List& list, int val) {
    Node* newNode= new Node;
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
}

int Min(List& list) {
    int min = 100007;
    Node* current = list.head;
    while (current->next != nullptr) {
        if (current->data < min)
            min = current->data;

        current = current->next;
    }
    return min;
}

void DeleteList(List& list) {
    Node* current = list.head;
    while (current->next != nullptr) {
        Node* temp = current;
        current = current->next;
        delete temp;
    }
    list.head = nullptr;
}

int main() {
    int n[]{ 5, 3, 2, -1, 4, 2, 7, 9, 5, 3 };
    List list;
    CreateList(list);
    for (int i = 0; i < sizeof(n) / sizeof(int); ++i) {
        PushBack(list, n[i]);
    }
    int result = Min(list);
    assert(result == -1);
    DeleteList(list);
    _CrtDumpMemoryLeaks();
}
