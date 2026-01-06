#pragma once
#include "DiagramElement.h"

// Abstract Builder Interface
class DiagramBuilder {
public:
    virtual void createNewElement() = 0;
    virtual void calc() = 0;
    virtual void draw() = 0;
    virtual DiagramElement* getResult() = 0;
    virtual ~DiagramBuilder() = default;
};