#include "Arduino.h"
#include "ArduinoR4DigitDisplay.h"

void top(int s, uint8_t frame[8][12]){
  frame[1][4+s] = 1;
  frame[1][5+s] = 1;
  frame[1][6+s] = 1;
}

void ul(int s, uint8_t frame[8][12]){
  frame[1][4+s] = 1;
  frame[2][4+s] = 1;
  frame[3][4+s] = 1;
}

void ur(int s, uint8_t frame[8][12]){
  frame[1][6+s] = 1;
  frame[2][6+s] = 1;
  frame[3][6+s] = 1;
}

void br(int s, uint8_t frame[8][12]){
  frame[4][6+s] = 1;
  frame[5][6+s] = 1;
}

void bl(int s, uint8_t frame[8][12]){
  frame[4][4+s] = 1;
  frame[5][4+s] = 1;
}

void mid(int s, uint8_t frame[8][12]){
  frame[3][4+s] = 1;
  frame[3][5+s] = 1;
  frame[3][6+s] = 1;
}

void bot(int s, uint8_t frame[8][12]) {
  frame[5][4+s] = 1;
  frame[5][5+s] = 1;
  frame[5][6+s] = 1;
}

void one(int s, uint8_t frame[8][12]){
  ur(s, frame);
  br(s, frame);
}
void two(int s, uint8_t frame[8][12]){
  top(s, frame);
  ur(s, frame);
  mid(s, frame);
  bl(s, frame);
  bot(s, frame);
}
void three(int s, uint8_t frame[8][12]){
  top(s, frame);
  ur(s, frame);
  mid(s, frame);
  br(s, frame);
  bot(s, frame);
}

void four(int s, uint8_t frame[8][12]){
  ur(s, frame);
  ul(s, frame);
  mid(s, frame);
  br(s, frame);
}

void five(int s, uint8_t frame[8][12]){
  top(s, frame);
  ul(s, frame);
  mid(s, frame);
  br(s, frame);
  bot(s, frame);
}

void six(int s, uint8_t frame[8][12]){
  top(s, frame);
  ul(s, frame);
  mid(s, frame);
  bl(s, frame);
  br(s, frame);
  bot(s, frame);
}

void seven(int s, uint8_t frame[8][12]){
  top(s, frame);
  ur(s, frame);
  br(s, frame);
}

void eight(int s, uint8_t frame[8][12]){
  top(s, frame);
  ur(s, frame);
  ul(s, frame);
  mid(s, frame);
  br(s, frame);
  bl(s, frame);
  bot(s, frame);
}

void nine(int s, uint8_t frame[8][12]){
  top(s, frame);
  ur(s, frame);
  ul(s, frame);
  mid(s, frame);
  br(s, frame);
}

void zero(int s, uint8_t frame[8][12]){
  top(s, frame);
  ur(s, frame);
  ul(s, frame);
  br(s, frame);
  bl(s, frame);
  bot(s, frame);
}


void drawNumber(int num, uint8_t frame[8][12]){
  if (num > 99){
    num = 99;
  } else if (num < 0){
    num = 0;
  }


  int tensDigit = num / 10;
  int unitsDigit = num % 10;

  if (tensDigit == 0){
    zero(0, frame);
  } else if (tensDigit == 1){
    one(0, frame);
  } else if (tensDigit == 2){
    two(0, frame);
  } else if (tensDigit == 3){
    three(0, frame);
  } else if (tensDigit == 4){
    four(0, frame);
  }else if (tensDigit == 5){
    five(0, frame);
  }else if (tensDigit == 6){
    six(0, frame);
  }else if (tensDigit == 7){
    seven(0, frame);
  }else if (tensDigit == 8){
    eight(0, frame);
  }else if (tensDigit == 9){
    nine(0, frame);
  }

  if (unitsDigit == 0){
    zero(4, frame);
  } else if (unitsDigit == 1){
    one(4, frame);
  } else if (unitsDigit == 2){
    two(4, frame);
  } else if (unitsDigit == 3){
    three(4, frame);
  } else if (unitsDigit == 4){
    four(4, frame);
  } else if (unitsDigit == 5){
    five(4, frame);
  } else if (unitsDigit == 6){
    six(4, frame);
  } else if (unitsDigit == 7){
    seven(4, frame);
  } else if (unitsDigit == 8){
    eight(4, frame);
  } else if (unitsDigit == 9){
    nine(4, frame);
  } 
}
