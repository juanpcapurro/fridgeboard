#include "Arduino.h"
#include <Keyboard.h>

void setup()
{
  Keyboard.begin();
}

void loop()
{
  Keyboard.press(KEY_LEFT_CTRL);
  Keyboard.press(KEY_LEFT_ALT);
  Keyboard.press(KEY_DELETE);
  Keyboard.releaseAll();
}
