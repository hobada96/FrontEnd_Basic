var f = ([a, b] = [1, 2], {x: c} = {x: a + b}) => a + b + c;
f();  // 6

var parameter;
var c = (parameter) => {
    console.log(parameter);
}
c("Hello")