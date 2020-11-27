// const util = require('util')
// const name = 'World'
// const msg = util.format('Hello %s',name)

// console.log(msg) // Hello world

const http = require('http'); // 모듈을 가져옴 (http 모듈) - 노드에서 기본적으로 제공해주는 모듈
const hostname = '127.0.0.1'; 
const port = 3000;

const server = http.createServer((req,res)=>{
    res.statusCode = 200; //res : response(응답객체) req : request(요청객체) 200: 성공을 의미하는 http코드
    res.setHeader('Content-Type', 'text/plain'); // 문자열이기에 text/pain
    res.end('Hello World\n'); //end : 응답을 읽었음으로 끝내겠다.
});

server.listen(port, hostname, () => { //listen => 서버요청 대기상태   **요청: 클라이언트로부터 요청
    console.log('Server running at http://${hostname}:${port}/');
});