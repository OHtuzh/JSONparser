//
// Created by OHtuz on 2/5/2023.
//

#include "StringValue.h"

namespace NAME_ME {
    StringValue::StringValue(std::string text) noexcept:
        text_(std::move(text)) {}

    ValueType::Type StringValue::GetType() const noexcept {
        return ValueType::kString;
    }

    const std::string& StringValue::ToString() const {
        return text_;
    }

}
