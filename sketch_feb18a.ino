byte col = 0;
byte leds[8][8];

// pin[xx] on led matrix connected to nn on Arduino (-1 is dummy to make array start at pos 1)
//             00 01 02 03 04  05  06  07  08  09  10  11  12 13 14 15 16  
int pins[17]= {-1, 5, 4, 3, 2, 14, 15, 16, 17, 13, 12, 11, 10, 9, 8, 7, 6};

// col[xx] of leds = pin yy on led matrix
//                  1         2        3        4         5         6         7         8
int cols[8] = {pins[13], pins[3], pins[4], pins[10], pins[06], pins[11], pins[15], pins[16]};

// row[xx] of leds = pin yy on led matrix
//                  1        2         3        4         5        6        7        8
int rows[8] = {pins[9], pins[14], pins[8], pins[12], pins[1], pins[7], pins[2], pins[5]};



void setup() {
   // sets the pins as output
   for (int i = 1; i <= 16; i++) {
     pinMode(pins[i], OUTPUT);
   }

   // set up cols and rows
   for (int i = 2; i <= 13; i++) {
      digitalWrite(i, HIGH);
      delay(500);
      digitalWrite(i, LOW);
   }
  
}
void loop() {
  // put your main code here, to run repeatedly:
  // set up cols and rows
}
