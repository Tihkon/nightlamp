void effect_4() {
  pixels.clear();                                // очищаем ленту
  int i = -1;
  while (i < NUMPIXELS) {                        // пересчитываем светодиоды ленты от первого до последнего
    if (millis() - timing_4 >= time4) {
      i++;
      pixels.setPixelColor(mas_pix[i], random(0, 256), random(0, 256), random(0, 256));  // светодиоду с указанным в пересчете номером присваиваем такой же номер элемента массива и случайный цвет
      pixels.show();                                                                     // функция отрисовки нового состояния ленты
      timing_4 = millis();
      if (KNOP.isClick()) {                      // если кнопку нажали снова
        mode++;                                  // прибавляем единицу к переменной режима
      }
    }
  }
  i = NUMPIXELS;
  while (i > 0) {                                // пересчитываем светодиоды ленты от последнего до первого
    if (millis() - timing_4 >= time4) {
      i--;
      pixels.setPixelColor(mas_pix[i], 0, 0, 0); // гасим все светодиоды
      pixels.show();                             // функция отрисовки нового состояния ленты
      timing_4 = millis();                       // задержка 
      if (KNOP.isClick()) {                      // если кнопку нажали снова
        mode++;                                  // прибавляем единицу к переменной режима
        break;
      }
    }
  }
}
