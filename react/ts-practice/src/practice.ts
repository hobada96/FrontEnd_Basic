// let count = 0;
// count += 1;
// // count = "갑자기 분위기 문자열"; //이러면 에러가 납니다.

// const message: string = 'hello world';
// const done: boolean = true;

// const numbers : number[] = [1,2,3];
// const messages: string[] = ['hello', 'world'];

// // message.push(1);// 숫자 넣으려고 하면 안된다.

// let mightBeUndeFined: string | undefined = undefined; //string 일수도 있고 underfined 일수도 있다.
// let nullableNumber: number | null = null;

// let color: 'red' | 'orange' | 'yellow' = 'red';
// color = 'yellow';
// // color = 'green'; //에러 발생

// function sum(x: number, y:number): number{
//     return x + y;
// }

// sum(1,2);

// function sumArray(numbers: number[]):number{
//     return numbers.reduce((acc,current) => acc + current, 0);
// }
// const total = sumArray([1,2,3,4,5]);

// function returnNothing(): void {
//     console.log("I am just saying hello world");
// }

interface Shape {
    getArea(): number;
}

class Circle implements Shape {
    // 'implements' 키워드를 사용하여 해당 클래스가 Shape interface의 조건을 충족하겠다는것을 명시

    radius: number;

    constructor(radius: number) {
        this.radius = radius;
    }

    //너비를 가져오는 함수를 구현합니다.
    getArea() {
        return this.radius * this.radius * Math.PI;
    }
}
class Rectangle implements Shape {
    width: number;
    height: number;

    constructor(width: number, height: number) {
        this.width = width;
        this.height = height;
    }

    getArea() {
        return this.width * this.height;
    }
}
const shapes: Shape[] = [new Circle(5), new Rectangle(10, 5)];

shapes.forEach(shape => {
    console.log(shape.getArea());
})