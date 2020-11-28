// example = function(name){
//     var name = name;
//     var age;

// }


// a = new example("Kim");

// console.log(a.name);

function Person(n,a){
    this.name = n;
    this.age = a;
}

Person.prototype.setOlder = function(){
    this.age += 1;
}

Person.prototype.getAge = function(){
    return this.age;
}

var gomu = new Person('고무곰',30)
var iu = new Person('아이유',25)
console.log(iu)