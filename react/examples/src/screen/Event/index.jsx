import React, {useState} from 'react';export default () => {    const [isToggle, handleClick] = useState(false);    return (        <div>            <div>                <button onClick={() => handleClick(!isToggle)}>{isToggle ? 'On' : 'OFF'}</button>            </div>        </div>    );};