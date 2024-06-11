#include <SegmentDisplay.h>

SegmentDisplay seg(5,4,3,2,8,9,10,11);

unsigned long t=0;
#define nut 6
int num = 9;
int minus = 0;
void setup() {
  pinMode(nut, INPUT_PULLUP);
  

}

void loop() {
  int stat = digitalRead(nut);
  delay(100);

  seg.displayHex(num, 0);
  
  if(stat==0)
    minus=1;
    
  if(minus==1){
    
    if(millis()-t>=400){
      num--; 
      if(num==0){
      minus=0;
      }
      
      t=millis();
    }
  
  }
}
