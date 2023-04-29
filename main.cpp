#include <iostream>
#include "Stack.hpp"
#include "ArrayStack.hpp"
#include "LinkedListStack.hpp"

int main()
{
    std::cout << "\nStack implementation using array\n";

    // ArrayStack initialized
    ArrayStack A(5);
    std::cout << "\nArrayStack initaialized\n";

    std::cout << "\nPushing into stack: 5, 6, 7 , 8, 9, 10\n";

    std::cout << "Pushing: 5\n";
    A.push(5);

    std::cout << "Pushing: 6\n";
    A.push(6);

    std::cout << "Pushing: 7\n";
    A.push(7);

    std::cout << "Pushing: 8\n";
    A.push(8);

    std::cout << "Pushing: 9\n";
    A.push(9);

    std::cout << "Pushing: 10\n";
    A.push(10);

    std::cout << "\nElement at top of stack: " << A.top() << std::endl;

    std::cout << "\nPopping elements:\n";
    std::cout << "popped: " << A.pop() << std::endl;
    std::cout << "popped: " << A.pop() << std::endl;

    std::cout << "\nElement at top of stack: " << A.top() << std::endl;

    std::cout << "\nStack implementation using linked list\n";

    // LinkedListStack initialized
    LinkedListStack L;
    std::cout << "\nLinkedListStack initialized: \n";

    std::cout << "\nPushing into stack: 0, 1, 2, 3\n";

    std::cout << "Pushing: 0\n";
    L.push(0);

    std::cout << "Pushing: 1\n";
    L.push(1);

    std::cout << "Pushing: 2\n";
    L.push(2);

    std::cout << "Pushing: 3\n";
    L.push(3);

    std::cout << "\nElement at top of stack: " << L.top() << std::endl;

    std::cout << "\nPopping elements:\n";
    std::cout << "popped: " << L.pop() << std::endl;
    std::cout << "popped: " << L.pop() << std::endl;

    std::cout << "\nElement at top of stack: " << L.top() << std::endl;
}