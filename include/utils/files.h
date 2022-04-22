//
// Created by xRockmetalx
//

#ifndef FILES_H
#define FILES_H

#include <string>
#include <vector>

class Files {
public:

    Files() = delete;
    Files(const Files &) = delete;
    Files(const Files &&) = delete;
    Files& operator = (const Files &) = delete;
    Files& operator = (const Files &&) = delete;
    ~Files() = delete;

    static std::string read_file(const std::string &filename);
    static void write_file(const std::string &filename, const std::string &data, bool append = false);

    static std::string read_binary_file(const std::string &filename);
    static void write_binary_file(const std::string &filename, const std::string &data, bool append = false);

    static std::vector<std::string> read_filenames(const std::string &path, bool extension = true);
    static std::size_t file_size(const std::string &filename);
};

#endif // FILES_H
