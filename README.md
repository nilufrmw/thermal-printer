### About
Small driver for a thermal printer mechanism (LTP01-245-11 to be exact) using curiosity nano board with the SAMD21G17D mcu

### Coding Guidelines
some coding guidelines I follow in this project. [Reference](https://github.com/artfulbytes/nsumo_video/blob/main/docs/coding_guidelines.md) guidline

### naming

- snake_case for everything including filenames except defines. (eg: spi.h, uart.c)
```c
#define SOME_CONSTANT (0)

void some_function(void) {
  int some_variable;
}
```
- a header (.h) and implementation (.c) file for a module (if make sense as a module, like a peripheral or sensor/actuator etc.)

- prefix function names with module name
```c
// bad interface btw
void uart_init(void);
void spi_init(void);
```
