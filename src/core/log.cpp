#include "core/log.hpp"

#include <chrono>
#include <format>
#include <iostream>
#include <string_view>

namespace demo_engine::core::log {
namespace {

std::string_view level_name(Level level) {
    switch (level) {
    case Level::trace:
        return "trace";
    case Level::info:
        return "info";
    case Level::warning:
        return "warning";
    case Level::error:
        return "error";
    }

    return "unknown";
}

} // namespace

void write(Level level, std::string_view message) {
    const auto now = std::chrono::system_clock::now();
    const auto seconds = std::chrono::floor<std::chrono::seconds>(now);

    std::clog << std::format("[{:%H:%M:%S}] {:>7}: {}\n", seconds, level_name(level), message);
}

void trace(std::string_view message) {
    write(Level::trace, message);
}

void info(std::string_view message) {
    write(Level::info, message);
}

void warning(std::string_view message) {
    write(Level::warning, message);
}

void error(std::string_view message) {
    write(Level::error, message);
}

} // namespace demo_engine::core::log

