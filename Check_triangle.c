//This program will take 3 inputs and check construction of triangle
#include <stdio.h>
#include <stdbool.h>

bool check_triangles(float side_a, float side_b, float side_c);

int main(void){

    float side_a;
    float side_b;
    float side_c;

    printf("Input first side: ");
    scanf("%f", &side_a);

    printf("Input second side: ");
    scanf("%f", &side_b);

    printf("Input third side: ");
    scanf("%f", &side_c);

        
    if (check_triangles(side_a, side_b, side_c) == true){
        printf("Triangle can be constructed.\n");
    } 
    
    else {
        printf("Triangle can't be constructed.\n");
    }


    return 0;
}


bool check_triangles(float side_a, float side_b, float side_c){

    //Checking all sides at once
    if ((side_a < side_b + side_c) && (side_b < side_a + side_c) && (side_c < side_a + side_b)){
        return true;
    } else {
        return false;
    }

}
