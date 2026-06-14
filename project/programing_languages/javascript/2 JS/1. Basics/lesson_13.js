function Person(name, surname, email){
    this.name = name;
    this.surname = surname;
    this.email = email;
    this.completeName = function(){
        return this.name + ' ' + this.surname;
    }
}

Person.prototype.tel = '+355 354 4145';

let father = new Person('Renis', 'Ndregjoni', 'ndregjonirenis@gamil.com');

console.log(father);

// father.tel = '+355 68 354 4145';
// console.log(father.tel);
console.log(father);
console.log(father.completeName);
console.log(father.completeName());

let mother = new Person('Lusi', 'Nregjoni', 'lusihysa@gmail.com');
console.log(mother);
console.log(mother.completeName());

father.name = 'renis2';

console.log(father);
console.log(mother);

var myObject = new Object();
let myObject2 = {};

let myChain1 = new String('Hello');
let myChain2 = 'Hello';


let myNumber = new Number(1);
let myNumber2 = 1;

let myBoolean = new Boolean(false);
let myBoolean2 = false;

let myArray = new Array();
let myArray2 = [];

let myFunction = new Function();
let myFunction2 = function(){};