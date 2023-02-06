#include "WrongTypeException.h"

namespace NAME_ME {
    std::string WrongTypeException::generateMessage(ValueType::Type actual_type,
                                                    ValueType::Type dest_type) const noexcept {
        return "Wrong type. Trying to cast to [" + ValueType::toString(dest_type_) + "]" + ", but actual type is ["
            + ValueType::toString(actual_type);
    }

    WrongTypeException::WrongTypeException(ValueType::Type actual_type, ValueType::Type dest_type)
        :
        actual_type_(actual_type),
        dest_type_(dest_type),
        message_(generateMessage(actual_type, dest_type)) {}

    const char* WrongTypeException::what() const noexcept {
        return message_.c_str();
    }

    ValueType::Type WrongTypeException::getActualType() const noexcept {
        return actual_type_;
    }

    ValueType::Type WrongTypeException::getDestType() const noexcept {
        return dest_type_;
    }
}
