void effect_7() {
  for (int a = 105, b = 0; b <= 105, a >= 0; b++, a--) {
    for (int i = 0; i < NUMPIXELS; i++) {
      pixels.setPixelColor(i, b, 0, a);
      pixels.show();
      if (i % 2) {
        pixels.setPixelColor(i, a, 0, b);
        pixels.show();
        if (KNOP.isClick()) {
          mode++;
        }
      }
    }
  }
  for (int a = 0, b = 105; b >= 0, a <= 105; b--, a++) {
    for (int i = 0; i < NUMPIXELS; i++) {
      pixels.setPixelColor(i, b, 0, a);
      pixels.show();
      if (i % 2) {
        pixels.setPixelColor(i, a, 0, b);
        pixels.show();
        if (KNOP.isClick()) {
          mode++;
          break;
        }
      }
    }
  }
}
