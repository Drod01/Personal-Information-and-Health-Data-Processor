# Personal Information and Health Data Processor

This C project is designed to collect, process, and validate personal and health-related information from users. It focuses on efficient management of enums for phone types and state identifiers, and introduces a method for validating state codes through user input. Additionally, it includes a rudimentary implementation for handling health-related codes (ICD codes).

## Features

- **Personal Information Collection**: Collects basic personal information including name, address, and phone number.
- **State Identifier**: Utilizes a state identification function to validate state abbreviations input by the user.
- **Phone Type Handling**: Manages different phone types (home, cell, work) through enumeration.
- **Health Data Processing**: Gathers and processes ICD (International Classification of Diseases) codes as part of health-related data.

### Prerequisites

- [Visual Studio Code](https://code.visualstudio.com/)
- C/C++ extension for VSCode (available in the Extensions view `Ctrl+Shift+X`)

### Compilation

To compile the program, ensure you have a C compiler (e.g., GCC) installed and run the following command:

```bash
gcc project.c -o project
```

### Setting Up the Project

1. **Open VSCode** and use `File > Open Folder...` to open the project's root directory.
2. **Configure the Build Task:**
   - VSCode might auto-detect the Makefile for building. Otherwise, set up a build task manually by going to `Terminal > Configure Default Build Task > Create tasks.json file from template > Others`. Replace the contents of `tasks.json` with:

```json
{
    "version": "2.0.0",
    "tasks": [
        {
            "label": "Build Project",
            "type": "shell",
            "command": "gcc",
            "args": [
                "project.c",
                "-o",
                "project"
            ],
            "group": {
                "kind": "build",
                "isDefault": true
            },
            "problemMatcher": ["$gcc"],
            "detail": "Compiler task."
        }
    ]
}
```

### Build the Project
- Press Ctrl+Shift+B or run make in the terminal.
- Run the Project
- Execute ./project in the terminal and follow the prompts.

### Debugging in VSCode
Go to the Run view (Ctrl+Shift+D), select create a launch.json file, then choose C++ (GDB/LLDB). Adjust the program path to point to your executable for debugging.

### Input Format
Provide input as requested by the program's prompts, including state abbreviations, phone numbers, and ICD codes accurately.

### Output
The program outputs the collected information, including validated state codes and other data entered during the session.
