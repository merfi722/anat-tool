#include "anatutils.hpp"
#include "envWriter.hpp"
#include "projectStructure.hpp"
#include <iostream>
#include <string>

int main(int arguc, char* argv[]){
    if(arguc < 2 ){
        std::cerr<< "Usage:  cppinit <project_name>";
        return 1;
    }

    std::string projectName = argv[1];
    ProjectStructure::createBasicStructure(projectName);
    // std::cout << "Basic project structure created for: " << projectName << std::endl;
    EnvWriter::createEnvFile(projectName);
    // initProject(projectName);
    // std::cout << "Project " << projectName << " initialized successfully." << std::endl;

    return 0;
}