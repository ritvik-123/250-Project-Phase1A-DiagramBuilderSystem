#pragma once
#include "DiagramBuilder.h"
#include "Graph.h"

// Singleton Visual Builder for Graphs
class VisualGraphBuilder : public DiagramBuilder {
private:
    Graph* graph;
    VisualGraphBuilder() : graph(nullptr) {}
public:
    static VisualGraphBuilder& getInstance() {
        static VisualGraphBuilder instance;
        return instance;
    }

    void createNewElement() override {
        graph = new Graph();
    }

    void calc() override {
        std::cout << "[Visual] ";
        graph->calc();
    }

    void draw() override {
        std::cout << "[Visual] ";
        graph->draw();
    }

    DiagramElement* getResult() override {
        return graph;
    }
};