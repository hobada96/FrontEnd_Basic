import {useDispatch,useSelector} from 'react-redux'
import {showFlag,hideFlag} from './redux/action'

function App() {
  const flag = useSelector(state => state.flag);
  const dispatch = useDispatch();
  return (
    <div>
      {
        flag ? (
            <div>
              <h1>SHOW</h1>
              <button onClick={()=>dispatch(hideFlag())}>HIDE</button>
            </div>
        ):(
            <div>
              <h1>HIDE</h1>
              <button onClick={()=>dispatch(showFlag())}>SHOW</button>
            </div>
        )
      }
    </div>
  );
}

export default App;
