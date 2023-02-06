#include "NumberValue.h"

namespace NAME_ME {
    NumberValue::NumberValue(std::variant<int64_t, long double> number) noexcept:
        number_(number) {}

    ValueType::Type NumberValue::GetType() const noexcept {
        return (number_.index() == 0 ? ValueType::kInt : ValueType::kDouble);
    }

    int64_t NumberValue::ToInt() const {
        if (GetType() != ValueType::kInt) {
            throw WrongTypeException(GetType(), ValueType::kInt);
        }
        return std::get<int64_t>(number_);
    }
    long double NumberValue::ToFloat() const {
        if (GetType() != ValueType::kDouble) {
            throw WrongTypeException(GetType(), ValueType::kDouble);
        }
        return std::get<long double>(number_);
    }
}
