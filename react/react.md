---

---

## JSX





## 엘리먼트 렌더링

엘리먼트는 react의 가장 작은 단위입니다.



## Compoenet, Props

props : 부모 컴포넌트가 자식 컴포넌트에게 주는 값, 받아온 props는 직접 수정 불가능

state  :  컴포넌트 내부에서 선언하며 내부에서 값을 변경 할 수 있음.



ReactDom.render() // render시작지점



## 함수형 컴포넌트 vs 클래스형 컴포넌트

#### 함수형

const Myname = ({name}) => { return("");}; export default Myname;

#### 클래스형

class Counter extends Compoenet



## LifeCycle API

Component는 상위 component에서 받은 props를 input 하고 react를 구성하는 가장 작은단위인 Element를 output으로 하는 함수이다.

component는 생성 -> 업데이트 -> 제거 단계를 가진다.

#### Mounting(생성)

component가 새롭게 생성되는 시점이다. Component 함수가 실행되고 결과물로 나온 Element들이 가상 DOM에 삽입되고 실제 DOM을 업데이트하기까지의 과정이다.