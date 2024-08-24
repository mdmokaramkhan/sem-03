// You are using GCC
#include <iostream>
using namespace std;

#define MAX_SIZE 100

void traverseInventory(int inventory[], int size) {
    //Type your code here
    cout<<"Inventory List: ";
    for(int i=0; i<size; i++) {
        cout<<inventory[i]<<" ";
    }
    cout<<endl;
    
}

void insertItem(int inventory[], int &size, int item) {
    //Type your code here
    cout<<"Inserting Item: "<<item<<endl;
    inventory[size] = item;
    size++;
    traverseInventory(inventory, size);
    
}

void removeItem(int inventory[], int &size, int item) {
    //Type your code here
    cout<<"Removing Item: "<<item<<endl;
    for(int i=0; i<size; i++) {
        if(inventory[i] == item) {
            for(int j=i; j<size; j++){
                inventory[j] = inventory[j+1];
            }
            size--;
        }
    }
    traverseInventory(inventory, size);
    
}

int main() {
    int inventory[MAX_SIZE];
    int size, n, m;
    int newItems[MAX_SIZE];
    int deleteItems[MAX_SIZE];

    cin >> size;

    for (int i = 0; i < size; i++) {
        cin >> inventory[i];
    }

    traverseInventory(inventory, size);

    cin >> n;
    for (int i = 0; i < n; i++) {
        cin >> newItems[i];
    }
    for (int i = 0; i < n; i++) {
        insertItem(inventory, size, newItems[i]);
    }

    cin >> m;
    for (int i = 0; i < m; i++) {
        cin >> deleteItems[i];
    }
    for (int i = 0; i < m; i++) {
        removeItem(inventory, size, deleteItems[i]);
    }

    return 0;
}