/**
 * Calculator. The method of doing this without if/else is not just to avoid 
 * branching, but to experiment with the machine and understand the tricky parts. 
 * This will help me a lot when I dive deeper into systems programming and assembly 
 * to understand what is stored in a register and what part is executed sequentially.
 */
import std;

enum operation_type { ADD, SUB, MUL, DIV };

typedef struct {
    int first;
    int second;
    enum operation_type type;
} calculation_data;

void add_nums(calculation_data data) { 
    std::println("The sum of these two digits is: {}", data.first + data.second); 
}

void sub_nums(calculation_data data) { 
    std::println("The difference of these two digits is: {}", data.first - data.second); 
}

void mul_nums(calculation_data data) { 
    std::println("The product of these two digits is: {}", data.first * data.second); 
}

void div_nums(calculation_data data) {
    if (data.second == 0) {
        std::println("Error: Division by zero!");
        return;
    }
    std::println("The division of these two digits is: {}", data.first / data.second);
}

void (*operations[])(calculation_data) = {add_nums, sub_nums, mul_nums, div_nums};

/**
 * This is the tricky part. 'operations[]' is just an array, and we know that a 
 * function is ultimately just a piece of memory (an address). When we execute 
 * the code, it's as if the array holds addresses like {0x400562, 0x4005A8, 0x4005EE}, 
 * where each address represents a function ready for execution.
 */

enum operation_type get_enum_from_symbol(char sym) {
    if (sym == '+') return ADD;
    if (sym == '-') return SUB;
    if (sym == '*') return MUL;
    return DIV;
}

int main() {
    int a, b;
    char sym;

    while (true) {
        std::print("Write the first digit, the symbol (+, -, *, /) and the second digit (e.g., 5 + 3): ");
        
        // Përdorim std::cin në vend të scanf për të lexuar inputin
        if (!(std::cin >> a >> sym >> b)) {
            break; // Nëse inputi dështon (p.sh. shkruan shkronja në vend të numrave), mbyllet
        }

        calculation_data curr_calc;
        curr_calc.first = a;
        curr_calc.second = b;
        curr_calc.type = get_enum_from_symbol(sym);

        void (*handle_calc)(calculation_data) = operations[curr_calc.type];
        
        /**
         * And here is the last thing: 'handle_calc' is not a normal variable. 
         * The '*' in front of it tells us it is just a memory address, just like 
         * the '*' in the operations array. 
         * Calling 'handle_calc(curr_calc)' is essentially like saying '0x400562(curr_calc)'. 
         * Because technically, a function is nothing more than a memory address, 
         * and 'curr_calc' will just be passed as a copied argument to that location in memory.
         */

        handle_calc(curr_calc);
        
        std::println("-----------------------");
    }

    return 0;
}

/**
 * And to run this in a modern way is this 
 * clang++-18 -std=c++23 -stdlib=libc++ -fmodule-file=std=../std_build/std.pcm ../std_build/std.pcm main.cpp
 */