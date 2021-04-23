#include <iostream>

using namespace std;

class Stack {
public:
    Stack(int x) : top(-1) { array = new int[x]; }
    ~Stack() { delete[] array; }
    void Push(int x);
    int Pop();
    int Size() { return top + 1; }
    int Empty() { return top == -1; }
    int Top();
private:
    int* array;
    int top;
};

void Stack::Push(int x) {
    array[++top] = x;
}

int Stack::Pop() {
    if (Empty()) return -1;
    return array[top--];
}

int Stack::Top() {
    if (Empty()) return -1;
    return array[top];
}

int main()
{
    int n;

    cin >> n;

    Stack stack(n);

    for (int i = 0; i < n; i++) {
        string s;

        cin >> s;

        if (s == "push") {
            int x;

            cin >> x;

            stack.Push(x);
        }
        else if (s == "pop") {
            cout << stack.Pop() << endl;
        }
        else if (s == "top") {
            cout << stack.Top() << endl;
        }
        else if (s == "size") {
            cout << stack.Size() << endl;
        }
        else {
            cout << stack.Empty() << endl;
        }
    }

    return 0;
}
