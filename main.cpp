#include "DiagramFactory.h"
#include <vector>
#include <iostream>

int main() {
    std::vector<DiagramElement*> elements;

    // Create visual Graph and textual Figure
    elements.push_back(DiagramFactory::create(DiagramType::GraphVisual));
    elements.push_back(DiagramFactory::create(DiagramType::FigureTextual));

    // Drag and output in both JSON and GUI formats
    for (auto e : elements) {
        e->drag(10, 20);
        std::cout << "[JSON]: " << e->toJSON() << std::endl;
        std::cout << "[GUI]:  " << e->toGUI() << std::endl;
        delete e;
    }

    return 0;
}