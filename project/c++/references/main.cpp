import std;
using namespace std;

struct Pair {
    int first;
    int second;
};

class MyClass {
public:
    MyClass(int& ref) : m_ref { ref } {}
    
    void printValue() {
        println("6. Class Ref Value: {}", m_ref);
    }
private:
    int& m_ref;
};

void swap(int& first, int& second) {
    int temp { first };
    first = second;
    second = temp;
}


int main() {
    
    // 1. Trap: zRef = xRef
    {
        int x { 3 }, z { 5 };
        int& xRef { x };
        int& zRef { z };

        zRef = xRef; 
        println("1. Trap zRef=xRef: z = {}", z);
    }

    // 2. Trap: xRef = y
    {
        int x { 3 }, y { 4 };
        int& xRef { x };

        xRef = y; 
        println("2. Trap xRef=y: x u be {}", x);
    }

    // 3. Address of Reference (Pointer to Value)
    {
        int x { 3 };
        int& xRef { x };
        int* xPtr { &xRef }; 

        *xPtr = 100;
        println("3. Via Pointer: x u be {}", x);
    }

    // 4. Const Reference to Literal
    {
        const int& ref2 { 5 };
        println("4. Const Ref: {}", ref2);
    }

    // 5. Reference to Pointer (int*&)
    {
        int* intP { nullptr };
        int*& ptrRef { intP };

        ptrRef = new int; 
        *ptrRef = 5;      
        
        println("5. Ref to Pointer Heap Val: {}", *intP);

        delete ptrRef; 
        ptrRef = nullptr;
    }

    // 6. Reference Data Members (Class)
    {
        int data { 999 };
        MyClass object(data); 
        object.printValue();
    }

    // 7. Structured Bindings with Ref
    {
        Pair myPair { 10, 20 };
        auto& [a, b] = myPair; 
        
        a = 50; 
        println("7. Structured Binding: First u be {}", myPair.first);
    }

    // 8. Reference Parameters (Swap & Pointers conversion)
    {
        int val1 { 10 }, val2 { 20 };
        int *p1 { &val1 }, *p2 { &val2 };

        swap(*p1, *p2); 
        println("8. Swap pointers: val1={}, val2={}", val1, val2);
    }

    return 0;
}
