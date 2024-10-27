// include namesapce 
#include <stdio.h>
#include <string.h>
#include <math.h>

int main(){

    //var declaration 
    int count, temp;
    const int trees =20;
    const int max_mushrooms = 50; 
    int stop_collecting = 0;

    int n_flower, n_mushroom; 
    int sum_flower = 0;
    int total_mushroom = 0;
    int extra_mushroom = 0;


    // step 1 marking 20 trees 

    printf("We are starting step number 1 \n");
    printf("------------------------------\n");
    for (count = 0; count < trees; count++)
    {
        printf("marking tree number %d \n", count+1);
    }
    printf("End of step 1 \n ");
    printf("------------------------------\n");

    // step 2 
    printf("We are starting step number 2 \n");
    printf("------------------------------\n");
    temp = 20;
    for(count=0; count < trees; count++)
    {
        
        printf("What is the number of collected flowers collected at tree number %d \n", temp);
        scanf("%d",&n_flower);
        sum_flower = sum_flower+n_flower;
        temp = temp -1;
        
    }
        printf("The total muber of collected flowers is : %d  \n", sum_flower);

    printf("End of step 2 \n ");
    printf("------------------------------\n");

    // step 3 
    printf("We are starting step number 3 \n");
    printf("------------------------------\n");

    for (count = 0; count < trees; count++)
    {
        if (total_mushroom< max_mushrooms)
        {
            printf("What is the number of collected mushrooms at tree number %d \n", count+1);
            scanf("%d", &n_mushroom);
            total_mushroom = total_mushroom+n_mushroom;
        }
        
        if (total_mushroom > max_mushrooms)
        {
            extra_mushroom = total_mushroom - max_mushrooms;
            total_mushroom = max_mushrooms; // to stop the condition 
            printf("You reached the total number of 50 mushrooms, you can leave %d remaining \n", extra_mushroom);
            stop_collecting = 1;
        }

        if (stop_collecting = 1 && count<trees)
        {
            printf("Going to tree number %d \n", count+1);
        }
    }

    if (total_mushroom < max_mushrooms )
    {
    printf("You reached the total number of %d mushrooms \n", total_mushroom);
    }
    
    
    printf("End of Step 3");


}
