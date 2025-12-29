import <print>;

namespace mycode {
    void foo() {
        std::println("foo() called in the mycode namespace");
    }
}

using namespace mycode;

int main(){

    foo(); //Implies mycode::foo();

    return 0;
}
