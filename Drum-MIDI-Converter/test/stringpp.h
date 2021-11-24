#ifndef STRINGPP_H
#define STRINGPP_H

#include <string>

namespace stringpp {
    const std::string WHITESPACE = "\n\r\t\f\v ";
    std::string ltrim(const std::string&);
    std::string rtrim(const std::string&);
    std::string trim(const std::string&);
}

#endif