#pragma once
#include "DiagramBuilder.h"
#include "Graph.h"

// Singleton Textual Builder for Graphs
class TextualGraphBuilder : public DiagramBuilder {
private:
    Graph* graph;
    TextualGraphBuilder() : graph(nullptr) {}
public:
    static TextualGraphBuilder& getInstance() {
        static TextualGraphBuilder instance;
        return instance;
    }

    void createNewElement() override {
        graph = new Graph();
    }

    void calc() override {
        std::cout << "[Textual] ";
        graph->calc();
    }

    void draw() override {
        std::cout << "[Textual] ";
        graph->draw();
    }

    DiagramElement* getResult() override {
        return graph;
    }
};