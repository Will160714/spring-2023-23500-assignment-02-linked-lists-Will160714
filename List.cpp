#include "List.h"
#include "Node.h"

List::List(){
    head = nullptr;
}

List::~List(){
    Node *walker = head;
    Node *trailer = nullptr;
    while(walker != nullptr){
        delete trailer;
        trailer = walker;
        walker = walker -> getNext();
    }
    delete trailer;
    delete walker;
}

void List::insert(std::string data){
    Node *tmp = new Node(data);
    //Put in Beginning
    tmp -> setNext(head);
    head = tmp;
}

std::string List::toString(){
    Node *tmp = head;
    std::string result = "";
    while(tmp != nullptr){
        result = result + tmp -> getData();
        result = result + " --> ";
        tmp = tmp -> getNext();
    }
    result = result + "nullptr";
    return result;
}

std::string List::get(int loc){
    Node *tmp = head;
    int counter = 0;
    while(tmp != nullptr && counter < loc){
        tmp = tmp -> getNext();
        counter ++;
    }
    return tmp -> getData();
}

int List::length(){
    int counter = 0; 
    while(head != nullptr){
        head = head -> getNext();
        counter++;
    }
    return counter;
}

/*
  When working with Linked List, remember you have to keep check of the previous and current
*/
void List::insert(int loc, std::string data){
    Node *walker, *trailer;
    walker = head; //Start of the List
    trailer = nullptr; //Always one behind walker
    Node *newNode = new Node(data);
    while(loc > 0 && walker != 0){
        loc--;
        trailer = walker;
        walker = walker -> getNext();
    }

    if(loc > 0)
        throw std::out_of_range("Our insert is out of range.");

    if(trailer == nullptr){
        newNode -> setNext(head);
        head = newNode;
    }
    else{
        newNode -> setNext(walker);
        trailer -> setNext(newNode);
    }
}

bool List::contains(std::string item){
    Node *tmp = head; 
    while(tmp != nullptr){
        if(tmp -> getData() == item)
            return true;
        tmp = tmp -> getNext();
    }
    return false;
}

void List::remove(int loc){
    Node *walker = head;
    Node *tailer = nullptr;
    for(int x = 0; x < loc; x++){
        tailer = walker;
        walker = walker -> getNext();
    }

    tailer -> setNext(walker -> getNext());
    delete walker;
}