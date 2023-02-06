#pragma once

#include "../Interfaces/IValue.h"

#include <variant>

namespace NAME_ME {
    class NumberValue : IValue {
     private:
        const std::variant<int64_t, long double> number_;
     public:
        explicit NumberValue(std::variant<int64_t, long double> number) noexcept;

        [[nodiscard]] ValueType::Type GetType() const noexcept override;
        [[nodiscard]] int64_t ToInt() const override;
        [[nodiscard]] long double ToFloat() const override;
    };
}
