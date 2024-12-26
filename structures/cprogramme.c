#include<stdio.h>
struct Product {
    char name[50];
    float price;
    int quantity;
};

float calculate_total_cost(struct Product product) {
    return product.price * product.quantity;
}

float apply_discount(float total_cost, float discount_rate) {
    return total_cost - (total_cost * discount_rate / 100);
}

int main() {
    struct Product product;
    float discount_rate;

    // Get product details
    printf("Enter product name: ");
    scanf("%s", product.name);

    printf("Enter product price: ");
    scanf("%f", &product.price);

    printf("Enter product quantity: ");
    scanf("%d", &product.quantity);

    // Calculate total cost
    float total_cost = calculate_total_cost(product);
    printf("Total cost: %.2f\n", total_cost);

    // Apply discount (adjust discount rate as needed)
    discount_rate = 10.0; // You can change this dynamically
    float discounted_price = apply_discount(total_cost, discount_rate);
    printf("Discounted price (%.2f discount): %.2f\n", discount_rate, discounted_price);
    

    return 0;
}
