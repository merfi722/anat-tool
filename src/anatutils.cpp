#include "anatutils.hpp"
#include <iostream>
#include <fstream>
#include <filesystem>


namespace fs = std::filesystem;

namespace anatutils {

bool createDirectory(const fs::path& dirPath) {
    if (!fs::exists(dirPath)) {
        return fs::create_directories(dirPath);
    }
    return false;
}


bool writeFile(const std::string& filepath, const std::string& content) {
    std::ofstream file(filepath);
    if (!file) return false;
    file << content;
    return true;
}


bool createFile(const fs::path& filePath) {
    std::ofstream file(filePath);
    if (file.is_open()) {
        file.close();
        return true;
    }
    return false;
}
}


// void createFile(const std::string& path, const std::string& content) {
//     std::ofstream file(path);
//     if(file.is_open()){
//         file << content;
//         file.close();
//     } else {
//         std::cerr << "Error creating file: " << path << std::endl;
//     }
// }

// void createDirectory(const std::string& path) {
//     if(!fs::exists(path)){
//         fs::create_directories(path);
//     }
//     else{
//         std::cout << "Directory already exists: " << path << std::endl;
//     }
// }

// void initProject(const std::string& projectName) {
//     std::string base = projectName;

    // createDirectory(base + "/app");
    // createDirectory(base + "/src");
    // createDirectory(base + "/include");
    // createDirectory(base + "/lib");
    // createDirectory(base + "/bin");
    // createDirectory(base + "/tests");
    // createDirectory(base + "/docs");
    // createDirectory(base + "/scripts");
    // createDirectory(base + "/assets");
    // createDirectory(base + "/config.cpp");
    // createDirectory(base + "/database");
    
    // createFile(base + "/bin/project.exe");
    // createFile(base + "/config/settings.cpp");
    // createFile(base + "/src/main.cpp", "#include <iostream>\n\nint main() {\n    std::cout << \"Hello, World!\" << std::endl;\n    return 0;\n}");
    // createFile(projectName + "/README.md", "# " + projectName);



    // createFile(projectName + "/Makefile", "CC = g++\nCFLAGS = -Iinclude\n\nall: main\n\nmain: src/main.o\n\t$(CC) -o bin/main src/main.o\n\nsrc/main.o: src/main.cpp\n\t$(CC) $(CFLAGS) -c src/main.cpp -o src/main.o\n\nclean:\n\trm -f src/*.o bin/*");
// }