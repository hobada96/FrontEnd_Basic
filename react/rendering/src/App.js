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
  handleRemove = (data)=>{
    const {info, onRemove} = this.props;
    onRemove(info.id);
  }

  render() {
    return (
      <div>
        <PhoneForm
          onCreate={this.handleCreate}
        />
        <PhoneInfoList data={this.state.information} />
      </div>
    );
  }
}

export default App;