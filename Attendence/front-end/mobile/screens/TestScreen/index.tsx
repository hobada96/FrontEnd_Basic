import React from 'react';
import Geolocation, {
  GeolocationResponse,
} from '@react-native-community/geolocation';

export default () => {
  const Coords = (info: GeolocationResponse) => {
    console.log(info.coords.latitude);
  };
  Geolocation.getCurrentPosition((info) => Coords(info));
  return <></>;
};
