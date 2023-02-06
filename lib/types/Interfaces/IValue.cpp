#include "IValue.h"

namespace NAME_ME {
    bool IValue::IsNull() const noexcept {
        return (GetType() == ValueType::kNull);
    }

    bool IValue::ToBool() const {
        throw WrongTypeException(GetType(), ValueType::kBool);
    }

    int64_t IValue::ToInt() const {
        throw WrongTypeException(GetType(), ValueType::kInt);
    }

    long double IValue::ToFloat() const {
        throw WrongTypeException(GetType(), ValueType::kDouble);
    }

    const std::string& IValue::ToString() const {
        throw WrongTypeException(GetType(), ValueType::kString);
    }

    const std::vector<IValue>& IValue::ToArray() const {
        throw WrongTypeException(GetType(), ValueType::kArray);
    }

    const std::unordered_map<std::string, IValue>& IValue::ToUnorderedMap() const {
        throw WrongTypeException(GetType(), ValueType::kObject);
    }
}
