#pragma once
#include "DiagramBuilder.h"
#include "Figure.h"

// Singleton Textual Builder for Figures
class TextualFigureBuilder : public DiagramBuilder {
private:
    Figure* figure;
    TextualFigureBuilder() : figure(nullptr) {}
public:
    static TextualFigureBuilder& getInstance() {
        static TextualFigureBuilder instance;
        return instance;
    }

    void createNewElement() override {
        figure = new Figure();
    }

    void calc() override {
        std::cout << "[Textual] ";
        figure->calc();
    }

    void draw() override {
        std::cout << "[Textual] ";
        figure->draw();
    }

    DiagramElement* getResult() override {
        return figure;
    }
};