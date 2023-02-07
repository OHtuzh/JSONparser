#pragma once

#include "../Interfaces/IValue.h"

namespace NAME_ME {
    class ArrayValue : public IValue {
     public:
        explicit ArrayValue(std::vector<IValue> array) noexcept;

        [[nodiscard]] ValueType::Type GetType() const noexcept override;
        [[nodiscard]] const std::vector<IValue> & ToArray() const override;
     private:
        const std::vector<IValue> array_;
    };
}
