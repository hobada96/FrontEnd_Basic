import React, {useState} from 'react';
import {Button, FlatList, Text, TextInput} from 'react-native';

const App = () => {
  const [count, setCount] = useState(0);
  const [data, onChangeText] = useState('Hello');
  return (
    <>
      <Text> Count: {count}</Text>
      <Button title={'click'} onPress={() => setCount(count + 1)} />
      <TextInput onChangeText={(str) => onChangeText(str)} value={data} />
      <Text>{data}</Text>
      <FlatList
        data={[
          {key: 'Devin'},
          {key: 'Dan'},
          {key: 'Dominic'},
          {key: 'Jackson'},
          {key: 'James'},
          {key: 'Joel'},
          {key: 'John'},
          {key: 'Jillian'},
          {key: 'Jimmy'},
          {key: 'Julie'},
        ]}
        renderItem={({item}) => <Text>{item.key}</Text>}
      />
    </>
  );
};

export default App;
