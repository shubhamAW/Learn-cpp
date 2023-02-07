#include<iostream>
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
}

void PrintList(List& list) {
    Node* current = list.head;
    while (current->next != nullptr) {
        cout << current->data << " ";
        current = current->next;
    }
    cout << endl;
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
    CreateList(list); // CreateList initializes the list object
    for (int i = 0; i < sizeof(n) / sizeof(int); ++i) {
        PushBack(list, n[i]); // PushBack places item at the end of the list
    }
    PrintList(list); // prints items in the list
    DeleteList(list); // DeleteList releases all the node stored in list
    _CrtDumpMemoryLeaks(); // this function shouldn’t report memory leakage
}
