import React, {useState} from 'react';
import {Button, Text} from 'react-native';

const App = () => {
  const [count, setCount] = useState(0);
  return (
    <>
      <Text> Count: {count}</Text>
      <Button title={'click'} onPress={() => setCount(count + 1)} />
    </>
  );
};

export default App;
