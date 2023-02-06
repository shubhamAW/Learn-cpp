#include <cstring>
#include <assert.h>

#define QUEUE_SIZE 10

/* 
* - Runs Perfectly fine..
*/

class CircularQueue {
private:
    int m_data[QUEUE_SIZE];
    int m_head, m_tail;
    bool m_full;
public:
    CircularQueue() {
        m_head = 0;
        m_tail = 0;
        m_full = false;
    }

    void Push(int value) {
        m_data[m_tail] = value;
        m_tail = (m_tail + 1) % QUEUE_SIZE;
        m_full = m_head == m_tail;
    }

    void Pop() {
        m_head = (m_head + 1) % QUEUE_SIZE;
        m_full = false;
    }

    int Peek() {
        return m_data[m_head];
    }

    bool Empty() {
        return !m_full && m_head == m_tail;
    }

    bool Full() {
        return m_full;
    }
};


int main() {
    int data[] = { 3, 9, 3, 2, 4, 8, 7, 0, 1, 8 };
    CircularQueue queue;

    // Following test case checks
    // - Behaviour of Empty and Full member functions
    //   when the queue is empty.
    assert(queue.Empty() == true);
    assert(queue.Full() == false);

    // Following code populates circular queue with data
    int len = sizeof(data) / sizeof(int);
    for (int i = 0; i < len; ++i) {
        queue.Push(data[i]);
    }

    // Following test case checks
    // - Behaviour of Empty and Full member functions
    //   when the queue contains data.
    assert(queue.Empty() == false);
    assert(queue.Full() == true);

    // Following test case checks
    // - Indirectly action of Push member function
    // - Directly action of Pop and Peek member functions
    for (int i = 0; i < len; ++i) {
        assert(queue.Peek() == data[i]);
        queue.Pop();
    }

    // Following test case checks
    // - Behaviour of Empty and Full member functions
    //   after the queue is made empty.
    assert(queue.Empty() == true);
    assert(queue.Full() == false);
}