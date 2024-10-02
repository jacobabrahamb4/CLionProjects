#include <iostream>

using namespace std;

struct Rectangle {
    int length;
    int width;
};

Rectangle *function(const struct Rectangle *r) {
    cout << r->length << " " << r->width << endl;
    return new Rectangle{r->length, r->width};
}

int main() {
    struct Rectangle r = {10, 10};
    Rectangle *rect = function(&r);

    return 0;
}
