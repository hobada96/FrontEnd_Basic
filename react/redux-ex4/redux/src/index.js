import React from 'react';
import ReactDOM from 'react-dom';
import App from './App';

import {createStore} from 'redux'
import {reducer} from "./redux/reducer";
import {Provider} from "react-redux";
import {initState} from "./redux/reducer";

export const store = createStore(reducer,initState);

ReactDOM.render(
  <React.StrictMode>
      <Provider store={store}>
        <App />
      </Provider>
  </React.StrictMode>,
  document.getElementById('root')
);
