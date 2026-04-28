# Execution Architecture: C vs. Python

> Standard Python (CPython) sacrifices raw CPU execution speed to save developer time. It achieves this by compiling to a universal bytecode executed by a Virtual Machine, rather than compiling directly to hardware-specific machine code like C.

## The Python Execution Pipeline

1. **Source Code:** The human-readable instructions (the `.py` file).
2. **Compiler:** When the script is invoked, Python checks for **Syntax Errors**. If the syntax is valid, it compiles the source code into bytecode.
3. **Bytecode:** An intermediate, lower-level instruction set (the `.pyc` file). This format is universally portable and not tied to any physical hardware architecture.
4. **PVM (Python Virtual Machine):** A pre-compiled C binary tailored to the host machine's specific OS and architecture. It launches as a process, executes the bytecode line-by-line, and terminates when the script finishes.
5. **CPU:** The physical processor. Instead of executing the Python script directly, the CPU executes the machine code of the PVM, which acts as the translator for the bytecode.

## Key Differences

| Feature | C Language | Python |
| :--- | :--- | :--- |
| **Output** | Direct machine code (binary). | Intermediate bytecode (`.pyc`). |
| **Portability** | Locked to the specific physical hardware it was compiled on. | Universally portable across any system with a PVM installed. |
| **Error Checking** | Compile-Time (catches Type and Reference errors; fails to build if found). | Compile-Time (catches Syntax errors only) / Runtime (catches Type errors during execution). |
| **Use Case** | Chosen for maximum machine performance and hardware control. | Chosen for rapid development and cross-platform flexibility. |
