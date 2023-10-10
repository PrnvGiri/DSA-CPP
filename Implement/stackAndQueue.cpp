#include <iostream>
#define SIZE 5
using namespace std;

class Stack {
public:
    int stack_ar[SIZE], tos = -1;

    void Push(int v) {
        if (tos >= SIZE - 1) {
            cout << "\n STACK OVERFLOW";
        } else {
            tos++;
            stack_ar[tos] = v;
        }
    }

    void Pop() {
        if (tos == -1) {
            cout << "STACK UNDERFLOW";
        } else {
            cout << "\n" << stack_ar[tos] << "\t Element is deleted" << endl;
            tos--;
        }
    }

    void Peek() {
        if (tos == -1) {
            cout << "Stack is empty" << endl;
        } else {
            cout << "\n" << stack_ar[tos] << "\t Peek Element" << endl;
        }
    }

    void Traverse() {
        for (int i = 0; i <= tos; i++) {
            cout << stack_ar[i] << "\t";
        }
        cout << endl;
    }
};

class Queue {
    int Q_arr[SIZE], f = 0, r = -1;

public:
    void Enqueue(int v) {
        if (r == SIZE - 1) {
            cout << "Queue Overflow" << endl;
        } else {
            r++;
            Q_arr[r] = v;
        }
    }

    void Dequeue() {
        if (f > r) {
            cout << "Queue Underflow" << endl;
        } else {
            cout << "\n\t Element " << Q_arr[f] << " is deleted" << endl;
            f++;
        }
    }

    void Traverse() {
        for (int i = f; i <= r; i++) {
            cout << Q_arr[i] << "\t";
        }
        cout << endl;
    }
};

int main() {
    int choice;
    Stack stack;
    Queue queue;

    while (true) {
        cout << "Choose an option:" << endl;
        cout << "1. Stack" << endl;
        cout << "2. Queue" << endl;
        cout << "3. Quit" << endl;
        cin >> choice;

        switch (choice) {
            case 1:
                int stackChoice;
                cout << "Stack Operations:" << endl;
                cout << "1. Push" << endl;
                cout << "2. Pop" << endl;
                cout << "3. Peek" << endl;
                cout << "4. Traverse" << endl;
                cout << "5. Back to Main Menu" << endl;
                cin >> stackChoice;

                switch (stackChoice) {
                    case 1:
                        int value;
                        cout << "Enter a value to push onto the stack: ";
                        cin >> value;
                        stack.Push(value);
                        break;
                    case 2:
                        stack.Pop();
                        break;
                    case 3:
                        stack.Peek();
                        break;
                    case 4:
                        stack.Traverse();
                        break;
                    case 5:
                        break;
                    default:
                        cout << "Invalid choice for Stack." << endl;
                }
                break;
            case 2:
                int queueChoice;
                cout << "Queue Operations:" << endl;
                cout << "1. Enqueue" << endl;
                cout << "2. Dequeue" << endl;
                cout << "3. Traverse" << endl;
                cout << "4. Back to Main Menu" << endl;
                cin >> queueChoice;

                switch (queueChoice) {
                    case 1:
                        int value;
                        cout << "Enter a value to enqueue into the queue: ";
                        cin >> value;
                        queue.Enqueue(value);
                        break;
                    case 2:
                        queue.Dequeue();
                        break;
                    case 3:
                        queue.Traverse();
                        break;
                    case 4:
                        break;
                    default:
                        cout << "Invalid choice for Queue." << endl;
                }
                break;
            case 3:
                cout << "Exiting program." << endl;
                return 0;
            default:
                cout << "Invalid choice." << endl;
        }
    }
    return 0;
}
