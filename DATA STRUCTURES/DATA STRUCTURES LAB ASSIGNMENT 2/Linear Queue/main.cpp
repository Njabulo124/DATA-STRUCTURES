#include<iostream>
#include "Header.h"
using namespace std;

int main() {
    QueueOfProcess q; // Create a queue with a maximum capacity of 8

    // Read in processes from the keyboard, up to a maximum of 4 processes
    for (int i = 0; i < 8; i++) {
        int number, ttl;

        // Prompt the user for process number input
        cout << "Enter process number (1000-2000): ";
        cin >> number;

        // Check for termination condition (process number 0)
        if (number == 0) break;

        // Prompt the user for TTL (Time to Live) input
        cout << "Enter process TTL (1-25): ";
        cin >> ttl;
        cout << endl;

        // Create a Process object with the entered details
        Process process;
        process.number = number;
        process.ttl = ttl;

        // Enqueue the process into the queue
        q.enqueue(process);
    }

    // Process the queue until it's empty
    while (!q.isEmpty()) {
        // Dequeue the next process to be executed
        Process currentProcess = q.dequeue();

        // Decrement the TTL (Time to Live) of the current process
        currentProcess.ttl--;

        if (currentProcess.ttl > 0) {
            // If the process still has time left, re-enqueue it
            q.enqueue(currentProcess);
        } else {
            // The process has finished running
            cout << "Process " << currentProcess.number << " finished running.\n";
        }
    }

    return 0;
}

