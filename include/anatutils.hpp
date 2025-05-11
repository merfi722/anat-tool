#ifndef ANATUTILS_HPP
#define ANATUTILS_HPP


#include <string>
#include <filesystem>

namespace fs = std::filesystem;

namespace anatutils {

void createFile(const std::string& path, const std::string& content);

void createDirectory(const std::string& path);

void initProject(const std::string& projectName);

bool writeFile(const std::string& filepath, const std::string& content);

}
#endif