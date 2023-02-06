#pragma once

#include "../Enums/ValueType.h"
#include "../../exceptions/WrongTypeException.h"

#include <vector>
#include <unordered_map>
#include <memory>

namespace NAME_ME {
    class IValue;

    typedef std::unordered_map<std::string, std::unique_ptr<IValue>> ObjectType;

    class IValue {
     public:
        [[nodiscard]] virtual ValueType::Type GetType() const noexcept = 0;

        [[nodiscard]] virtual bool IsNull() const noexcept;
        [[nodiscard]] virtual bool ToBool() const;
        [[nodiscard]] virtual int64_t ToInt() const;
        [[nodiscard]] virtual long double ToFloat() const;
        [[nodiscard]] virtual const std::string& ToString() const;
        [[nodiscard]] virtual const std::vector<IValue>& ToArray() const;
        [[nodiscard]] virtual const ObjectType& ToUnorderedMap() const;
    };
}
