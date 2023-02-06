#pragma once

#include "../Interfaces/IValue.h"

namespace NAME_ME {
    class NullValue : public IValue {
     public:
        NullValue() = default;

        [[nodiscard]] ValueType::Type GetType() const noexcept override;
    };
}
