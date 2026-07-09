class Products {
    static countProducts = 0;

    constructor(name, price) {
        this._idProducts = ++Products.countProducts;
        this._name = name;
        this._price = price;
    }

    get idProducts() {
        return this._idProducts;
    }

    get name() {
        return this._name;
    }

    set name(name) {
        this._name = name;
    }

    get price() {
        return this._price;
    }

    set price( price ) {
        this._price = price;
    }

    toString() {
        return `
        Id Product is : ${this._idProducts},
        The name of the product is: ${this._name},
        and the price of that is ${this._price}
        `
    }
}

class Order {
    static countOrder = 0;

    static get MAX_PRODUCTS() {
        return 5;
    }

    constructor() {
        this._idOrder = ++Order.countOrder;
        this._products = [];
        this._countProductAddition = 0;
    }

    get idOrder() {
        return this._idOrder;
    }

    additionProducts(product) {
        if( this._products.length < Order.MAX_PRODUCTS) {
            this._products.push(product);
            // this._products[this._countProductAddition++] = product;
        } else {
            console.log('don\'t have any stack')
        }
    }

    calculateTotal() {
        let totalValue = 0;
        for(let product of this._products){
            totalValue += products.price;
        }

        return totalValue;
    }

    showOrder() {
        let productOrder = '';
        for( let product of this._products){
            productOrder += product.toString() + ' ';
        }
        console.log(`Order: ${this._idOrder}  Total: ${this.calculateTotal()}  Product: ${productOrder}`);
    }

}

let product = new Products('Chips', 200);
console.log(product.toString());