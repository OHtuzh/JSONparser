#pragma once

#include "types/Interfaces/IValue.h"

#include <string>
#include <filesystem>

namespace NAME_ME {
    std::unique_ptr<IValue> parse(const std::string& data);
    std::unique_ptr<IValue> parse(std::filesystem::path path);
}
