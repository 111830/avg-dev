import { Person } from "./Person.js";

export class Employee extends Person{
    static countEmployee = 0;
    
    constructor(name , surname, age, salary) {
        super(name, surname, age)
        this._idEmployee = ++Employee.countEmployee;
        this._salary = salary;
    }

    get idEmployee() {
        return this._idEmployee;
    }

    get salary() {
        return this._salary;
    }

    set salary( salary) {
        this._salary = salary;
    }

    toString() {
        return `
        ${super.toString}
        ${this._idEmployee}
        ${this._salary}
        `;
    }
}