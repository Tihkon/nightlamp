void effect_6() {
  pixels.clear();                                          // очищаем ленту
  int i = -2, j = NUMPIXELS + 1;
  while (i < NUMPIXELS, j > 0) {                            // снизу вверх и сверху вниз ЗАЖИГАЮТСЯ светодиоды через 2 (т.е 0,2,4.. и 15,13,11..)
    if (millis() - timing_6 >= time6) {
      i += 2;
      j -= 2;
      pixels.setPixelColor(i, pixels.Color(10, 15, 220));  // снизу вверх зажигаются синие
      pixels.setPixelColor(j, pixels.Color(27, 240, 10));  // сверху вниз зажигаются зеленые
      pixels.show();                                       // функция отрисовки нового состояния светодиодов
      timing_6 = millis();                                 // задержка между отрисовкой
      if (KNOP.isClick()) {                                // если кнопку нажали снова
        mode++;                                            // прибавляем единицу к переменной режима
      }
    }
  }
  int a = -2, b = NUMPIXELS + 1;
  while (a < NUMPIXELS, b > 0) {                       // снизу вверх и сверху вниз ГАСЯТСЯ светодиоды через 2
    if (millis() - timing_6 >= time6) {
      a += 2;
      b -= 2;
      pixels.setPixelColor(a, pixels.Color(0, 0, 0));  // сверху вниз гасятся зеленые
      pixels.setPixelColor(b, pixels.Color(0, 0, 0));  // снизу вверх гасятся синие
      pixels.show();                                   // функция отрисовки нового состояния светодиодов
      timing_6 = millis();                             // задержка (чем больше, тем медленнее эффект)
      if (KNOP.isClick()) {                            // если кнопку нажали снова
        mode++;                                      
        break;                                         // покидаем цикл
      }
    }
  }
}