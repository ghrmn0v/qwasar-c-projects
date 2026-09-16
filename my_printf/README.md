# my_printf

A small reimplementation of a subset of C's `printf`, built as a Qwasar
Software Engineering exercise. It uses variadic functions (`stdarg.h`) and
writes output directly with `write`.

## Supported format specifiers

| Specifier | Description |
|-----------|-------------|
| `%c` | Character |
| `%s` | String |
| `%d` | Signed integer (including negative values) |
| `%%` | Literal percent sign |

> **Not implemented:** `%x`, `%u`, and `%p`. The source files for these
> (`put_hex.c`, `put_unsigned.c`, `put_pointer.c`) exist but are empty.

`my_printf` returns the total number of characters written.

## Build

Requires a C compiler (e.g. `gcc`) and `make`.

```bash
make
```

This produces the static library `libmy_printf.a`. It compiles with
`-Wall -Wextra -Werror`.

## Usage

Link the library into your program:

```c
#include "my_printf.h"

int main(void) {
    my_printf("Name: %s, Score: %d\n", "Anar", 42);
    return 0;
}
```

```bash
gcc -Wall -Wextra -Werror -I. your_program.c libmy_printf.a -o your_program
./your_program
```

## Project Structure

| File | Responsibility |
|------|----------------|
| `my_printf.c` | Format-string parser and dispatcher |
| `put_char.c` | Writes a single character |
| `put_str.c` | Writes a string |
| `put_int.c` | Writes a signed integer |
| `my_printf.h` | Shared declarations |
| `put_hex.c`, `put_unsigned.c`, `put_pointer.c` | Reserved for unimplemented specifiers (empty) |

## What I Learned

- Working with variadic functions (`va_list`, `va_start`, `va_arg`, `va_end`)
- Parsing a format string and dispatching to helper functions
- Handling negative integers without undefined behavior
- Counting and returning the number of written characters

Made at [Qwasar SV — Software Engineering School](https://qwasar.io).
