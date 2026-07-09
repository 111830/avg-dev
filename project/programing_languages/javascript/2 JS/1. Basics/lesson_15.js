Object.prototype.toString 

class Person {
    constructor(name, surname){
        this._name = name;
        this._surname = surname;
    }

    get name() {
        return this._name;
    }

    set name(name) {
        this._name = name;
    }

    get surname() {
        return this._surname;
    }

    set surname(surname) {
        this._surname = surname;
    }

    fullname() {
        return this._name + " " + this._surname;
    }

    toString() {
        return this.fullname();
    }

    static toThanks() {
        console.log("Hello for all the person in the world");
    }

    static toThanks2(person) {
        console.log(person.name);
    }
}

class Employ extends Person {
    constructor(name, surname, department) {
        super(name, surname);
        this._department = department;
    }

    get department() {
        return this._department;
    }

    set department(department) {
        this._department = department;
    }

    fullname() {
        return super.fullname() + ", " + this._department;
    }
}

let person1 = new Person('Renis', 'Ndregjoni');
console.log(person1)
console.log(person1.name);
person1.name = "Renis2"; // set name('Redi');
console.log(person1.name); // get name

let person2 = new Person('Lusi', 'Ndregjoni');
console.log(person2);

let employ1 = new Employ('Bledi', 'Allushi', 'Zuktari');
console.log(employ1);
console.log(employ1.name);
console.log(employ1.surname);
console.log(employ1.fullname());
console.log(employ1.toString());


// person1.toThanks();
Person.toThanks();
Person.toThanks2(person1);
