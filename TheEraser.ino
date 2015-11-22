//We always have to include the library
#include "LedControl.h"
/*


 pin 12 is connected to the DataIn 
 pin 11 is connected to the CLK 
 pin 10 is connected to LOAD 

 */
LedControl lc=LedControl(12,11,10);

/* display update */
unsigned long delaytime=100;

void setup() {
  /*
   Wake up MAX!
   */
  lc.shutdown(0,false);
  /* Set the brightness to a medium values */
  lc.setIntensity(0,1);
  /* and clear the display */
  lc.clearDisplay(0);
}
/* This one gives the effect of fast movement*/
void rows() {
  for(int row=0;row<8;row++) {
    delay(delaytime);
    lc.setRow(0,row,B10101100);
    delay(delaytime);
    lc.setRow(0,row,B10101101);
    delay(delaytime);
    lc.setRow(0,row,B11101100);
    delay(delaytime);
    lc.setRow(0,row,B10100000);
    delay(delaytime);
    lc.setRow(0,row,B00000000);
    delay(delaytime);
    lc.setRow(0,row,B11111111);
    delay(delaytime);
    lc.setRow(0,row,B10101101);
    delay(delaytime);
    lc.setRow(0,row,B10101100);
 
 for(int row=4;row<8;row++) {
    delay(delaytime);
    lc.setRow(0,row,B11111111);
 }
  }
}
void columns() {
  for(int col=0;col<8;col++) {
    delay(delaytime);
    lc.setColumn(0,col,B10100000);
    delay(delaytime);
    lc.setColumn(0,col,B10101101);
    delay(delaytime);
    lc.setColumn(0,col,B11101100);
    delay(delaytime);
    lc.setColumn(0,col,B10100000);
    delay(delaytime);
    lc.setColumn(0,col,B10101101);
    delay(delaytime);
    lc.setColumn(0,col,B10000000);
    delay(delaytime);
    lc.setColumn(0,col,B10101101);
    delay(delaytime);
    lc.setColumn(0,col,B10101100);
 
  }
}

 void writeMatrix() {
 byte B[8]={B00011100,
B00100010,
B01000101,
B10100010,
B10100010,
B01000101,
B00100010,
B00011100};
 

  /* now this will set the pins and display them one by one with a small delay */
  lc.setRow(0,0,B[0]);
  lc.setRow(0,1,B[1]);
  lc.setRow(0,2,B[2]);
  lc.setRow(0,3,B[3]);
  lc.setRow(0,4,B[4]);
  lc.setRow(0,5,B[5]);
  lc.setRow(0,6,B[6]);
  lc.setRow(0,7,B[7]);
  lc.setRow(0,8,B[8]);
  delay(1000);
}
void loop (){
  writeMatrix();
  rows();
  columns();
  }
