#pragma once

#include <string_view>

namespace demo_engine::core::log {

enum class Level {
    trace,
    info,
    warning,
    error,
};

void write(Level level, std::string_view message);

void trace(std::string_view message);
void info(std::string_view message);
void warning(std::string_view message);
void error(std::string_view message);

} // namespace demo_engine::core::log
