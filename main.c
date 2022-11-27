https://powcoder.com
代写代考加微信 powcoder
Assignment Project Exam Help
Add WeChat powcoder
https://powcoder.com
代写代考加微信 powcoder
Assignment Project Exam Help
Add WeChat powcoder
// ECE 209 - Fall 2020
// MP5 - Linked lists

#include <stdlib.h>
#include <stdio.h>

/* List data structure, and functions to be implemented.
 * These dummy versions make most tests fail -- your job
 * is to fix them.
 */
struct node {
    int data;
    struct node * next;
};

/* this function is implemented below */
/* prints list data within parentheses -- no linefeed */
void printList(struct node *);  // you may call this, if you want, to help debug your code

/* returns 1, if the list is sorted from minimum to maximum
 * returns 0, otherwise */
int checkOrder(struct node * h) {
	return -1;
}

/* returns 1, if the two lists contain the same values in the same order
 * returns 0, otherwise */
int equal(struct node * h1, struct node * h2) {
    return -1;
}

/* find and delete the minimum element of a linked list
 * returns a pointer to the head of the modified list  */
struct node * removeMin(struct node * h) {
    return NULL;
}


/*******************************************************/
/***  DO NOT CHANGE CODE BELOW THIS LINE             ***/
/*******************************************************/


struct node * makeList(int *, int);

int main() {
    int task1_1[4] = {-4, 2, 19, 25};
    int task1_2[5] = {0, 3, 7, -1, 10};
    int task2_1[8] = {22, 19, 10, 105, -1, 62, 88, 12};
    int task2_2[8] = {22, 19, 11, 105, -1, 62, 88, 12};
    int task2_3[8] = {22, 19, 10, 105, -1, 62, 88, 10};
    int task2_4[3] = {22, 19, 10};
    int task3_1[5] = {18, -2, -5, 20, 10};
    int task3_min[4] = {18, -2, 20, 10};
    int task3_2[5] = {-18, 18, -2, 20, 10};
    int task3_3[5] = {18, -2, 20, 10, -3};
    int task3_4[1] = {99};

    struct node * empty = NULL;
    struct node * list1, *list2;

    int x = -1;
    struct node * rmin;

    /* Task 1 tests */
    printf("\n*** Task 1 tests ***\n\n");
    printf("Test #1 (in order): ");
    x = checkOrder(makeList(task1_1, 4));
    if (x == 1) printf("PASS\n");
    else printf("FAIL\n");

    printf("Test #2 (not in order): ");
    x = checkOrder(makeList(task1_2, 5));
    if (x == 0) printf("PASS\n");
    else printf("FAIL\n");

    printf("Test #3 (empty): ");
    x = checkOrder(empty);
    if (x == 0) printf("PASS\n");
    else printf("FAIL\n");

    /* Task 2 tests */
    printf("\n\n*** Task 2 tests ***\n\n");
    list1 = makeList(task2_1, 8);
    list2 = makeList(task2_1, 8);
    printf("Test #1 (equal): ");
    x = equal(list1, list2);
    if (x == 1) printf("PASS\n");
    else printf("FAIL\n");

    printf("Test #2 (not equal): ");
    list2 = makeList(task2_2, 8);
    x = equal(list1, list2);
    if (x == 0) printf("PASS\n");
    else printf("FAIL\n");

    printf("Test #3 (not equal): ");
    list2 = makeList(task2_3, 8);
    x = equal(list1, list2);
    if (x == 0) printf("PASS\n");
    else printf("FAIL\n");

    printf("Test #4 (not equal, different lengths): ");
    list2 = makeList(task2_4, 0);
    x = equal(list1, list2);
    if (x == 0) printf("PASS\n");
    else printf("FAIL\n");

    printf("Test #5 (one is empty): ");
    x = equal(list1, empty);
    if (x == 0) printf("PASS\n");
    else printf("FAIL\n");

    printf("Test #6 (one is empty): ");
    x = equal(empty, list1);
    if (x == 0) printf("PASS\n");
    else printf("FAIL\n");

    printf("Test #7 (both empty): ");
    x = equal(empty, empty);
    if (x == 1) printf("PASS\n");
    else printf("FAIL\n");

    printf("\n\n***Task 3 tests***\n\n");
    list1 = makeList(task3_min, 4);

    rmin = removeMin(makeList(task3_1, 5));
    printf("Test #1 (middle): ");
    if (equal(rmin, list1) == 1) printf("PASS\n");
    else printf("FAIL\n");

    rmin = removeMin(makeList(task3_2, 5));
    printf("Test #2 (first): ");
    if (equal(rmin, list1) == 1) printf("PASS\n");
    else printf("FAIL\n");

    rmin = removeMin(makeList(task3_3, 5));
    printf("Test #3 (last): ");
    if (equal(rmin, list1) == 1) printf("PASS\n");
    else printf("FAIL\n");

    rmin = removeMin(makeList(task3_4, 1));
    printf("Test #4 (one element): ");
    if (!rmin) printf("PASS\n");
    else printf("FAIL\n");

    rmin = removeMin(empty);
    printf("Test #5 (empty): ");
    if (!rmin) printf("PASS\n");
    else printf("FAIL\n");

    printf("\n");

    return EXIT_SUCCESS;


}

struct node * makeList(int * data, int n) {

    struct node *p, *prev, *h;
    int i;

    prev = NULL;
    h = NULL;
    if (data == NULL) return h;

    for (i=0; i<n; i++) {
        p = (struct node *) malloc(sizeof(struct node));
        p->data = data[i];
        p->next = NULL;

        if (prev) prev->next = p;
        else h = p;

        prev = p;
    }
    return h;
}

void printList(struct node *h) {
    printf("(");
    for (; h; h = h->next) printf(" %d", h->data);
    printf(" )");	
}


