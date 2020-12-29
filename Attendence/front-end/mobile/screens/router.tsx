import * as React from 'react'; // import react를 해주지 않으면 에러가 생김.
import {HomeScreen, CalendarScreen, LoginScreen, TestScreen} from './index';
import {NavigationContainer} from '@react-navigation/native';
import {createBottomTabNavigator} from '@react-navigation/bottom-tabs';
import {createStackNavigator} from '@react-navigation/stack';

const Tab = createBottomTabNavigator();
const Stack = createStackNavigator();

const screen = () => {
  return (
    <>
      <Tab.Navigator>
        <Tab.Screen name="QR코드" component={HomeScreen} />
        <Tab.Screen name="캘린더" component={CalendarScreen} />
        <Tab.Screen name="Test" component={TestScreen} />
      </Tab.Navigator>
    </>
  );
};
export default () => {
  return (
    <>
      <NavigationContainer>
        <Stack.Navigator initialRouteName={'LoginScreen'}>
          <Stack.Screen name={'LoginScreen'} component={LoginScreen} />
          <Stack.Screen name={'Home'} component={screen} />
        </Stack.Navigator>
      </NavigationContainer>
    </>
  );
};
