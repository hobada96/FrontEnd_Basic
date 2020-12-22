1장

Primitive Type - number,String,Boolean,null,undefined (값을 그대로 할당)

Reference Type - Object - Array,Function,RegExp (주소값 참조)

property : value로 묶임

네스티드 : 참조형 속 참조형



2장

호이스팅

함수선언문, 함수 표현식(권장)

할당의 여부에 따라서 변수만 호이스팅 되거나 함수까지 호이스팅이 된다.

cascading 원칙에 의해서 나중에 쓰인 함수가 이전에 쓰인 함수위에 덮여씌여진다.

es6 => function을 쓰지 않음



스코프는 정의될 때 결정

실행 컨텍스트는 실행될 때 생성된다.

실행 컨택스트에는 호이스팅, this, binding등의 정보가 담긴다.



CALL  BACK 함수

- 제어권을 넘겨준다    
- 다른 함수 A의 매개변수로 콜백함수 B를 전달하면 A가 B의 제어권을 갖게된다.



This

전역공간에서  : window/global

함수 내부에서  : window / global

메소드 호출시 : 메소드 호출 주체

callback 에서 : 기본적으로는 함수 내부에서와 동일

생성자 함수에서 : 인스턴스



call   즉시호출

apply  즉시호출

bind 새로운 함수생성





## Prototype

Cunstructor        prototype

new

instance                (__proto__)



prototype 



Prototype link 와 Prototype Object



#### 