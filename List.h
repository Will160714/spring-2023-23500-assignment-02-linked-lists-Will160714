#pragma once
#include <iostream>
#include "Node.h"

class List{
    private:
        Node *head;
    public:
        List();
        ~List();
        void insert(std::string data);
        std::string toString(); // for testing purposes
        std::string get(int loc); //Needs Fixing
        int length(); // the # of elements 
        void insert(int loc, std::string data); //0 indexed
        bool contains(std::string item);
        void remove(int loc);
};