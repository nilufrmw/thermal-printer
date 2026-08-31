<pre> About </pre>
<pre>
Small driver for a thermal printer mechanism (LTP01-245-11 to be exact) using curiosity nano board with the SAMD21G17D mcu
</pre>

<pre> Coding Guidelines </pre>
some coding guidelines I follow in this project. [Reference](https://github.com/artfulbytes/nsumo_video/blob/main/docs/coding_guidelines.md) guidline

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


- 2 spaces no tab
- use include guards in every header file to avoid duplicated and recursive inclusions
- a brief comment describing the module at top of every header file


