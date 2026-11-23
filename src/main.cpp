// main.cpp — entry point. Wires config and subsystems together.

#include "llmrouterfree/settings.h"
#include "llmrouterfree/router.h"
#include "llmrouterfree/providers.h"
#include "llmrouterfree/fallback.h"
#include <csignal>
#include <memory>

namespace { std::atomic<bool> g_running{true}; void on_signal(int) { g_running.store(false); } }

int main(int argc, char** argv) {
    std::signal(SIGINT, on_signal);
    std::signal(SIGTERM, on_signal);

    llmrouterfree::Settings settings = llmrouterfree::Settings::load_default();
    llmrouterfree::Router router(settings.store_path);
    llmrouterfree::Providers providers(settings.store_path);
    llmrouterfree::Fallback fallback(settings.store_path);
    std::fprintf(stderr, "[llm-router-free] ready\n");

    while (g_running.load()) {
        // main loop: pump subsystems
        break;
    }
    return 0;
}
