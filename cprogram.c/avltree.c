#include <stdio.h>

struct Product {
    int id;
    char name[50];
    float price;
};

int main() {
    // Array of structures to store the inventory
    struct Product store[3] = {
        {101, "Apple", 0.50},
        {102, "Milk", 1.20},
        {103, "Bread", 1.50}
    };

    printf("Welcome to the Store!\n");
    for(int i = 0; i < 3; i++) {
        printf("ID: %d | Item: %s | Price: $%.2f\n", store[i].id, store[i].name, store[i].price);
    }
    return 0;
}
