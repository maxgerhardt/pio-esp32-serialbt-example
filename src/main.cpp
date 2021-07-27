#include <Arduino.h>
#include "globalVar.h"
#include "CLI.h"

void setup() {
  SerialBT.begin();
  SerialBT.println("Name");
}

void loop() {
  some_cli_function();
}