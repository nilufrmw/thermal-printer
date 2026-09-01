#include "mcu_init.h"

void mcu_init(void) {
  /*
  The Watchdog Timer (WDT) is a mechanism to monitor 
  the mcu state. If the WDT is on by default and timeout is small,
  it can lead to mcu reset. So turning it off by default is a good practice
  and for systems that has to recover from such states, it's used for example
  a flight software for let's say a weather balloon or spacecraft where manual
  reset by human interaction is not possible. In some mcus the WDT is on by default.
  To check if the mcu (SAMD21G17D) in the development board (Curiosity Nano Board)
  is on by default, we have to refer the datasheet.
  */
  
}
