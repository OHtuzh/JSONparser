#include "BoolValue.h"

namespace NAME_ME {
    BoolValue::BoolValue(bool value) : value_(value) {}

    ValueType::Type BoolValue::GetType() const noexcept {
        return ValueType::kBool;
    }

    bool BoolValue::ToBool() const {
        return value_;
    }
}
