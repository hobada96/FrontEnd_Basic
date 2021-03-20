import {useDispatch, useSelector} from 'react-redux'
import {getText} from "./redux/action";

function App() {
    const state = useSelector(state => state);
    const dispatch = useDispatch();
    const {text} = state;
    console.log(state);
    return (
        <div className="App">
            <h1>{text}</h1>
            <input onChange={(e) => dispatch(getText(e.target.value))} />
        </div>
    );
}

export default App;
