/* Christopher Kanazeh
Assignment 4 COP 3502
Professor Whiting
*/

//Declare Libraries
#include <stdio.h>
#include <stdlib.h>

//Linked List Declaration
struct binTreeNode
{   //Declare Variables
    int data;
    struct binTreeNode * right;
    struct binTreeNode * left;
};

//void readDataFile(struct binTreeNode)

//Main Function
int main ()
{
    int choice = 0;

    struct binTreeNode* head = NULL;
    //print menu
    while(1)
    {

        printf("\n1. Generate Binary Search Tree\n");
        printf("2. Print the BST in pre-order format\n");
        printf("3. Print the BST in in-order format\n");
        printf("4. Print the BST in post-order format\n");
        printf("5. Print the BST in breadth-first formate\n");
        printf("6. Find a value in the BST\n");
        printf("7. Find the minimum value in the BST nodes\n");
        printf("8. Find t he maximum value in the BST nodes\n");
        printf("9. Calculate the average value of the BST nodes\n");
        printf("10. Find the median value of the BST nodes\n");
        printf("11. Calculate the sum of the BST nodes\n");
        printf("12. Count the number of BST nodes\n");
        printf("13. Delete a value in the BST\n");
        printf("14. Exit Program\n");

        if(scanf("%d", &choice) <= 0)
        {   //if choice is not an integer, exit and print out to only enter integers.
            printf("Enter only an Integer\n");
            exit(0);
        }
        else
        {   //switches for each case
            switch(choice)
            {
            case 1:
                readDataFile(&head);
                break;
            case 2:
                break;
            case 3:
                break;
            case 4:
                break;
            case 5:
                break;
            case 6:
                break;
            case 7:
                break;
            case 8:
                break;
            case 9:
                break;
            case 10:
                break;
            case 11:
                break;
            case 12:
                break;
            case 13:
                break;
            case 14:
                return 0;
            default:
                //if given integer is not valid, print out so
                printf("Invalid option\n");
            }
        }
    }

    return 0;

    display(head);
}
