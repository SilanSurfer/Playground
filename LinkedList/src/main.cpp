#include <iostream>
#include "LinkedList.hpp"

int main(int argc, char* argv[])
{

    LinkedList<int> testList;
    testList.insertAtBeginning(2);
	testList.insertAtBeginning(3);
    testList.insertAtBeginning(4);
    testList.print();
    testList.insertAtEnd(5);
    testList.print();
    std::cout << "Deleted node: " << testList.deleteLast() << std::endl;
    testList.print();
    return 0;
}
