#include <iostream>

template<class _T>
class arithmetic {
    private:
        _T firstNum;
        _T secondNum;

    public:
        arithmetic(_T _a, _T _b) : firstNum(_a), secondNum(_b) {
        }

        _T add() {
            return firstNum + secondNum;
        }

        _T add(_T a, _T b);

        _T sub() {
            return firstNum - secondNum;
        }

        _T sub(_T _a, _T b);
};

template <class _T>
_T arithmetic<_T>::add(_T _a, _T _b) {
    return _a + _b;
}

template <class _T>
_T arithmetic<_T>::sub(_T _a, _T _b) {
    return _a - _b;
}


int main() {
    arithmetic<int> arithmetic(2,3);

    std::cout << "Total:" << arithmetic.add();
    std::cout << "Total:" << arithmetic.sub();

    return 0;
}