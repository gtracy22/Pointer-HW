#include <stdio.h>
int main(void) {
    int score = 80;
    int *ptr; 
    ptr = &score;
    printf("Your score is %d\n" , score);

    printf("Your memory for that score is %p\n", (void *)&score);

    printf("Your memory for ptr is %p\n", (void *)ptr);

    printf("Your score for *ptr is %d\n", *ptr);
    *ptr =95;
    
    printf("Updated score %d\n", score);
}
/*ptr holds the memory of score so when it modifies that value it changes the memory location
 so it overwrites it 
*/