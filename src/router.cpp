// router.cpp — part of llm-router-free.

#include "llmrouterfree/router.h"

#include <cstdio>

namespace llmrouterfree {

Router::Router(const std::string& config_path)
    : config_path_(config_path) {}

void Router::configure(const std::string& key, const std::string& value) {
    if (key == "verbose") verbose_ = (value == "true");
}

bool Router::run() {
    if (verbose_) std::fprintf(stderr, "[llm-router-free] router: run\n");
    // core logic lives here
    return true;
}

}  // namespace llmrouterfree
