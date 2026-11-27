#include <iostream>
#include "Queue.h"
using namespace std;

void Queue::initializeQueue() {
    front = -1;
    rear = -1;
    count = 0;
}

void Queue::enqueuePrescription(int prescriptionID, string patientName, int medicineID, int quantity) {
    if (isQueueFull()) {
        cout << "Queue is full!" << endl;
    }
    else {
        if (isQueueEmpty()) {
            front = 0;
        }
        rear = (rear + 1) % 100;
        prescriptions[rear].prescriptionID = prescriptionID;
        prescriptions[rear].patientName = patientName;
        prescriptions[rear].medicineID = medicineID;
        prescriptions[rear].quantity = quantity;
        count++;
        cout << "Prescription added successfully." << endl;
    }
}

void Queue::dequeuePrescription() {
    if (isQueueEmpty()) {
        cout << "Queue is empty!" << endl;
    }
    else if (count == 1) {
        front = -1;
        rear = -1;
        count--;
    }
    else {
        front = (front + 1) % 100;
        count--;
    }
}

void Queue::peekPrescription() {
    if (isQueueEmpty()) {
        cout << "Queue is empty!" << endl;
    }
    else {
        cout << "Next prescription:" << endl;
        cout << "ID: " << prescriptions[front].prescriptionID << endl;
        cout << "Patient: " << prescriptions[front].patientName << endl;
        cout << "Medicine ID: " << prescriptions[front].medicineID << endl;
        cout << "Quantity: " << prescriptions[front].quantity << endl;
    }
}

void Queue::displayQueue() {
    if (isQueueEmpty()) {
        cout << "No prescriptions in the queue." << endl;
    }
    else {
        for (int i = 0; i < count; i++) {
            int index = (front + i) % 100;
            cout << "Prescription " << i + 1 << endl;
            cout << "ID: " << prescriptions[index].prescriptionID << endl;
            cout << "Patient: " << prescriptions[index].patientName << endl;
            cout << "Medicine ID: " << prescriptions[index].medicineID << endl;
            cout << "Quantity: " << prescriptions[index].quantity << endl;
            cout << "-----------------" << endl;
        }
    }
}

bool Queue::isQueueEmpty() {
    if (count == 0) {
        return true;
    }
    else {
        return false;
    }
}

bool Queue::isQueueFull() {
    if (count == 100) {
        return true;
    }
    else {
        return false;
    }
}

int Queue::queueSize() {
    return count;
}