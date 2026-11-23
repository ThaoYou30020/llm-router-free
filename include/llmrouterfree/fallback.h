// fallback — part of llm-router-free.

#pragma once

#include <string>
#include <vector>

namespace llmrouterfree {

class Fallback {
public:
    explicit Fallback(const std::string& config_path);

    void configure(const std::string& key, const std::string& value);
    bool run();
    bool verbose() const { return verbose_; }

private:
    std::string config_path_;
    bool verbose_ = false;
};

}  // namespace llmrouterfree
