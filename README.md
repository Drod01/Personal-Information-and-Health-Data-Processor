
# 🧬 Personal Information and Health Data Processor

This C project is designed to collect, process, and validate personal and health-related information from users. It showcases efficient management of enums for phone types and state identifiers, and introduces validation methods for U.S. state codes. Additionally, it includes a rudimentary implementation for handling health-related ICD codes.

---

## 📋 Features

- 👤 **Personal Information Collection**  
  Collects first name, last name, address, state, and phone number.

- 📍 **State Identifier Validation**  
  Validates state abbreviations (e.g., TX, CA) against a list of valid US states.

- ☎️ **Phone Type Handling**  
  Manages phone types such as home, cell, and work using `enum`.

- 🩺 **Health Data Processing**  
  Captures ICD (International Classification of Diseases) codes.

---

## ⚙️ Prerequisites

- Visual Studio Code (VSCode)
- [C/C++ Extension for VSCode](https://marketplace.visualstudio.com/items?itemName=ms-vscode.cpptools)
- GCC or any standard C compiler

---

## 🏗️ Compilation

Compile the program using GCC:

```bash
gcc project.c -o project
```

---

## 🧰 VSCode Setup

### 1. Open the Project
- Launch VSCode and use `File > Open Folder...` to open the root directory.

### 2. Configure the Build Task
- Go to `Terminal > Configure Default Build Task > Create tasks.json file from template > Others`
- Paste the content from the provided `tasks.json`

### Example `tasks.json`:
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

### 3. Build the Project
Use `Ctrl + Shift + B` or open the terminal and run:

```bash
gcc project.c -o project
```

### 4. Run the Program
Execute in terminal:

```bash
./project
```

---

## 🐞 Debugging in VSCode

1. Go to the **Run** view (`Ctrl+Shift+D`)
2. Create a `launch.json` file for C++ (GDB/LLDB)
3. Adjust `"program": "${workspaceFolder}/project"`

---

## 🧪 Input Format

You will be prompted for the following inputs:

- First and last name
- Address
- Two-letter state abbreviation
- Phone number and type (Home, Cell, Work)
- ICD code

---

## 📤 Output

Displays the structured, validated information back to the user:

```
--- Collected Information ---
Name: John Doe
Address: 1234 Elm St, TX
Phone: 210-555-1234 (Cell)
ICD Code: J18.9
```

---

## 📄 License

This project is released under the MIT License.

---

## 🙋‍♂️ Contact

**David Rodriguez**  
📧 d.rod23@outlook.com  
🔗 [LinkedIn](https://www.linkedin.com/in/david-i-rodriguez/)
