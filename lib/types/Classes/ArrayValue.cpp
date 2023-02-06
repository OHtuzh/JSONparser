#include "ArrayValue.h"

namespace NAME_ME {

    ArrayValue::ArrayValue(std::vector<IValue> array) noexcept
        : array_(std::move(array)) {}

    ValueType::Type ArrayValue::GetType() const noexcept {
        return ValueType::kArray;
    }

    const std::vector<IValue>& ArrayValue::ToArray() const {
        return array_;
    }
}
