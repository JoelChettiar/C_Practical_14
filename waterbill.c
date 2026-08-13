#include <stdio.h>

int main()
// declaring the variables first
{
    int units,bill;
    
    // asking the user to enter the bill amount
    printf("Enter the water units consumed");
    scanf("%d", &units);

// calculation for the first slab, that is 1-100  units
    if(units<=100){
        bill=units*2;
    }

    //calculation for the second slab, that is 101 - 200 units
    else if (units<=200){
        bill = (100*2) + ((units - 100)*3);
    }

    //calculation for the third slab, that is 200 - 400 units
    else if (units<=400){
        bill = (100*2) + (100*3) + ((units - 200)*5);
    }

    //calculation for the third slab, that is above 400 units
    else {
        bill = (100 * 2) + (100 * 3) + (200 * 5) + ((units - 400) * 7);
    }

    // display the final waterbill
    printf("Your monthly bill is %d", bill);
    

    return 0;
}
