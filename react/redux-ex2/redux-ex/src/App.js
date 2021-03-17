import {useSelector,useDispatch} from "react-redux";
import {hideFlag,showFlag} from "./redux/action";

function App() {
  const flag = useSelector(state => state.flag);
  const dispatch = useDispatch();
  return (
    <div className="App">
      {
        flag ? (
            <div>
              <h1>Show</h1>
              <button onClick={()=>dispatch(hideFlag())}>HIDE</button>
            </div>
      ):(
          <div>
            <h1>hide</h1>
            <button onClick={()=>dispatch(showFlag())}>Show</button>
          </div>
      )
      }
    </div>
  );
}

export default App;
