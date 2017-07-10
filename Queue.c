#include <stdio.h>

#include <stdlib.h>

int i = -1;

int arr[10];

void display();

void insertion();

void deletion();

int decision();


int main() {

    int m;

    m = decision();

    while(m > 0) {

        switch(m) {

            case 1: insertion();

                    break;

            case 2: deletion();

                    break;

            case 3: exit(0);

            default: printf("Range is 1 to 3");

        }

        m = decision();

    }

    return 0;

}

void insertion() {

    int p;

    printf("Enter an element to insert:");

    scanf("%d", &p);

    if(i >= 9) {

        printf("\nStack Overflow\n");

    } else {

        i = i + 1;

        arr[i] = p;

        printf("\nThe element is successfully inserted\n");

        display();

    }

}

int decision() {

    int n;

    printf("\nEnter your choice\n1.insert\n2.delete\n3.exit\n");

    scanf("%d", &n);

    return n;

}


void display() {

    int j;

    for (j = 0; j < 10; j++) {

        printf("%d ", arr[j]);

    }

}


void deletion() {

    int k;

    int j;
 
   for(j = 1; j <= i; j++) {

        printf("%d ", arr[j]);

    }

    for(j = 0; j < i; j++) {

        arr[j] = arr[j+1];

    }

    i = i-1;

}



