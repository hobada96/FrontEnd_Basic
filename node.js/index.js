// const math = require('./math')
// console.log(math.add(1,2)) //3


// const file = fs.readFileSync('test.txt',{
//     encoding:'utf8'
// }) // 동기적
const fs = require('fs')
const callback = (err,file) => {
    console.log(file);
}
const file = fs.readFile('test.txt',{
    encoding:'utf8'
},callback) // 비동기