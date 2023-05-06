#include <iostream>
#include "ArrayQueue.hpp"
#include "LinkedList.hpp"
#include "LinkedListQueue.hpp"

int main()
{
    // ArrayQueue
    ArrayQueue A(5);
    std::cout << "\nArrayQueue initialized\n";

    std::cout << "\nEnqueuing 2\n";
    A.enqueue(2);

    std::cout << "Enqueuing 3\n";
    A.enqueue(3);

    std::cout << "Enqueuing 4\n";
    A.enqueue(4);

    std::cout << "\nFirst element of queue:\t";
    std::cout << A.front() << std::endl;

    std::cout << "Last element of queue:\t";
    std::cout << A.back() << std::endl;

    std::cout << "\nDequeued first element\n";
    A.dequeue();

    std::cout << "First element of queue:\t";
    std::cout << A.front() << std::endl;

    // LinkedListQueue
    LinkedListQueue L;
    std::cout << "\nLinkedListQueue initialized\n";

    std::cout << "\nEnqueuing 8\n";
    L.enqueue(8);

    std::cout << "Enqueuing 9\n";
    L.enqueue(9);

    std::cout << "Enqueuing 10\n";
    L.enqueue(10);

    std::cout << "Enqueuing 11\n";
    L.enqueue(11);

    std::cout << "\nFirst element of queue:\t";
    std::cout << L.front() << std::endl;

    std::cout << "Last element of queue:\t";
    std::cout << L.back() << std::endl;

    std::cout << "\nDequeued first element\n";
    L.dequeue();

    std::cout << "First element of queue:\t";
    std::cout << L.front() << std::endl;
}