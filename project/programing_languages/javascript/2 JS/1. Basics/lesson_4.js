let a = 3, b = 2, c = "3", d = 3;

let z = a == b;
console.log(z);

z = a != b;
console.log(z);

z = a == c;
console.log(z);

// The difference between == and === is that == compares only the values (ignoring the type), 
// whereas === strictly checks if both the value and the data type of the variables are exactly the same.
z = a === c;
console.log(z);

z = a !== c;
console.log(z);

z = a === d;
console.log(z);

z = a < b;
console.log(z);

z = a <= c;
console.log(z);

z = a > b;
console.log(z);

z = a >= c;
console.log(z);