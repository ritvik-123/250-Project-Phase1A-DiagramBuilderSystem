#pragma once
#include "DiagramElement.h"
#include <iostream>

// Concrete implementation of a Graph
class Graph : public DiagramElement {
private:
    int x = 0, y = 0;
public:
    void calc() override {
        std::cout << "Calculating Graph\n";
    }

    void draw() override {
        std::cout << "Drawing Graph\n";
    }

    void drag(int dx, int dy) override {
        x += dx;
        y += dy;
        std::cout << "Dragging Graph by " << dx << "," << dy << "\n";
    }

    std::string toJSON() const override {
        return "{ \"type\": \"Graph\", \"x\": " + std::to_string(x) +
               ", \"y\": " + std::to_string(y) + " }";
    }

    std::string toGUI() const override {
        return "GUI::Graph at (" + std::to_string(x) + ", " + std::to_string(y) + ")";
    }
};
