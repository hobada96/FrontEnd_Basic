// var math = math || {};

// (function(){
//     function sum(a,b){
//         return a+b;
//     }
//     math.sum = sum;
// }())
// IIFE방식을 통해서 전역객체 오염을 피한다.


//es2015 방식
export function sum(a,b){
    return a+b;
}