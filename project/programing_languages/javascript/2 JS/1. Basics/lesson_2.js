var name = 'Rensi';
var surname = 'Ndregjoni';

var completeName = name + ' ' + surname;
console.log(completeName);

var completeName2 = 'Lusi' + ' ' + 'Ndregjoni';
console.log(completeName2);

var x = name + 5;
console.log(x);

var y = name + 5 + 6;
console.log(y);

y = name + (2 + 4);
console.log(y);

/**
 * In fact the compiler executes code from left to right, and this is the reason it's not the same as
 * name + 5 + 6; because the first is name who is xxx and after that comes 5 and it becomes xxx5 which is a string, and after that
 * is 6 who becomes xxx56. In the other case is 2 + 4 + name where first comes 2 which happens to be a number and after that is
 * 4 which is again a number and it gets the sum of those two numbers and joins to a string in the end.
 */
y = 2 + 4 + name;
console.log(y);

let name_2;
name_2 = "Redi";
console.log( name_2 );

const surname_2 = "Xhaferi";
// surname_2 = "Ndregjoi"; // You can't modify a const value, it will throw an error: Assignment to constant variable.