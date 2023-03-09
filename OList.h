#pragma once
#include <iostream>
#include "Node.h"

class OList{
    private:
        Node *head;
        int counter;

    public:
        OList();
        ~OList();
        void insert(std::string value);
        std::string toString();
        bool contains(std::string value);
        std::string get(int location);
        void remove(int location);
        void reverse();
        Node *getHead();
};