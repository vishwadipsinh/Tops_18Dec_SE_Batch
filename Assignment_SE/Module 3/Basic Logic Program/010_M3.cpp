/*(10)find the area of a rectangular prism formula : A=2(wl+hl+hw)
*/

#include <stdio.h>

int main() {
    int Area,l,w,h;  //l=length,w=width,h=height
    
    printf("enter the value of l:");
    scanf("%d",&l);
    
    printf("enter the value of w:");
    scanf("%d",&w);
    
    printf("enter the value of h:");
    scanf("%d",&h);
    
    //Formula for finding Area of Rectangular Prism A=2(wl+hl+hw)
    Area= 2*(w*l+h*l+h*w);
    printf("\n The Area of a Rectangular prism is %d",Area);
    
    

    return 0;
}
