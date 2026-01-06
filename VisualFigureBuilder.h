#pragma once
#include "DiagramBuilder.h"
#include "Figure.h"

// Singleton Visual Builder for Figures
class VisualFigureBuilder : public DiagramBuilder {
private:
    Figure* figure;
    VisualFigureBuilder() : figure(nullptr) {}
public:
    static VisualFigureBuilder& getInstance() {
        static VisualFigureBuilder instance;
        return instance;
    }

    void createNewElement() override {
        figure = new Figure();
    }

    void calc() override {
        std::cout << "[Visual] ";
        figure->calc();
    }

    void draw() override {
        std::cout << "[Visual] ";
        figure->draw();
    }

    DiagramElement* getResult() override {
        return figure;
    }
};
