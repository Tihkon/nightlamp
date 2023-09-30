void effect_5() {
  long firstPixelHue = 0;
  while (firstPixelHue < 65536) {
    if (millis() - timing_5 >= time5) {
      firstPixelHue += 256;
      pixels.rainbow(firstPixelHue);
      pixels.show();
      timing_5 = millis();
      if (KNOP.isClick()) {
        mode++;
        break;
      }
    }
  }
}