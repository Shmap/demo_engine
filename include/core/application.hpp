#pragma once

#include <string_view>

namespace demo_engine::core {

struct ApplicationConfig {
    std::string_view name = "demoEngine";
    int argc = 0;
    char** argv = nullptr;
};

class Application {
public:
    explicit Application(ApplicationConfig config);

    int run();

private:
    ApplicationConfig config_;
};

} // namespace demo_engine::core
