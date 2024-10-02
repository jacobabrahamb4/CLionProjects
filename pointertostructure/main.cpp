#include <iostream>

using namespace std;

struct Rectangle {
    int length;
    int breadth;
};

int main() {
    struct Rectangle rect = {10, 5};
    cout << rect.length << endl;
    cout << rect.breadth << endl;
    struct Rectangle *ptr = &rect;
    cout << ptr->length << endl;
    cout << ptr->breadth << endl;

    Rectangle *ptr2;

    ptr2 = new Rectangle;

    ptr2-> length = 15;
    ptr2->breadth = 7;

    cout << ptr2->length << endl;
    cout << ptr2->breadth << endl;

    return 0;
}
