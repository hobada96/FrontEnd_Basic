Node.js가 로컬, 글로벌 모듈을 탐색하는 순서

1. 코어 모듈인 경우 코어 모듈을 리턴한다.
2. 만약 ./ 또는 ../로 시작할 경우 
   => a. LOAD_AS_FILE(Y + X)를 시도한다 
   => b. LOAD_AS_DIRECTORY(Y + X)를 시도한다.
3. 없으면 index를. ( native에서는 native 먼저)

별명 붙이기.