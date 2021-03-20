import React, {useState} from 'react'
import {useDispatch, useSelector} from "react-redux";
import {setTodo, delTodo} from "./redux/action";


function App() {
    const todos = useSelector(state => state);
    const dispatch = useDispatch();
    const [text, setText] = useState('');
    const [id, setId] = useState(3);

    const todo = {
        id: id,
        text: text
    }

    const changeHandler = (e) => {
        setText(e.target.value);
    }

    return (
        <div>
            <h1 children={[1,2]}/>
            {/* 리엑트 플레그 먼트*/}
            <input
                placeholder={'입력하시오'}
                onChange={changeHandler}
            />
            <button
                onClick={() => {
                    dispatch(setTodo(todo));
                    setId(id + 1)
                }}
                children={'저장'}
            />
            {todos.map(todo =>
                <div key={todo.id}>
                    <h1>{todo.text}</h1>
                    <button onClick={() => {
                        dispatch(delTodo(todo))
                    }}>삭제
                    </button>
                </div>
            )}
        </div>
    );
}

export default App;
