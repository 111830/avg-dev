let person1 = {
    name: 'Renis',
    surname: 'Ndregjoni',
    completeName: function(title, tel){
        return title + ': ' + this.name + ' ' + this.surname + ', ' + tel;
    }
}

let person2 = {
    name: 'Lusi',
    surname: 'Ndregjoni'
}

console.log(person1.completeName('Lic. ', '+355 354 4145'));

console.log(person1.completeName.call(person2, 'Ing', '+355 354 4145'));

// ----------------------------------------------------------------------------------------------------------------------------

let person3 = {
    name: 'Renis',
    surname: 'Ndregjoni',
    completeName: function(title, tel){
        return title + ': ' + this.name + ' ' + this.surname + ', ' + tel;
    }
}

let person4 = {
    name: 'Lusi',
    surname: 'Ndregjoni'
}

console.log(person3.completeName('Lic. ', '+355 354 4145'));

let array = ['Ing', '+355 354 4144'];
console.log(person3.completeName.apply(person4, array));