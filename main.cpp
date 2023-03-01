#include "List.h"
#include "Node.h"

int main(){
    List *test = new List();
    test -> insert("one");
    std::cout << test -> toString() << std::endl;
    test -> insert("two");
    test -> insert("three");
    std::cout << test -> toString() << std::endl;
    std::cout << "Length: " << test -> length() << std::endl;
    
    //Get Function not Working
    //std::cout << "First: " << test -> get(0) << std::endl;
    //std::cout << "Second: " << test -> get(1) << std::endl;
    
    std::cout << std::endl;

    List *test2 = new List();
    test2 -> insert(0, "a");
    test2 -> insert(1, "back");
    std::cout << test2 -> toString() << std::endl;
    test2 -> remove(1);
    std::cout << test2 -> toString() << std::endl;

    if(test2 -> contains("a"))
        std::cout << "It is in the List" << std::endl;
    else
        std::cout << "Not in List" << std::endl;


    return 0;
}