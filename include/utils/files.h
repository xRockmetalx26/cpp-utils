//
// Created by xRockmetalx
//

#ifndef FILES_H
#define FILES_H

#include <string>
#include <vector>

namespace Files {
    std::string read_file(const std::string &filename);
    void write_file(const std::string &filename, const std::string &data, bool append = false);

    std::string read_binary_file(const std::string &filename);
    void write_binary_file(const std::string &filename, const std::string &data, bool append = false);

    std::vector<std::string> read_filenames(const std::string &path, bool extension = true);
    std::vector<std::string> read_filenames_include(const std::string &path, const std::string &format, bool extension = true);
    std::vector<std::string> read_filenames_exclude(const std::string &path, const std::string &format, bool extension = true);

    std::size_t file_size(const std::string &filename);
};

#endif // FILES_H
