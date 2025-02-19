#include <stdio.h>
#include <stdlib.h>

struct digit {
    int num;
    struct digit *next;
};

struct digit *createDigit(int dig);
struct digit * append(struct digit * end, struct digit * newDigptr);
void printNumber(struct digit *start);
void freeNumber(struct digit *start);
struct digit *readNumber(void);
int divisibleByThree(struct digit *start);
struct digit * searchNumber(struct digit * start, int number);
int changeThrees(struct digit * start);
struct digit * reverseNumber(struct digit * start);
struct digit * insertAtFront(struct digit * start, struct digit * newptr);

int main(void) {
    struct digit *start;
    struct digit *backwards;
    struct digit *sorted;
    // struct digit *ptr;
    // int searchNum = 5;

    
    start = readNumber();
    printf("The number ");
    printNumber(start);

    // reverse the number
    backwards = reverseNumber(start);
    printNumber(backwards);

    sorted = sortedCopy(start);
    printNumber(sorted);

    // Change all 3s to 9s
    // printf("was modified in %d places.\n", changeThrees(start));
    // printf("The new number is ");
    // printNumber(start);

    // Search for a number
    // ptr = searchNumber(start, searchNum);
    // if (ptr != NULL) {
    //     printf("contains the number %d.\n", searchNum);
    // } else {
    //     printf("does not contain the number %d.\n", searchNum);
    // }

    // Check if divisible by 3
    // if (divisibleByThree(start)) 
    //     printf("is divisible by 3.\n");
    // else
    //     printf("is not divisible by 3.\n");
    
    
    
    freeNumber(start);
    freeNumber(backwards);
    freeNumber(sortedCopy);
    return 0;
}

struct digit *createDigit(int dig) {
    struct digit *ptr;
    ptr = (struct digit *) malloc(sizeof(struct digit));
    ptr->num = dig;
    ptr->next = NULL;
    return ptr;
}

struct digit * append(struct digit * end, struct digit * newDigptr) {
    end->next = newDigptr;
    return(end->next);
}

void printNumber(struct digit *start) {
    struct digit * ptr = start;
    while (ptr!=NULL) {
        printf("%d", ptr->num);
        ptr = ptr->next;
    }
    printf("\n");
}

void freeNumber(struct digit *start) {
    struct digit * ptr = start;
    struct digit * tmp;
    while (ptr!=NULL) {
        tmp = ptr->next;
        free(ptr);
        ptr = tmp;
    }
}

struct digit *readNumber(void) {
    char c;
    int d;
    struct digit *start, *end, *newptr;
    start = NULL;
    scanf("%c", &c);
    while (c != '\n') {
        d = c-48;
        newptr = createDigit(d);
        if (start == NULL) {
            start = newptr;
            end = start;
        } else {
            end = append(end, newptr);
        }
        scanf("%c", &c);
    }
    return(start);
}

int divisibleByThree(struct digit *start) {
    int sum = 0;
    struct digit *ptr = start;
    while (ptr != NULL) {
        sum += ptr->num;
        ptr = ptr->next;
    }
    return (sum % 3 == 0);
}

struct digit * searchNumber(struct digit * start, int number) {
    struct digit * ptr = start;
    while (ptr != NULL) {
        if (ptr->num == number) {
            return ptr;
        }
        ptr = ptr->next;
    }
    return NULL;
}

int changeThrees(struct digit * start) {
    struct digit * ptr = start;
    int count = 0;

    while (ptr != NULL) {
        if (ptr->num == 3) {
            ptr->num = 9;
            count++;
        }
        ptr = ptr->next;
    }

    return count;

}

struct digit * insertAtFront(struct digit * start, struct digit * newptr) {
    newptr->next = start;
    return(newptr);
}

struct digit * reverseNumber(struct digit * start) {

    struct digit * ptr = start;
    struct digit * bstart = NULL;
    struct digit * newdigit;

    if (start != NULL) {
        bstart = createDigit(start->num);
        ptr = ptr->next;
    }
    
    while (ptr != NULL) {
        newdigit = createDigit(ptr->num);
        bstart = insertAtFront(bstart, newdigit);
        ptr = ptr->next;
    }
    return(bstart);
}