// providers.cpp — part of llm-router-free.

#include "llmrouterfree/providers.h"

#include <cstdio>

namespace llmrouterfree {

Providers::Providers(const std::string& config_path)
    : config_path_(config_path) {}

void Providers::configure(const std::string& key, const std::string& value) {
    if (key == "verbose") verbose_ = (value == "true");
}

bool Providers::run() {
    if (verbose_) std::fprintf(stderr, "[llm-router-free] providers: run\n");
    // core logic lives here
    return true;
}

}  // namespace llmrouterfree
