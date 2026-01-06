#pragma once
#include "DiagramBuilder.h"

// Director that orchestrates the building process
class DiagramBuildDirector {
private:
    DiagramBuilder* builder;
public:
    void setBuilder(DiagramBuilder* b) {
        builder = b;
    }

    DiagramElement* construct() {
        builder->createNewElement();
        builder->calc();
        builder->draw();
        return builder->getResult();
    }
};