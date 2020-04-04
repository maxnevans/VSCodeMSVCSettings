# VS Code Settings to create Win32 GUI application on C++17

### Important notes:
- [**Guide**](https://code.visualstudio.com/docs/languages/cpp) for  VSCode on how to run a and debug simple console app 
- MSVC (Microsoft Visual C++ Compiler) options: [**link**](https://docs.microsoft.com/en-us/cpp/build/reference/compiler-options-listed-by-category?view=vs-2019)
    - Use this to configure UNICODE, linker and other project settings
- Look at the [**`tasks.json`**](.vscode/tasks.json) to see actual VSCode Settings
- [**`c_cpp_properties.json`**](.vscode/c_cpp_properties.json) specifies **only** IntelliSense properties!!!
- Run default task to compile project
- Executable is placed inside **`bin`** directory