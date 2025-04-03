#include <lib1.hpp>

Lib1 led13(13);

void setup() {
  // put your setup code here, to run once:
  led13.init();
  led13.blink(5);
}


void loop() {
  // put your main code here, to run repeatedly:
  led13.check();
}
