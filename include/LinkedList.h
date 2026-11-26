#programa once
#include<Medicine.h>

struct MedicineNode {
	Medicine data;
	MedicineNode* next;
};

struct LinkedList {
	Medicine* head;

	void insertMedicine();
	void displayMedicines();
	bool searchMedincine();
	bool updateMedicine();
	bool deleteMedicine();

};

