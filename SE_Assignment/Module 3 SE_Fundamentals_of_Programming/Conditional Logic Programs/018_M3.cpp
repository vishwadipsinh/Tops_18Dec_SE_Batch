#include <stdio.h>

int main() {
    float buyingprice, sellingprice, profit, loss;

    
    printf("Enter the buying price: ");
    scanf("%f", &buyingprice);

    
    printf("Enter the selling price: ");
    scanf("%f", &sellingprice);

    
    if (sellingprice > buyingprice) {
        profit = sellingprice - buyingprice;
        printf("Profit: %.2f", profit);
    } else if (sellingprice < buyingprice) {
        loss = buyingprice - sellingprice;
        printf("Loss: %.2f", loss);
    } else {
        printf("No profit, no loss.");
    }

    return 0;
}
