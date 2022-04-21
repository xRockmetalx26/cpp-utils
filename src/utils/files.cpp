#include <utils/files.h>

#include <fstream>
#include <filesystem>
#include <ranges>

std::string Files::read_file(const std::string &filename) {
    std::string str( Files::file_size(filename), '\0' );
    std::ifstream file{ filename };

    file.read(str.data(), str.size());

    return str;
};

void Files::write_file(const std::string &filename, const std::string &data, const bool app) {
    std::ofstream file{ filename, (app) ? std::ios::app : std::ios::out };

    file << data;
};

std::string Files::read_binary_file(const std::string &filename) {
    std::string str( Files::file_size(filename), 0 );
    std::ifstream file{ filename, std::ios::binary };

    file.read(str.data(), str.size());

    return str;
};

void Files::write_binary_file(const std::string &filename, const std::string &data, const bool app) {
    std::ofstream file{ filename, std::ios::binary | ((app) ? std::ios::app : std::ios::out) };

    file << data;
};

std::vector<std::string> Files::read_filenames(const std::string &path, const bool extension) {
    std::vector<std::string> filenames{};

    if(not std::filesystem::is_directory(path)) {
        return filenames;
    }

    if(extension) {
        for(const auto &filename: std::filesystem::directory_iterator(path)) {
            if(filename.is_regular_file()) {
                filenames.emplace_back(filename.path().filename().string());
            }
        }
    }
    else {
        for(const auto &filename: std::filesystem::directory_iterator(path)) {
            if(filename.is_regular_file()) {
                filenames.emplace_back(filename.path().stem().string());
            }
        }
    }

    return filenames;
}

std::size_t Files::file_size(const std::string &filename) {
    std::ifstream file{ filename };

    file.seekg(0, std::ios::end);

    return static_cast<std::size_t>(file.tellg());
}