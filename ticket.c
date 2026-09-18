//Statement: Imagine you are developing a Queue-based Online 
//           Ticket Booking System for a bus service. The system follows the 
//           FIFO (First In, First Out) principle, ensuring that passengers who 
//           book first get processed first. 
 
 //Requirements for user:
// 1. Book a Ticket. 
// 2. Process a Ticket. 
// 3. View  First passenger in the Queue. 
// 4. Display all passengers in the Queue. 
// 5. Check if the Queue is Empty or Full 
#include<stdio.h> 
#include<stdlib.h> 
#define size 10 
int front=-1,rear=-1; 
typedef struct 
{ 
     char name[20]; 
     int no; 
}passengers; 
passengers queue[size]; 
void enqueue() 
{ 
     passengers  list;  
     printf("Enter passenger name: "); 
     scanf("%s", list.name); 
     printf("Enter Ticket Number: "); 
     scanf("%d",&list.no); 
     if (rear==size-1) 
     { 
         printf("Bus is full\n"); 
     } 
     else 
 
 
     { 
         ++rear; 
         queue[rear]=list; 
         printf("Ticket Booked: %s (Ticket Number: %d)\n",list.name,list.no); 
     } 
} 
void dequeue() 
     { 
         if (rear<=front ) 
         { 
             printf("bus is empty.\n"); 
         } 
         else 
         { 
             front++; 
             printf("Processing Ticket: %s (Ticket Number: %d)\n",queue[front].name,queue[front].no); 
         } 
     } 
void view() 
     { 
         if (rear<=front) 
         { 
             printf("Bus is empty.\n"); 
         } 
         else 
         { 
              
             printf("Passengers in the Queue: \n"); 
             for(int i=front;i<=rear;i++) 
             { 
                 printf("%s (Ticket Number: %d)\n",queue[i].name,queue[i].no); 
                 } 
                 printf("\n"); 
         } 
     } 
int main() 
{ 
 
 
     int choice; 
     while(1) 
     { 
         printf("1. Add new passenger to the Queue. \n"); 
         printf("2. Process Ticket in the Queue.\n"); 
         printf("3. View next Ticket in the Queue.\n"); 
         printf("4. Show all Tickets in the Queue.\n"); 
         printf("5. Exit the Queue.\n"); 
         printf("Enter your Choice:"); 
         scanf("%d",&choice); 
         switch(choice) 
         { 
             case 1: 
             enqueue(); 
             break; 
             case 2: 
             dequeue(); 
             break; 
             case 3: 
             { 
             if (rear<=front) 
             { 
                 printf("Bus is empty.\n"); 
             } 
             else 
             { 
             printf("Next Ticket to Process: %s (Ticket Number: %d)\n",queue[rear].name,queue[rear].no); 
             } 
             } 
             break; 
             case 4: 
             view(); 
             break; 
             case 5: 
             printf("Exiting...\n"); 
             exit(0); 
             break; 
             default: 
             printf("Invalid Choice.One more Time.\n"); 
 
 
         } 
     } 
     return 0; 
} 