#ifndef STRINGPP_HPP
#define STRINGPP_HPP

#include <cinttypes>
#include <string>
#include <vector>

namespace stringpp
{
    const std::string WHITESPACE = "\n\r\t\f\v ";
    std::string ltrim(const std::string &);
    std::string rtrim(const std::string &);
    std::string trim(const std::string &);
    std::string repeat(const std::string &, const uint32_t &);
    bool strcmp(const std::string &, const std::string &);
    bool strcmp(const std::string &, const std::vector<std::string> &);
}

#endif