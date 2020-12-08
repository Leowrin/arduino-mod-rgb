void random_cycle() {
  int ranR = random(-2, 3);
  int ranG = random(-2, 3);
  int ranB = random(-2, 3);

  for (int i = 0; i < 85; i++) {
    RState = RState + ranR;
    delay(60);
    if (RState <= 0) {
      RState = 0;
      break;
    } else if (RState >= 255) {
      RState = 255;
      break;
    }
    send_color(RState, GState, BState);
  }

  for (int i = 0; i < 85; i++) {
    GState = GState + ranG;
    delay(60);
    if (GState <= 0) {
      GState = 0;
      break;
    } else if (GState >= 255) {
      GState = 255;
      break;
    }
    send_color(RState, GState, BState);
  }

  for (int i = 0; i < 85; i++) {
    BState = BState + ranB;
    delay(60);
    if (BState <= 0) {
      BState = 0;
      break;
    } else if (BState >= 255) {
      BState = 255;
      break;
    }
    send_color(RState, GState, BState);
  }

}
