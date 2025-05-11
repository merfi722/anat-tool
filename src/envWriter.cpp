#include "EnvWriter.hpp"
#include <iostream>
#include <filesystem>

void EnvWriter::createEnvFile(const std::string& projectName) {
    std::ofstream envFile(projectName + "/.env");
    if (envFile.is_open()) {
        envFile << "PROJECT_NAME=" << projectName << "\n";
        envFile << "PROJECT_PATH=" << std::filesystem::current_path() / projectName << "\n";
        envFile.close();
        std::cout << ".env file created for project: " << projectName << std::endl;
    } else {
        std::cerr << "Failed to create .env file" << std::endl;
    }
}
