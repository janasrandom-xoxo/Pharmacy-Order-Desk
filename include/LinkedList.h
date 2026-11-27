#pragma once
#include<Medicine.h>

struct MedicineNode {
	Medicine data;
	MedicineNode* next;
};

struct LinkedList {
	MedicineNode* head;

	void insertMedicine(Medicine med);
	void displayMedicines();
	int searchMedicine(int id);
	void updateMedicine(int id, Medicine med);
	void deleteMedicine(int id);

};

