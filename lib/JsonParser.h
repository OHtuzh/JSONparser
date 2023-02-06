#pragma once

#include "tyoes/IObject.h"

#include <string>
#include <filesystem>

namespace NAME_ME {
    IObject parse(const std::string& data);
    IObject parse(std::filesystem::path path);
}
