#pragma once
#include "DiagramBuildDirector.h"
#include "VisualGraphBuilder.h"
#include "TextualGraphBuilder.h"
#include "VisualFigureBuilder.h"
#include "TextualFigureBuilder.h"

// Types of elements to create
enum class DiagramType { GraphVisual, GraphTextual, FigureVisual, FigureTextual };

// Factory to build DiagramElements using the appropriate builder
class DiagramFactory {
public:
    static DiagramElement* create(DiagramType type) {
        DiagramBuildDirector director;
        switch (type) {
            case DiagramType::GraphVisual:
                director.setBuilder(&VisualGraphBuilder::getInstance());
                break;
            case DiagramType::GraphTextual:
                director.setBuilder(&TextualGraphBuilder::getInstance());
                break;
            case DiagramType::FigureVisual:
                director.setBuilder(&VisualFigureBuilder::getInstance());
                break;
            case DiagramType::FigureTextual:
                director.setBuilder(&TextualFigureBuilder::getInstance());
                break;
        }
        return director.construct();
    }
};