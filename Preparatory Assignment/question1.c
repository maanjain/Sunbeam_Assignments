#include <stdio.h>

void main (){


        int n ; 
        printf("Number of Natural Number:");
    scanf("%d",&n);
    
    // store N number
    int arr[n];
    
    //Take input from it 
    
    for(int i =0; i < n ; i ++){
        printf("Enter Numbers");
        scanf("%d",&arr[i]);
    }
    // find maximum from it
    int max = arr[0]; 

    for (int i = 1; i < n; i++) {
        
        if (arr[i] > max) {
            max = arr[i];
        }
    }
    printf("The maximum is : %d",max);

}