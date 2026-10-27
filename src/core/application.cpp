#include "core/application.hpp"

#include "core/log.hpp"

#include <string>

namespace demo_engine::core {

Application::Application(ApplicationConfig config)
    : config_{config} {}

int Application::run() {
    log::info(std::string{"Starting "} + std::string{config_.name});
    log::trace("Application foundation smoke path is alive");
    log::info("Shutting down");

    return 0;
}

} // namespace demo_engine::core

