#include "Node.h"
#include <iostream>

Node::Node(){
    this -> next = nullptr;
    this -> previous = nullptr;
}

Node::Node(std::string data){
    this -> data = data;
    this -> next = nullptr;
    this -> previous = nullptr;
}

Node::Node(std::string data, Node *next){
    this -> data = data;
    this -> next = next;
    this -> previous = nullptr;
}

void Node::setData(std::string data){
    this -> data = data;
}

void Node::setNext(Node *next){
    this -> previous = this -> next;
    this -> next = next;
}

std::string Node::getData(){
    return data;
}

Node *Node::getNext(){
    return next;
}

Node* Node::getPrevious(){
    return previous;
}