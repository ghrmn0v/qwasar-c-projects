# Qwasar C Projects

Selected C projects from my Qwasar Software Engineering curriculum. Each
project lives in its own folder and has its own README with build and usage
instructions.

## Projects

| Project | Description | Highlights |
|---------|-------------|------------|
| [`my_mastermind`](my_mastermind/) | Mastermind code-breaking game | Random secret generation, input validation, exact/misplaced scoring, command-line options |
| [`my_printf`](my_printf/) | Reimplementation of a subset of C's `printf` | Variadic functions (`stdarg.h`), format parsing, low-level output via `write` |

## Building

Each subproject has its own `Makefile`:

```bash
cd my_mastermind && make      # builds ./my_mastermind
cd my_printf && make          # builds libmy_printf.a
```

Both projects compile cleanly with `-Wall -Wextra -Werror`.

## Context

These were built as part of the Qwasar SV Software Engineering School
curriculum and are published here as portfolio work.

Made at [Qwasar SV — Software Engineering School](https://qwasar.io).
