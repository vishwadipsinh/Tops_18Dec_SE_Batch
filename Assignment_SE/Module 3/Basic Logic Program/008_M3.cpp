/* (08)Find circumference of Rectangle formula : C = 4 * a
NOTE:Question is WRONG, Rectangle don't have circumferences it has perimeter,Correct Formula:  P=2(l+w)
*/

#include <stdio.h>

int main() {
    int Perimeter,l,w;
    
    printf("enter the value of l:");
    scanf("%d",&l);
    
    printf("enter the value of w:");
    scanf("%d",&w);
    
    //Perimeter of Rectangle Perimeter:P=2(l+w)
    Perimeter=2*(l+w);
    printf("\nThe Perimeter of Rectangle is %d",Perimeter);
    
    

    return 0;
}






