#include <cstring>
#include <assert.h>

class Stack {
private:
    int top;
    char data[100];
public:
    Stack() {
        top = -1;
    }
public:
    bool Empty() {
        if (top == -1)
            return true;
        else
            return false;
    }
    void Push(char ch) {
        data[++top] = ch;
        
    }

    char Top() {
        return data[top];
    }

    void Pop() {
        if (top == -1) return;
        top--;
    }
};
int main() {
    char data[] = "Hello, World";

    Stack stack;

    // Following test case checks
    // - Empty member function
    assert(stack.Empty() == true);

    // Following code populates stack with data
    int len = strlen(data);
    for (int i = 0; i < len; ++i) {
        stack.Push(data[i]);
    }

    // Following test case checks
    // - Empty member function
    assert(stack.Empty() == false);

    // Following test case checks
    // - Indirectly action of Push member function
    // - Directly action of Pop and Top member functions
    char stackedData[] = "dlroW ,olleH";
    for (int i = 0; i < len; ++i) {
        assert(stack.Top() == stackedData[i]);
        stack.Pop();
    }
}
