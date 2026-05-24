// String data type
var name = "Renis";
console.log(name);
console.log(typeof name);

// The js is dynamic and you can change the string into a integer without warning
name = 10;
console.log(name);
console.log(typeof name);

// In JS, there are no int or float variables; it has Number, which includes both int and float numbers.
name = 10.5;
console.log(name);
console.log(typeof name);

// Integer data type
var number = 100;
console.log(number);
console.log(typeof number);

// Object data type
var object = {
    name : "Lusiana",
    surname : "Ndregjoni",
    phone: "+355 69 123 4567"
}

console.log(object)
console.log(typeof object);


// Boolean data type (true(1), false(0))
var flag = true;
console.log(flag);
console.log(typeof flag);

// Function data type 
function myFunction(){}
console.log(myFunction);
console.log(typeof myFunction)

// Symbol data type
var symbol = Symbol("My symbol");
console.log(symbol);
console.log(typeof symbol);

// Class data type 
class Person{
    constructor(name, surname){
        this._name = name;
        this._surname = surname;
    }
}
console.log(Person)
console.log(typeof Person);

// Undefined data type 
var x;
console.log(x)
console.log(typeof x);


// NUll data type 
var y = null;
console.log(y);
console.log(typeof y);

// Array data type
var car = ['BMW', 'Audi', 'Volvo'];
console.log(car);
console.log(typeof car);

var z = '';
console.log(z);
console.log(typeof z);