class Foo {
public:
    bool calledFirst = false;
    bool calledSecond = false;
    Foo() {
        
    }

    void first(function<void()> printFirst) {
        
        // printFirst() outputs "first". Do not change or remove this line.
        printFirst();
        calledFirst = true;
    }

    void second(function<void()> printSecond) {
        while(true) {
            if (calledFirst) {
                break;
            }
        }
        // printSecond() outputs "second". Do not change or remove this line.
        printSecond();
        calledSecond = true;
    }

    void third(function<void()> printThird) {
        while(true) {
            if (calledSecond) {
                break;
            }
        }
        // printThird() outputs "third". Do not change or remove this line.
        printThird();
    }
};
