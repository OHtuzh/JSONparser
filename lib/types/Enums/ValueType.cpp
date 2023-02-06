#include "ValueType.h"

namespace NAME_ME {

    std::string ValueType::toString(ValueType::Type type) noexcept {
        switch (type) {
            case kNull:return "Null";
            case kBool:return "Bool";
            case kInt:return "Integer";
            case kDouble:return "Double";
            case kString:return "String";
            case kArray:return "Array";
            case kObject:return "ObjectType";
        }
    }
}
