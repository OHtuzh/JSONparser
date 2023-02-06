#include "NullValue.h"

namespace NAME_ME {
    ValueType::Type NullValue::GetType() const noexcept {
        return ValueType::kNull;
    }
}

