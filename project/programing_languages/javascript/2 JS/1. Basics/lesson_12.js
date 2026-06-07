function Person(name, surname, email){
}

let person = {
    name: 'Lusi',
    surname: 'Ndregjoni',
    age: 21,
    language: 'en',
    get lang() {
        return this.language.toUpperCase();
    },
    set lang( lang2 ) {
        this.language = lang2.toUpperCase()
    },
    get fullName(){
        return this.name + ' ' + this.surname;
    }
}


console.log(person.lang);

person.lang = 'rn';

console.log(person.lang);
console.log(person.language);