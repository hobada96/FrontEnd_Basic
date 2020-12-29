import React from 'react';
import {Calendar, LocaleConfig} from 'react-native-calendars';

const koMonthName = [
  '1월',
  '2월',
  '3월',
  '4월',
  '5월',
  '6월',
  '7월',
  '8월',
  '9월',
  '10월',
  '12월',
];
const koDayNames = ['월', '화', '수', '목', '금', '토', '일'];
// const attendanceDate = []; 출석한날을 Calendar에 표시, 어떻게 값을 넘기고 받을것인가 고민할 것.
const setCalendarLocales = (locale: string) => {
  LocaleConfig.locales[locale] = {
    monthNames: koMonthName,
    monthNamesShort: koMonthName,
    dayNames: koMonthName,
    dayNamesShort: koDayNames,
  };
};

export default () => {
  const locale = 'ko';
  setCalendarLocales(locale);
  LocaleConfig.defaultLocale = locale;
  return (
    <>
      <Calendar />
    </>
  );
};
