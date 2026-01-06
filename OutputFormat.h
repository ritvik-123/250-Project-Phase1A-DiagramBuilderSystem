#pragma once
#include <string>

// Interface for textual/graphical representation
class OutputFormat {
public:
    virtual std::string toJSON() const = 0; // JSON representation
    virtual std::string toGUI() const = 0;  // GUI-style string
    virtual ~OutputFormat() = default;
};
