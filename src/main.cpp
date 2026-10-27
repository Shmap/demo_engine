#include "core/application.hpp"

int main(int argc, char** argv) {
    const demo_engine::core::ApplicationConfig config{
        .name = "demoEngine",
        .argc = argc,
        .argv = argv,
    };

    demo_engine::core::Application app{config};
    return app.run();
}

