#include <iostream>

template <class T>
class Arithmetic {
    private:
        T a;
        T b;
    public:
        Arithmetic(T a, T b);
        T add(T a, T b);
        T subtract(T a, T b);
};

template <class T>
Arithmetic<T>::Arithmetic(T a, T b) {
    this->a = a;
    this->b = b;
}

template <class T>
T Arithmetic<T>::add(T a, T b) {
    return a + b;
}

template <class T>
T Arithmetic<T>::subtract(T a, T b) {
    return a - b;
}

int main() {
    Arithmetic<int> arithmetic(1, 2);
    std::cout << arithmetic.add(3, 4);
    std::cout << arithmetic.subtract(3, 4);

    return 0;
}
