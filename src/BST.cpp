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

void inOrderHelper(MedicineTreeNode* temp) {

    if (temp == NULL) {
        return;
    }

    inOrderHelper(temp->left);

    cout << "Medicine ID: " << temp->data.MedicineID << endl;
    cout << "Medicine Name: " << temp->data.MedicineName << endl;
    cout << "Medicine Price: " << temp->data.MedicinePrice << endl;
    cout << "Medicine Quantity: " << temp->data.MedicineQuantity << endl;
    cout << endl;

    inOrderHelper(temp->right);
}

void BST::displayInOrder() {

    if (root == NULL) {
        cout << "No medicines available." << endl;
        return;
    }

    inOrderHelper(root);
}