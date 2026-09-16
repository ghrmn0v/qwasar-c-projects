# my_mastermind

A C implementation of the classic **Mastermind** code-breaking game, built as a
Qwasar Software Engineering exercise.

## Gameplay

The program generates a secret 4-digit code using the digits `0`–`8` with no
repeated digits. You get a limited number of attempts to guess it. After each
guess the game reports:

- **Well placed pieces** — correct digit in the correct position
- **Misplaced pieces** — correct digit in the wrong position

The game ends when you guess the code or run out of attempts.

## Build

Requires a C compiler (e.g. `gcc`) and `make`.

```bash
make
```

This produces the `my_mastermind` executable. It compiles with
`-Wall -Wextra -Werror`.

## Usage

```bash
./my_mastermind [-c CODE] [-t ATTEMPTS]
```

| Option | Description |
|--------|-------------|
| `-c CODE` | Use a fixed 4-digit secret code instead of a random one |
| `-t N`    | Number of attempts (default: 10) |

Example:

```bash
./my_mastermind -c 1234 -t 5
```

### Input rules

A guess is accepted only when it is exactly 4 characters long, uses only the
digits `0`–`8`, and contains no repeated digits. Invalid input prompts a
`Wrong input!` message and asks again.

## Project Structure

| File | Responsibility |
|------|----------------|
| `main.c` | Program entry point, argument parsing, game loop |
| `random.c` | Generates a random secret code without repeated digits |
| `input.c` | Reads a line of input |
| `validation.c` | Validates a guess (length, digit range, no duplicates) |
| `compare.c` | Counts well-placed and misplaced pieces |
| `my_mastermind.h` | Shared declarations |

## What I Learned

- Structuring a small C program across multiple translation units
- Using `rand`/`srand` for randomized secret generation
- Manual string handling and input validation in C
- Parsing simple command-line options

Made at [Qwasar SV — Software Engineering School](https://qwasar.io).
