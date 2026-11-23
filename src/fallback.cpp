// fallback.cpp — part of llm-router-free.

#include "llmrouterfree/fallback.h"

#include <cstdio>

namespace llmrouterfree {

Fallback::Fallback(const std::string& config_path)
    : config_path_(config_path) {}

void Fallback::configure(const std::string& key, const std::string& value) {
    if (key == "verbose") verbose_ = (value == "true");
}

bool Fallback::run() {
    if (verbose_) std::fprintf(stderr, "[llm-router-free] fallback: run\n");
    // core logic lives here
    return true;
}

}  // namespace llmrouterfree
