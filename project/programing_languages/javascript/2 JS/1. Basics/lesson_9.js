// let car = new Array("BMW", "Mercedes Benz", "Volvo");
const car = ['BMW', 'Mercedes  Benz', 'Volvo'];
console.log(car); 

console.log(car[0]);
console.log(car[2]);

for ( let i = 0; i < car.length; i++) {
    console.log(i + ' : ' + car[i]);
}

car.push('Audi');
console.log(car);

console.log(car.length);
car[car.length] = 'Cadillac';
console.log(car);

car[6] = 'Porsche';
console.log(car);


console.log(typeof car); 

let is_Array = Array.isArray(car)
console.log( is_Array );