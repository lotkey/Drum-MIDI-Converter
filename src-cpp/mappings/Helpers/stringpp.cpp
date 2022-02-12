#include "stringpp.hpp"

#include <cinttypes>
#include <iostream>

namespace stringpp
{
    std::string ltrim(const std::string &s)
    {
        size_t start = s.find_first_not_of(WHITESPACE);
        return (start == std::string::npos) ? s : s.substr(start);
    }

    std::string rtrim(const std::string &s)
    {
        size_t end = s.find_last_not_of(WHITESPACE);
        return (end == std::string::npos) ? "" : s.substr(0, end + 1);
    }

    std::string trim(const std::string &s)
    {
        return rtrim(ltrim(s));
    }

    std::string repeat(const std::string &s, const uint32_t &numRepetitions)
    {
        std::string result = "";
        for (unsigned int i = 0; i < numRepetitions; i++)
            result += s;
        return result;
    }

    bool strcmp(const std::string &s1, const std::string &s2)
    {
        return s1 == s2;
    }

    bool strcmp(const std::string &s, const std::vector<std::string> &v)
    {
        for (const auto &str : v)
            if (s == str)
                return true;

        return false;
    }
}