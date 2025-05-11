#include "projectStructure.hpp"
#include "anatutils.hpp"


namespace anatutils {
    bool createDirectory(const std::filesystem::path& path);
}
#include <iostream>


#include <filesystem>

namespace fs = std::filesystem;

void ProjectStructure::createBasicStructure(const std::string& projectName) {
    fs::path basePath = fs::current_path() / projectName;

    
    if (anatutils::createDirectory(basePath)) {
        std::cout << "Created project directory: " << basePath << std::endl;

      

        anatutils::createDirectory(basePath / "src");
        anatutils::createDirectory(basePath / "include");
        anatutils::createDirectory(basePath / "lib");
        anatutils::createDirectory(basePath / "bin");
        anatutils::createDirectory(basePath / "tests");
        
        anatutils::writeFile((basePath / "src/main.cpp").string(), "#include <iostream>\n\nint main() {\n    std::cout << \"Hello, World!\" << std::endl;\n    return 0;\n}");

        std::cout << "Created subdirectories: src, include, lib, bin, tests" << std::endl;
    } else {


        std::cerr << "Project directory already exists or failed to create!" << std::endl;
    }
}
