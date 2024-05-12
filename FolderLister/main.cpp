#include <iostream>
#include <fstream>
#include <filesystem>
#include <string>  

int main(int argc, char* argv[]) {
    std::string path;

    if (argc > 1) {
        path = argv[1]; // 使用命令行提供的第一个参数作为路径
    }
    else {
        std::cout << "请输入目录路径或按Enter使用默认路径: ";
        std::getline(std::cin, path);
        if (path.empty()) {
            path = std::filesystem::current_path().string(); // 如果没有输入，则使用当前工作目录
        }
    }

    std::ofstream file("folders.csv");

    if (!file.is_open()) {
        std::cerr << "无法创建文件" << std::endl;
        return 1;
    }

    try {
        for (const auto& entry : std::filesystem::directory_iterator(path)) {
            if (entry.is_directory()) {
                file << entry.path().filename() << std::endl;
            }
        }
    }
    catch (const std::filesystem::filesystem_error& e) {
        std::cerr << "文件系统错误: " << e.what() << " 路径: " << path << std::endl;
        file.close();
        return 1;
    }

    file.close();
    std::cout << "文件夹名称已经保存到 folders.csv" << std::endl;
    return 0;
}
