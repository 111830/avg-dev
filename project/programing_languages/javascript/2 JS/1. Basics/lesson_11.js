let person = {
    name: 'Renis', 
    surname: 'Ndregjoni',
    email: 'ndregjonirenis@gmail.com',
    age: 21,
    fullName: function(){
        return this.name + ' ' + this.surname;
    }
}

console.log(person.name);
console.log(person.surname);
console.log(person.email);
console.log(person.age);
console.log(person.fullName());

console.log(person);

let person2 = new Object();
person2.name = 'Lusi';
person2.surname = 'Hysa';
person2.tel = "+355 68 354 4145";

console.log(person2.tel);

console.log(person.name);
console.log(person['surname']);

for (nameProperty in person) {
    console.log( nameProperty );
    console.log( person[nameProperty] );
}

person.tel = "+355 68 354 4145";
person.tel = "+355 68 123 4567";

console.log(person)

delete person.tel;
console.log( person );

let personArray = Object.values( person );
console.log( personArray );

let personString = JSON.stringify(person);
console.log(personString);