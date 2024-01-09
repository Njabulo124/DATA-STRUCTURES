#include "Header.h"
#define size 8  // Define the maximum capacity of the queue as 8

// Constructor for QueueOfProcess
QueueOfProcess :: QueueOfProcess() {
    capacity = size;    // Set the capacity of the queue
    processes = new Process[size];  // Allocate memory for the array of processes
    front = 0;          // Initialize front index
    rear = -1;          // Initialize rear index
}

// Destructor for QueueOfProcess
QueueOfProcess :: ~QueueOfProcess() {
    delete[] processes;  // Deallocate memory when the queue is destroyed
}

// Enqueue a process into the queue
void QueueOfProcess :: enqueue(Process process) {
    processes[++rear] = process;  // Increment rear index and add the process
}

// Dequeue and return the front process from the queue
Process QueueOfProcess :: dequeue() {
    if (isEmpty()) {
        std::cout << "Queue is empty. Cannot dequeue.\n";
        Process emptyProcess;
        emptyProcess.number = -1;  // Return a default-constructed Process
        return emptyProcess;
    }
    Process frontProcess = processes[front++];  // Increment front index and retrieve the front process
    return frontProcess;
}

// Check if the queue is empty
bool QueueOfProcess :: isEmpty() {
    return front > rear;  // If front index is greater than rear index, the queue is empty
}

