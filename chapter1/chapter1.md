# Chapter 1

[TOC]

## Information = Bits + Context

**Computer system.** Hardware and systems software that work together to run application programs.

**Text file.** Consists exclusively of ASCII characters.
- Source code, etc.

**Binary file.** Files that are not text files.

**Executable object file/program.** Packages low-level machine-language instructions compiled from source code. Stored as binary disk file.

**Compilation system.** Programs that translate source file to object file.
- Preprocessor
    - `hello.c` to `hello.i `
    - Resolve directives that begin with “#”, e.g., include statements, constant definitions, macros.
- Compiler
    - `hello.i` to `hello.s`
    - Translates source code text file into assembly-language text file.
- Assembler
    - `hello.s` to `hello.o`
    - Translates assembly-language text file into machine-language instructions.
    - Packages in relocatable object program.
    - Stored in binary object file.
- Linker
    - Links library functions called in the source code with `hello.o`.
