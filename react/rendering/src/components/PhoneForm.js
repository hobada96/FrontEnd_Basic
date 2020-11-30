import React, { Component } from 'react';

class PhoneForm extends Component {
    state = {
        name: ''
    }
    handleCange = (e) => {
        this.setState({
            name: e.target.value
        })
    }
    render() {
        return (
            <form>
                <input
                    placeholder="이름"
                    value={this.state.name}
                    onChange={this.handleCange}
                />
            <div>{this.state.name}</div>
            </form>
        );
    }
}

export default PhoneForm;