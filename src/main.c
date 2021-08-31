#include <stdio.h>

/* IT20206482
MID SEMESTER EXAM ASSIGNMENT
KURUNEGALA CENTER
  */

  /* only maximum 10 tickets can buy 1 user
   first class ticket price  = lkr 2000
   second class ticket price = lkr 1000
   third class ticket price = lkr 500
   cinema hall has only 100 seats
   */

int total_price; // to store sum of  all bought ticket prices
int first_class = 0; // To  store user entered ticket amount of first class ticket
int second_class = 0; // To  store user entered ticket amount of second class ticket
int third_class = 0; // To  store user entered ticket amount of third class ticket
int total_tickets = 0; // to store sum of all tickets ( include first class , second & third class)

int type; //ticket type 1=first 2=second 3=third

int first_class_price_total;  // to store calculated 1 st class ticket prices
int second_class_price_total; // to store calculated 2nd class ticket prices
int third_class_price_total; // to store calculated 3rd class ticket prices
int input = 0;

const int max_ticket_count = 10; // to limit ticket buying
const int seats = 100; // to limit seat booking



int main(void)
{

    printf("````````````````````````\n   ~ No Name Cinema ~ \n````````````````````````\n");
    printf(" -------------------------\n");
    printf("   ~ Menu Of Tickets ~\n");
    printf(" ------------------------------------\n");
    printf("  first Class Tickets lkr 2000\t= 1\n");
    printf("  Second Class Tickets lkr 1000\t= 2\n");
    printf("  Third Class Tickets lkr 500\t= 3\n");
    printf(" ------------------------------------\n");
    printf("  *Remaining Tickets :\t%d\n", seats);
    printf("  *Booking limit :\t%d\n", max_ticket_count);
    printf(" ------------------------------------\n");

    while ((seats <= 100) && (total_tickets <= 10))  // to check seat count <= 100 and minimum user ticket count <= 10 .
    {
        
        total_tickets = first_class + second_class + third_class;

        if (total_tickets < 10) {
        t:   printf(" Enter Ticket Class : "); // to get Ticket class
            scanf("%d", &type); // to store ticket class

            if (type == 0) {
                break;
            }
            else if (type == 1)
            {
                printf(" Enter Ticket Amount : "); // to store amount of first class ticket
                scanf("%d", &input);
                if (total_tickets + input <= 10) //checking total ticket cound <=10 for end the programme

                {

                    first_class = input;
                    first_class_price_total = first_class * 2000; // calculation of first class ticket price
                    total_price = total_price + first_class_price_total; // store the price
                    printf(" ---------------------------------\n  Finish ? Press (0) For INVOICE \n ---------------------------------\n");
                }

                else {

                    printf(" Maximum Ticket Count Reached\n"); // display when maximum ticket cound reached 
                    goto t;

                }
            }

            else if (type == 2)

            {
                printf(" Enter Ticket Amount : "); // to store amount of second class ticket
                scanf("%d", &input);
                if (total_tickets + input <= 10)

                {

                    second_class = input;
                    second_class_price_total = second_class * 1000; // calculation of second class ticket price
                    total_price = total_price + second_class_price_total; // store the price
                    printf(" ---------------------------------\n  Finish ? Press (0) For INVOICE \n ---------------------------------\n");

                }

                else {

                    printf(" Maximum Ticket Count Reached\n"); 
                    goto t;

                }

            }

            else if (type == 3)

            {
                printf(" Enter Ticket Amount : "); // to store amount of third class ticket
                scanf("%d", &input);
                if (total_tickets + input <= 10)

                {
                    third_class = input;
                    third_class_price_total = third_class * 500; // calculation of third class ticket price
                    total_price = total_price + third_class_price_total; // store the price
                    printf(" ---------------------------------\n  Finish ? Press (0) For INVOICE \n ---------------------------------\n");

                }

                else {

                    printf(" Maximum Ticket Count Reached\n");
                    goto t;
                    
                }

            }

            else
                printf(" Invalid Seat type\n"); // when user entered a invalid input

        }

        else

        {

            printf(" Maximum Ticket Count Reached \n");
            break;
        }

    }

    printf("\033[0;32m");

    total_tickets = first_class + second_class + third_class;


    printf("--------------------------------------------------------------\n");
    printf("                          INVOICE \n");
    printf("--------------------------------------------------------------\n");

    printf("     total First Class Tickets\t:\t%d\n", first_class);
    printf("     total Second Class Tickets\t:\t%d\n", second_class);
    printf("     total Third Class Tickets\t:\t%d\n", third_class);
    printf("     total tickets           \t:\t%d\n", total_tickets);
    printf("     Total Price Is LKR       \t:\t%d\n", total_price);
    printf(" ---------------------------------------------------------------\n");
    printf("\033[0;0m");
    
    printf("                 -----------------------------\n");
    printf("                   Thank You! Have A Nice Day\n");
    printf("                 -----------------------------\n");
    int r_ticket = seats - total_tickets;
         printf("                     Remaining Seats = %d ", r_ticket); // to display remaining seats
    

    return 0;
}
