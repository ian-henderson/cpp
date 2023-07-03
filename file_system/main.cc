#include <cstdlib>
#include <filesystem>
#include <fstream>
#include <iostream>
#include <sstream>
#include <string>

int main()
{
    std::string main_code;

    std::filesystem::path main_path = std::filesystem::absolute("main.cc");

    std::ifstream main_file;
    main_file.exceptions(std::ifstream::failbit | std::ifstream::badbit);

    try
    {
        // open main.cc
        main_file.open(main_path);

        // read file buffer's contents into stream
        std::stringstream main_stream;
        main_stream << main_file.rdbuf();

        // close file handlers
        main_file.close();

        // convert stream into string
        main_code = main_stream.str();
    }
    catch (std::ifstream::failure &error)
    {
        std::cout << "Error: failed to read main.cc\n" << error.what() << "\n";
        exit(EXIT_FAILURE);
    }

    std::cout << main_code;

    exit(EXIT_SUCCESS);
}
