#define DOCTEST_CONFIG_IMPLEMENT_WITH_MAIN
#include "doctest.h"
#include "OList.h"

TEST_CASE("Constructor"){
    OList *test = new OList();
    CHECK(test -> getHead() == nullptr);
}

//Cannot reference a pointer after it is deleted
TEST_CASE("Destructor"){
    OList *test = new OList;
    test -> insert("First");
    test -> insert("Second");
    test -> insert("Third");
    delete test;
    test = nullptr;
    CHECK(test == nullptr);
}

TEST_CASE("toString & Insert"){
    OList *test = new OList();
    CHECK(test -> toString() == "nullptr");
    test -> insert("");
    CHECK(test -> toString() == " --> nullptr");
    OList *test2 = new OList();
    test2 -> insert("First");
    test2 -> insert("Two");
    test2 -> insert("Three");
    CHECK(test2 -> toString() == "Three --> Two --> First --> nullptr");
}

TEST_CASE("Contains"){
    OList *test = new OList;
    test -> insert("First");
    test -> insert("Two");
    test -> insert("Three");
    CHECK(test -> contains("First"));
    CHECK(test -> contains("Two"));
    CHECK(test -> contains("Threeeeeeee") == false);
}

TEST_CASE("Get"){
    OList *test = new OList;
    test -> insert("First");
    test -> insert("Two");
    test -> insert("Three");
    CHECK(test -> get(0) == "Three");
    CHECK(test -> get(2) == "First");
    CHECK(test -> get(4) == "Invalid Index");
}


TEST_CASE("Remove"){
    OList *test = new OList;
    test -> insert("First");
    test -> insert("Two");
    test -> insert("Three");
    test -> remove(0);
    CHECK(test -> toString() == "Two --> First --> nullptr");
    test -> remove(1);
    CHECK(test -> toString() == "Two --> nullptr");
    test -> remove(10);
    CHECK(test -> toString() == "Two --> nullptr");
}

TEST_CASE("Reverse"){
    OList* test = new OList;
    test -> insert("1");
    test -> insert("2");
    test -> insert("3");
    test -> reverse();
    CHECK(test -> toString() == "1 --> 2 --> 3 --> nullptr");
    OList* test2 = new OList;
    test2 -> insert("First");
    test2 -> insert("Second");
    test2 -> reverse();
    CHECK(test2 -> toString() == "First --> Second --> nullptr");
    OList* test3 = new OList;
    test3 -> insert("0");
    CHECK(test3 -> toString() == "0 --> nullptr");
}