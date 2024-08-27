#include <Mouse.h>
void setup() {
  Mouse.begin();
}

void loop() {
  //Make movement by
  long x, y = random(-50, 50);

  long delay_var = 300000; //300000/1000/60 = 5 Miutes

  //Random delay to add
  long delayRand = random(0, 60000); //60000/1000/60 = 1 Minute

  //whether to add or subtract delay
  int sign = random(0,1);

  if (sign == 0){
    //Add Delay
    delay_var = delay_var + delayRand;
  }
  else if (sign == 1){
    //Subtract delay
    delay_var = delay_var - delayRand;
  }

  Mouse.move(x, y, 0);
  Mouse.click();
  delay(delay_var);
  

}
