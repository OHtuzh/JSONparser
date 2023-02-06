#pragma once

#include "../types/Enums/ValueType.h"

#include <exception>

namespace NAME_ME {
    class WrongTypeException : std::exception {
     private:
        ValueType::Type actual_type_;
        ValueType::Type dest_type_;
        std::string message_;

        [[nodiscard]] std::string generateMessage(ValueType::Type actual_type,
                                                  ValueType::Type dest_type) const noexcept;

     public:
        WrongTypeException(ValueType::Type actual_type, ValueType::Type dest_type);

        [[nodiscard]] const char* what() const noexcept override;

        [[nodiscard]] ValueType::Type getActualType() const noexcept;

        [[nodiscard]] ValueType::Type getDestType() const noexcept;
    };
}
