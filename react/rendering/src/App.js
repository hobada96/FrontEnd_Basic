import React, { Component } from 'react';
import PhoneForm from './components/PhoneForm';
import PhoneInfoList from './PhoneInfoList';

class App extends Component {
  id = 2
  state = {
    information: [
      {
        id: 0,
        name: '김민준',
        phone: '010-0000-0000'
      },
      {
        id: 1,
        name: '홍길동',
        phone: '010-0000-0001'
      },
      {
        id: 2,
        name: '김태호',
        phone: '010-0000-0002'
      }
    ]
  }
  handleCreate = (data) => {
    const { information } = this.state;
    this.setState({
      information: information.concat({ id: this.id++, ...data })
    })
  }
  handleRemove = (id)=>{
    const {information} = this.state;
    this.setState({
      information: information.filter(info => info.id !== id) // filter : 주어진 함수의 테스트를 통과하는 요소들을 모아 새로운 배열로.
    })
  }

  render() {
    return (
      <div>
        <PhoneForm
          onCreate={this.handleCreate}
        />
        <PhoneInfoList 
          data={this.state.information}
          onRemove = {this.handleRemove} />
      </div>
    );
  }
}

export default App;