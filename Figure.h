#pragma once
#include "DiagramElement.h"
#include <iostream>

// Concrete implementation of a Figure
class Figure : public DiagramElement {
private:
    int x = 0, y = 0;
public:
    void calc() override {
        std::cout << "Calculating Figure\n";
    }

    void draw() override {
        std::cout << "Drawing Figure\n";
    }

    void drag(int dx, int dy) override {
        x += dx;
        y += dy;
        std::cout << "Dragging Figure by " << dx << "," << dy << "\n";
    }

    std::string toJSON() const override {
        return "{ \"type\": \"Figure\", \"x\": " + std::to_string(x) +
               ", \"y\": " + std::to_string(y) + " }";
    }

    std::string toGUI() const override {
        return "GUI::Figure at (" + std::to_string(x) + ", " + std::to_string(y) + ")";
    }
};