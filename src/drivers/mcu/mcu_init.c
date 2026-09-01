#include "mcu_init.h"

void mcu_init(void) {
  /*
  The Watchdog Timer (WDT) is a mechanism to monitor 
  the mcu state. If the WDT is on by default and timeout is small,
  it can lead to mcu reset. So turning it off by default is a good practice
  and for systems that has to recover from such states, it's used for example
  a flight software for let's say a weather balloon or spacecraft where manual
  reset by human interaction is not possible
  */
}
