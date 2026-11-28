#include"BST.h"
#include<iostream>
using namespace std;

bool BST::searchBST(int medicineID) {
    MedicineTreeNode* temp = root;

    while (temp != NULL){

        if (temp->data.MedicineID == medicineID){
            cout << "Medicine Found. " << endl;
            return true;
        }

        else if (medicineID < temp->data.MedicineID){
            temp = temp->left;
        }

        else{
            temp = temp->right;
        }
    }
    cout << "Medicine not Found. " << endl;
    return false;

}
bool BST::isDuplicateID(int medicineID) {
    MedicineTreeNode* temp = root;

    while (temp != NULL) {
        if (temp->data.MedicineID == medicineID) {
            return true;
        }
        else if (medicineID < temp->data.MedicineID) {
            temp = temp->left;
        }
        else {
            temp = temp->right;
        }
    }
    return false;
}
void BST::insertBST(Medicine medicine) {

    if (isDuplicateID(medicine.MedicineID)) {
        cout << "Medicine ID already exists." << endl;
        return;
    }

    MedicineTreeNode* newNode = new MedicineTreeNode;
    newNode->data = medicine;
    newNode->left = NULL;
    newNode->right = NULL;

    if (root == NULL) {
        root = newNode;
        cout << "Medicine added successfully." << endl;
        return;
    }

    MedicineTreeNode* temp = root;

    while (temp != NULL) {
        if (medicine.MedicineID < temp->data.MedicineID) {
            if (temp->left == NULL) {
                temp->left = newNode;
                break;
            }
            temp = temp->left;
        }
        else {
            if (temp->right == NULL) {
                temp->right = newNode;
                break;
            }
            temp = temp->right;
        }
    }

    cout << "Medicine added successfully." << endl;
}
