# Compiler Project

A simple compiler that performs lexical analysis, parsing, and code generation.

**Note:** This project was developed as coursework for a compiler design course at college.

## Project Structure

```
compiler-notYet/
├── src/                 # Source files
│   └── main.c          # Main entry point
├── include/            # Header files
│   ├── global.h        # Global definitions and constants
│   ├── Error.h         # Error handling
│   ├── Symbol.h        # Symbol table management
│   ├── Init.h          # Initialization (keywords)
│   ├── Lexer.h         # Lexical analyzer
│   ├── Parse.h         # Parser
│   └── emitter.h       # Code generator
├── input/              # Input source files (.exp files)
└── output/             # Generated output files (.txt and .err)
```

## Compilation

### Using GCC (Command Line)

```bash
gcc -I include src/main.c -o compiler.exe
```

Or from the project root:
```bash
gcc -I./include ./src/main.c -o compiler.exe
```

### Using Code::Blocks

1. Open the project file (Compiler-Phase5.cbp)
2. Update project settings:
   - Add `include` to compiler search directories
   - Set source files to `src/main.c`
3. Build the project

## Usage

1. Create your input file: `input/inputFile.exp`
2. Run the compiler: `./compiler.exe` (or `compiler.exe` on Windows)
3. Check output:
   - `output/inputFile.txt` - Generated assembly code
   - `output/inputFile.err` - Error messages (if any)

## Language Features

- **Variables**: `identifier = expression;`
- **Numbers**: `123`, `456`
- **Arithmetic**: `+`, `-`, `*`, `/`, `div`, `mod`
- **Parentheses**: `(expression)`
- **If-then**: `if (expr) then stmt`
- **While-do**: `while (expr) do stmt`
- **Compound statements**: `begin stmt; stmt; end`
- **Comments**: 
  - Single-line: `^ comment text`
  - Multi-line: `%% comment text %%`

## Example Input File

Create `input/inputFile.exp`:
```
x = 5 + 3;
y = x * 2;
if (y) then z = 10;
```

## Output

The compiler generates stack-based assembly-like code in `output/inputFile.txt`.

