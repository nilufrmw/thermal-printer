<pre> About </pre>
Small driver for a thermal printer mechanism (LTP01-245-11 to be exact) using curiosity nano board with the SAMD21G17D mcu

==current state: writing driver for the mcu==

<pre> Documents </pre>
[printer mechanism technical reference](https://www.e-kom.com/Documents/Products/1183/ltp01-series.pdf)

[mcu datasheet](https://ww1.microchip.com/downloads/aemDocuments/documents/MCU32/ProductDocuments/DataSheets/SAM-D21-DA1-Family-Data-Sheet-DS40001882.pdf)

<pre>Directory structure</pre>
`src/` - source files (drivers, app)

`src/test/` - test files

`src/drivers` - drivers for mcu and printer

`src/app` - application code

<pre> Coding Guidelines </pre>
some coding guidelines I follow in this project. [Reference](https://github.com/artfulbytes/nsumo_video/blob/main/docs/coding_guidelines.md) guidline

- snake_case for everything including filenames except defines. (eg: spi.h, uart.c)
```c
#define SOME_CONSTANT (0)

void some_function(void) {
  uint8_t some_variable;
}
```
- a header (.h) and implementation (.c) file for a module (if make sense as a module, like a peripheral or sensor/actuator etc.)

- prefix function names with module name
```c
// bad interface btw
void uart_init(void);
void spi_init(void);
```


- 2 spaces no tab
- use include guards in every header file to avoid duplicated and recursive inclusions
- a brief comment describing the module at top of every header file
```c
#ifndef UART_H
// A UART driver for setting up and operating the UART peripheral

// interfaces

#endif // UART_H
```
- Use `void` as parameter in function declarations without parameters, because in C, functions with empty paranthesis can be called with any number of parameters.

- Use fixed-width integers (`uint8_t`, `uint16_t` from `stdint.h`) as it makes memory usage obvious
