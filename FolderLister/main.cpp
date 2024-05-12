#include <iostream>
#include <fstream>
#include <filesystem>
#include <string>  

int main(int argc, char* argv[]) {
    std::string path;

    if (argc > 1) {
        path = argv[1]; // ʹ���������ṩ�ĵ�һ��������Ϊ·��
    }
    else {
        std::cout << "������Ŀ¼·����Enterʹ��Ĭ��·��: ";
        std::getline(std::cin, path);
        if (path.empty()) {
            path = std::filesystem::current_path().string(); // ���û�����룬��ʹ�õ�ǰ����Ŀ¼
        }
    }

    std::ofstream file("folders.csv");

    if (!file.is_open()) {
        std::cerr << "�޷������ļ�" << std::endl;
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
        std::cerr << "�ļ�ϵͳ����: " << e.what() << " ·��: " << path << std::endl;
        file.close();
        return 1;
    }

    file.close();
    std::cout << "�ļ��������Ѿ����浽 folders.csv" << std::endl;
    return 0;
}
