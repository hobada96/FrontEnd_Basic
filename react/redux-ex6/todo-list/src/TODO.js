import {delTodo} from "./redux";import React from "react";export const TODO = ({todo,dispatch}) => {    return (        <>            <h1>{todo.text}</h1>            <button onClick={() => {                dispatch(delTodo(todo))            }}>삭제            </button>        </>    )}