#include "D:\stack\stack_\stacklib\Mystack.cpp"
#include "D:\stack\stack_\stacklib\Mystack.h"
#include <iostream>
using namespace std;
//void start() {
//    cout << "Press 1, to create Stack" << endl;
//    cout << "Press 2, to create Queue" << endl;
//}
void Stack() {
    cout << "Press 1, to find out the size of stack" << endl;
    cout << "Press 2, to find out the element in top of stack" << endl;
    cout << "Press 3, to extract the element" << endl;
    cout << "Press 4, to push the element" << endl;
}
//void Queue() {
//    cout << "Press 1, to extract the element" << endl;
//    cout << "Press 2, to push the element in queue" << endl;
//}
int main()
{
    int size;
    cout << "input size of stack" << endl;
    cin >> size;
    TStack<int> stack1(size);
    cin >> stack1;
    cout << stack1 << endl;
    bool flag1 = true;
    while (flag1) {
        Stack();
        int a;
        cin >> a;
        switch (a) {
        case 1:
            cout << "Size of stack - " << stack1.GetSize() << endl;
            break;
        case 2:
            cout << "element in top of stack - " << stack1.TopView() << endl;
            break;
        case 3:
            try { cout << "extracted element in top of stack - " << stack1.GetTop() << endl << stack1; }
            catch (...) {
                cout << "stack is empty" << endl;
            }
            break;
        case 4:
            cout << "Input element to push in stack - ";
            int el;
            cin >> el;
            try { stack1.Push(el); }
            catch (...) {
                cout << "stack is full" << endl;
            }
            cout << stack1;
            break;
        default:
            flag1 = false;
            break;
        }
    }

}