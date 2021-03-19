import {useState} from 'react';
import {useSelector, useDispatch} from 'react-redux'
import {getSize} from "./redux/action";

function App() {
    const [text,setText] = useState('');
    const state = useSelector(state => state);
    const dispatch = useDispatch();
    const size = {
        width: window.outerWidth,
        height: window.outerHeight
    }
    const {width, height} = size
    return (
        <div className="App">
            <input onChange={(e)=>{setText(e.target.value)}}/>
            <h1>{width}</h1>
            <br />
            <h1>{height}</h1>
            <button onClick={() => dispatch(getSize(size))}>사이즈 확인</button>
        </div>
    );
}

export default App;
