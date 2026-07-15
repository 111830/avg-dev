myFunction(2, 4);

function myFunction(a, b) {
    console.log(arguments.length);
    console.log("The sum is: " + (a + b));    
}

myFunction(2, 3);

function myFunction2(a, b) {
    return a + b;
}

let result = myFunction2(2, 3);
console.log(result);

/**
 * Function Declaration (Standard Function)
 * * Differences from C/C++:
 * 1. JavaScript is dynamically typed, so we don't declare return types (like void, int, string).
 * 2. Function declarations are "hoisted". This means JS moves them to the top of their scope 
 * before execution, allowing us to call the function even before it is defined in the code.
 */

// -----------------------------------------------------------------------------------------------------------------------------------------------------

// Function Expression
let x = function (a, b) { return a + b; };
result = x(1, 2);
console.log(result);

// ------------------------------------------------------------------------------------------------------------------------------------------------------

// Immediately Invoked Function Expression (IIFE)
(function (a, b) {
    console.log("Executed a function: " + (a + b));
})(3, 4);

console.log(typeof myFunction);

var myFunctionText = myFunction.toString();
console.log(myFunctionText);

// -------------------------------------------------------------------------------------------------------------------------------------------------------

// Arrow Function
const sumFunctionTypeArrow = (a, b) => a + b;
result = sumFunctionTypeArrow(3, 5);
console.log(result);

// ------------------------------------------------------------------------------------------------------------------------------------------------------

// Function with Default Parameters
let sum2 = function(a = 4, b = 5) { // If arguments are missing, a defaults to 4 and b defaults to 5.
    console.log(arguments[0]);
    console.log(arguments[1]);
    console.log(arguments[2]);
    return a + b + arguments[2];
};

result = sum2(3, 6, 7);
console.log(result);

// ----------------------------------------------------------------------------------------------------------------------------------------------------  

// Variadic Function using the 'arguments' object
result = sumTotal(5, 4, 13, 10, 9);
console.log(result);

function sumTotal() {
    let sum = 0;
    for (let i = 0; i < arguments.length; i++) {
        sum += arguments[i];
    }
    return sum;
}

// -------------------------------------------------------------------------------------------------------------------------------------------------------
let y = 10;

function changeValue(a) {
    a = 20;
}

changeValue(y);
console.log(y); // Output: 10

/**
 * Memory Management & Pass-by-Value vs Pass-by-Reference
 * * In JavaScript, primitive types (like numbers) are passed by value. A copy is created on the stack 
 * frame, so modifying it inside the function does not affect the original variable.
 * * JavaScript engines (like V8) DO have a Stack and a Heap, just like C++. Local variables and execution 
 * frames live on the Stack, while Objects live on the Heap. However, JS abstracts memory addresses 
 * and pointers away from the developer for safety, meaning we cannot directly access memory addresses.
 */

const person = {
    name: 'Renis',
    surname: 'Ndregjoni'
};

function changeValueObject(p1) {
    p1.name = 'Lusi';
    p1.surname = 'Hysa';
}

changeValueObject(person);
console.log(person); // Output: { name: 'Lusi', surname: 'Hysa' }

// ----------------------------------------------------------------------------------------------------------------------------------------------------------
// Callback function

let imp = function Output(value) {
    console.log(value);
}

function sum(ou1, ou2, functionCallBack){
    let rez = ou1 + ou2;
    functionCallBack(`Result ${rez}`);
}

sum(3, 4, imp);