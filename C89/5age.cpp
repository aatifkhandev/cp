#include <stdio.h>
#include <math.h>

// Function to check age and provide corresponding messages
void checkAge(int age) {
    if (age > 18) {
        printf("adult \n");
        printf("they can vote \n");
        printf("they can drive\n");
    } else {
        printf("not adult\n");
    }
    printf("thankyou\n");
}

int main() {
    int age;
    printf("Enter age: ");
    scanf("%d", &age);

    // Call the function to check the age
    checkAge(age);

    return 0;
}
