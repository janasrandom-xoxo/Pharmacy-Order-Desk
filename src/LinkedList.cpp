#include"LinkedList.h"
#include<iostream>
using namespace std;

void LinkedList::insertMedicine(Medicine med) {
	MedicineNode* newNode = new MedicineNode;

	newNode->data = med;
	newNode->next = NULL;

	if (head == NULL) {
		head = newNode;
	}
	else {
		MedicineNode* temp = head;
		while (temp->next != NULL) {
			temp = temp->next;
		}
		temp->next = newNode;
	}
}

void LinkedList::displayMedicines() {
	if (head == NULL) {
		cout << "No medicines available. " << endl;
	}
	else {
		MedicineNode* temp = head;
		while (temp != NULL) {
			cout << "Medicine ID: " << temp->data.MedicineID << endl;
			cout << "Medicine Name: " << temp->data.MedicineName << endl;
			cout << "Medicine Price: " << temp->data.MedicinePrice << endl;
			cout << "Medicine Quantity: " << temp->data.MedicineQuantity << endl;

			temp = temp ->next;
		}
		cout << endl;
	}
}

int LinkedList::searchMedicine(int id) {
	MedicineNode* temp = head;
	while (temp != NULL){

		if (temp->data.MedicineID == id){
			cout << "Medicine Found" << endl;
			return 1;
		}
		temp = temp->next;
	}
	cout << "Medicine is not Found" << endl;
	return 0;
}

void LinkedList::updateMedicine(int id, Medicine med) {
	MedicineNode* temp = head;

	while (temp != NULL) {

		if (temp->data.MedicineID == id) {

			temp->data.MedicineName = med.MedicineName;
			temp->data.MedicinePrice = med.MedicinePrice;
			temp->data.MedicineQuantity = med.MedicineQuantity;

			cout << "Medicine Updated Successfully." << endl;
			return;
		}

		temp = temp->next;
	}

	cout << "Medicine is not Found." << endl;
}

void LinkedList::deleteMedicine(int id) {
	if (head == NULL) {
		cout << "No medicines available." << endl;
		return;
	}

	MedicineNode* temp = head;
	MedicineNode* prev = NULL;

	while (temp != NULL) {

		if (temp->data.MedicineID == id) {

			if (prev == NULL) {
				head = temp->next;
			}
			else {
				prev->next = temp->next;
			}

			delete temp;

			cout << "Medicine Deleted Successfully." << endl;
			return;
		}

		prev = temp;
		temp = temp->next;
	}

	cout << "Medicine is not Found." << endl;
}