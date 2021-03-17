import {useSelector,useDispatch} from "react-redux";
import {getSize,compareSize} from './redux/action'

function App() {
  const state = useSelector(state => state);
  const dispatch = useDispatch();
  const size = {
      width : window.outerWidth,
      height : window.outerHeight
  }
  return (
    <div className="App">
        <h1>{state.width}</h1>
        <br/>
        <h1>{state.height}</h1>
        <button onClick={()=>dispatch(getSize(size))}> 크기 확인</button>
        <button onClick={()=>dispatch(compareSize(size))}>이전값과의 비교</button>
    </div>
  );
}

export default App;
