#pragma once

#include "../Interfaces/IValue.h"

namespace NAME_ME {
    class ObjectValue : public IValue {
     private:
        const ObjectType object_;
     public:
        explicit ObjectValue(ObjectType object) noexcept;

        [[nodiscard]] ValueType::Type GetType() const noexcept override;
        [[nodiscard]] const ObjectType& ToUnorderedMap() const override;
    };
}
