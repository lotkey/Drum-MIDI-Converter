#include <cinttypes>
#include <iostream>

#include "stringpp.hpp"

std::string stringpp::ltrim(const std::string& s) {
    size_t start = s.find_first_not_of(WHITESPACE);
    return (start == std::string::npos) ? "" : s.substr(start);
}

std::string stringpp::rtrim(const std::string &s)
{
    size_t end = s.find_last_not_of(WHITESPACE);
    return (end == std::string::npos) ? "" : s.substr(0, end + 1);
}
 
std::string stringpp::trim(const std::string &s) {
    return rtrim(ltrim(s));
}

std::string stringpp::repeat(const std::string& s, const uint32_t& numRepetitions) {
    std::string result = "";
    for (unsigned int i = 0; i < numRepetitions; i++)
        result += s;
    return result;
}