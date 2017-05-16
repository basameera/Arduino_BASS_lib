#include <BASSLib.h>

BASSLib bass;

void setup() {
  Serial.begin(9600);
}

void loop() {
  long num = bass.getRandomNumber();
  Serial.println(num);
  delay(1000);

}
