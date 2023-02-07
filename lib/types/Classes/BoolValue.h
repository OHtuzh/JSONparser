#pragma once

#include "../Interfaces/IValue.h"

namespace NAME_ME {
    class BoolValue : IValue {
     public:
        explicit BoolValue(bool value);

        [[nodiscard]] ValueType::Type GetType() const noexcept override;
        [[nodiscard]] bool ToBool() const override;
     private:
        const bool value_;
    };
}
