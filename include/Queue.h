#pragma once
#include "Medicine.h"
#include <string>
using namespace std;
struct Prescription {
    int prescriptionID;
    string patientName;
    int medicineID;
    int quantity;
};
struct Queue {
    Prescription prescriptions[100];
    int front = -1;
    int rear = -1;
    int count = 0;

    void initializeQueue();
    void enqueuePrescription(int prescriptionID, string patientName, int medicineID, int quantity);
    void dequeuePrescription();
    void peekPrescription();
    void displayQueue();
    bool isQueueEmpty();
    bool isQueueFull();
    int queueSize();
};