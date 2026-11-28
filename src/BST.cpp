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
