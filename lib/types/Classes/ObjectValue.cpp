#include "ObjectValue.h"

namespace NAME_ME {
    ObjectValue::ObjectValue(ObjectType object) noexcept
        : object_(std::move(object)) {}

    ValueType::Type ObjectValue::GetType() const noexcept {
        return ValueType::kObject;
    }

    const ObjectType & ObjectValue::ToUnorderedMap() const {
        return object_;
    }
}
