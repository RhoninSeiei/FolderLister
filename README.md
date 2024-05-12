### README.md for FolderLister

#### FolderLister
FolderLister 是一个简单的 C++ 程序，用于列出指定目录下的所有文件夹，并将它们的名称保存到 CSV 文件中。这个程序可以通过命令行接收目录路径，或在运行时提示用户输入。

FolderLister is a simple C++ program that lists all the folders in a specified directory and saves their names in a CSV file. The program can receive the directory path via the command line or prompt the user during execution.

#### 功能 Features
- 自动扫描指定的文件夹路径。 Automatically scan a specified folder path.
- 将所有子文件夹名称输出到一个名为 `folders.csv` 的文件中。 Output the names of all subfolders to a file named `folders.csv`.
- 允许用户在程序运行时输入路径，或使用程序所在目录作为默认路径。 Allow users to input the path during program execution, or use the program's current directory as the default path.

#### 系统要求 System Requirements
- 支持 C++17 的编译器（例如最新版本的 GCC, Clang, MSVC） A compiler that supports C++17 (e.g., the latest versions of GCC, Clang, MSVC).
- 对于 Windows，建议使用 Visual Studio 2019 或更高版本。 For Windows, Visual Studio 2019 or higher is recommended.

#### 如何编译 How to Compile
1. 使用支持 C++17 的编译器打开项目。 Open the project with a compiler that supports C++17.
2. 确保项目设置为使用 C++17 标准编译。 Ensure that the project is set to compile with the C++17 standard.
3. 编译项目。 Compile the project.

对于 Visual Studio 用户： For Visual Studio users:
- 打开解决方案文件 (.sln)。 Open the solution file (.sln).
- 确保选择了适当的配置（例如，Debug 或 Release）。 Ensure the appropriate configuration is selected (e.g., Debug or Release).
- 从顶部菜单中选择“生成” -> “生成解决方案”。 From the top menu, select "Build" -> "Build Solution".

#### 如何使用 How to Use
- 通过命令行运行 `FolderLister.exe`。 Run `FolderLister.exe` from the command line.
  可以选择性地在命令行中指定路径，如： Optionally specify the path in the command line as follows:
  ```
  FolderLister.exe "C:\example\path"
  ```
- 如果不提供路径参数，程序将提示输入路径。 If no path parameter is provided, the program will prompt for a path input.
  你可以输入一个路径或直接按Enter使用程序所在目录。 You can enter a path or press Enter to use the current directory of the program.

#### 输出 Output
- 程序会在运行目录中生成一个名为 `folders.csv` 的文件，其中包含所有找到的文件夹名称，每个名称占一行。 The program generates a file named `folders.csv` in the running directory, which contains the names of all found directories, each on a new line.

#### 错误处理 Error Handling
- 如果指定的路径不存在或程序没有权限访问，程序会在控制台中显示错误信息。 If the specified path does not exist or the program does not have access permissions, the program will display an error message in the console.

#### 贡献 Contributions
- 欢迎通过 GitHub 提交问题或拉取请求来改进 FolderLister。 Contributions are welcome! Feel free to submit issues or pull requests on GitHub to improve FolderLister.
