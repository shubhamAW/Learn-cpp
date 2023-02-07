#include <cassert>
#include <stdexcept>

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

void AppendList(List& firstList, List& secondList) {
    //1. traverse end to firstLists
    Node* current = firstList.head;
    while (current->next != nullptr) {
        current = current->next;
    }
    current->next = secondList.head;
    firstList.size += secondList.size;
    secondList.size = 0;
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
    delete current;
    list.head = nullptr;
}

int main() {
    int a[]{ 5, 3, 2, -1, 4, 2, 7, 9, 5, 3 };
    List firstList;
    CreateList(firstList);
    for (int i = 0; i < sizeof(a) / sizeof(int); ++i) {
        PushBack(firstList, a[i]);
    }
    int b[]{ 1, 5, 2, 6, 1, 9, 3, 4, 2, 2, 9 };
    List secondList;
    CreateList(secondList);
    for (int i = 0; i < sizeof(b) / sizeof(int); ++i) {
        PushBack(secondList, b[i]);
    }
    AppendList(firstList, secondList);
    assert(firstList.size == 21);
    assert(secondList.size == 0);
    int c[]{ 5, 3, 2, -1, 4, 2, 7, 9, 5, 3, 1, 5, 2,
          6, 1, 9, 3, 4, 2, 2, 9 };
    for (int i = 0; i < sizeof(c) / sizeof(int); ++i) {
        assert(At(firstList, i) == c[i]);
    }
    DeleteList(firstList);
    _CrtDumpMemoryLeaks();
}
