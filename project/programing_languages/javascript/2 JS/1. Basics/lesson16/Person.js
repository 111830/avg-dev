export class Person {
    static countPerson = 0;

    constructor(name, surname, age) {
        this._idPerson = ++Person.countPerson;
        this._name = name;
        this._surname = surname;
        this._age = age;
    }

    get idPerson() {
        return this._idPerson;
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

    get age() {
        return this._age;
    }

    set age(age) {
        this._age = age;
    }

    toString() {
        // return this._idPerson + ' ' + this._name + ' ' + this._surname + ' ' + this._age;
        return `
            ${this._idPerson} 
            ${this._name} 
            ${this._surname}
            ${this._age}
        `;
    }
}


