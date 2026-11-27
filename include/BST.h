#pragma once
#include  "Medicine.h"

struct MedicineTreeNode
 {   
    Medicine data;
    MedicineTreeNode* left;
    MedicineTreeNode* right;
};
struct BST
   {
    MedicineTreeNode* root = nullptr;
    void insertBST (Medicine medicine);
    bool searchBST (int medicineID);
    void deleteBST (int medicineID);
    void displayInOrder();
    void displayPreOrder();
    void displayPostOrder();
    bool isDuplicateID (int medicineID);
   };

