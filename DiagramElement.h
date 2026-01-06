#pragma once
#include <string>
#include "OutputFormat.h"

// Base class for all diagram elements (Graph, Figure)
class DiagramElement : public OutputFormat {
public:
    virtual void calc() = 0;           // Perform calculation
    virtual void draw() = 0;           // Render on screen (stub)
    virtual void drag(int dx, int dy) = 0; // Move the object
    virtual ~DiagramElement() = default;
};