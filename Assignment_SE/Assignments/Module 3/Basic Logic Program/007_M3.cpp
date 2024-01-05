//(7)Area of Rectangle
#include <stdio.h>

int main() {
    int Area,W,L;
    
    printf("enter the value of L:");
    scanf("%d",&L);
    
    printf("enter the value of W:");
    scanf("%d",&W);
    
    
    //Area of Rectangle=Length × Width
    Area=L*W;
    printf("\nThe Area of Rectangle is %d",Area);
    
    

    return 0;
}
