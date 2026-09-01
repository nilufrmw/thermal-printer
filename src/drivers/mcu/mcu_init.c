#include "mcu_init.h"

void mcu_init(void) {
  /*
  The Watchdog Timer (WDT) is a mechanism to monitor 
  the mcu state. If the WDT is on by default and timeout period is small,
  it can lead to mcu reset. We will have to constantly feed the dog so to 
  speak to not issue a reset. So turning it off by default is a good practice 
  unless for systems that has to recover from such states (eg: a flight software 
  for let's say a weather balloon or spacecraft where manual reset by human 
  interaction is not possible. In some mcus the WDT is on by default. 
  To check if the WDT on mcu (SAMD21G17D) is on by default, we have to refer 
  the datasheet of the mcu.

  Datasheet says - after a power-on reset, some registers will be loaded with
  initial values from the NVM User Row and suggest to refer to NVM User Row Mapping
  for more details. Bit 25 (WDT Enable) is 0 by default. So we don't have to
  stop the watchdog manually.
  */ 
  
}
