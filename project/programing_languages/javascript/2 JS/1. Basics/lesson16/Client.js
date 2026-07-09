import { Person } from "./Person.js";

export class Client extends Person {
    static countClint = 0;

    constructor(name , surname, age, registerData) {
        super(name, surname, age);
        this._idClient = ++Client.countClint;
        this._registerData = registerData;
    }

    get idClient() {
        return this._idClient;
    }

    get registerData() {
        return this._registerData;
    }

    set registerData(registerData) {
        this._registerData = registerData
    }

    toString() {
        return `
        ${super.toString}
        ${this._idClient}
        ${this._registerData}
        `
    }
}