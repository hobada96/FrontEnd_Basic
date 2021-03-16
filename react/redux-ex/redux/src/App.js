import {useSelector,useDispatch} from 'react-redux'
import {hideFlag,showFlag} from './action'
function App() {
  const flag = useSelector(state => state.flag);
  const dispatch = useDispatch();
  return (
    <div className="App">
      {flag ? (
          <div>
            <h1>SHOW</h1>
            <button onClick={()=>dispatch(hideFlag())}>
              숨김버튼
            </button>
          </div>
      ) : (
          <div>
            <h1>HIDE</h1>
            <button onClick={()=> dispatch(showFlag())}>
              보이기 버튼
            </button>
          </div>
      )}
    </div>
  );
}

export default App;
