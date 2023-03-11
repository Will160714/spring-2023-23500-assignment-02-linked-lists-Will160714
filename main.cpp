#include "OList.h"

int main(){
    //Constructor
    std::cout << "Constructor" << std::endl;
    OList *test = new OList();
    std::cout << std::endl;

    //Insert
    std::cout << "Insert" << std::endl;
    test -> insert("1");
    test -> insert("2");
    test -> insert("3");
    test -> insert("4");
    std::cout << std::endl;

    //toString
    std::cout << "toString" << std::endl;
    std::cout << test -> toString() << std::endl;
    std::cout << std::endl;
    
    //Contains
    std::cout << "Contains" << std::endl;
    if(test -> contains("1"))
        std::cout << "1 is in OList" << std::endl;
    if(!(test -> contains("0")))
        std::cout << "o is NOT in OList" << std::endl;
    std::cout << std::endl;

    //Get
    std::cout << "Get" << std::endl;
    std::cout << "Element at Index 0 is " << test -> get(0) << std::endl;
    std::cout << "Element at Index 4 is " << test -> get(4) << std::endl;
    std::cout << std::endl;

    //Remove
    std::cout << "Remove" << std::endl;
    test -> remove(2);
    std::cout << test -> toString() << std::endl;
    std::cout << std::endl;

    //Reverse
    std::cout << "Reverse" << std::endl;
    test -> reverse();
    std::cout << test -> toString() << std::endl;
    return 0;
}

