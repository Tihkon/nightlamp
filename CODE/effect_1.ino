void effect_1 () {
  pixels.clear();                                           // очищаем ленту
  int i = -1, j = 8;                                        
  while (i< NUMPIXELS, j >= 0) {  
    if (millis() - timing_1 >= time1) {
      i++;
      j--;
      pixels.setPixelColor(i, 127, 15, 180);                // снизу вверх бежит фиолетовая
      pixels.setPixelColor(j, 27, 150, 180);                // сверху вниз бежит голубая
      pixels.show();                                        // функция отрисовки нового состояния светодиодов
      pixels.clear();                                       // выключаем (очищаем) всю ленту
      timing_1 = millis();                                  // задержка 
      if (KNOP.isClick()) {                                 // если кнопку нажали снова
        mode++;                                             // прибавляем единицу к переменной режима
        break;                                              // покидаем цикл
      } 
    }
  }
}
