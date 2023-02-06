#pragma once

#include "../Interfaces/IValue.h"

namespace NAME_ME {
    class StringValue : public IValue {
     private:
        const std::string text_;
     public:
        explicit StringValue(std::string text) noexcept;

        [[nodiscard]] ValueType::Type GetType() const noexcept override;
        [[nodiscard]] const std::string& ToString() const override;
    };

}
