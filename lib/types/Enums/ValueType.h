#pragma once

#include <string>

namespace NAME_ME {
    class ValueType {
     public:
        enum Type {
            kNull,
            kBool,
            kInt,
            kDouble,
            kString,
            kArray,
            kObject
        };
        
        static std::string toString(Type type) noexcept;
    };
}
