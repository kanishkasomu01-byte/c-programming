#include<stdio.h>

int main(){
    int b = 10000;
    int w = 11000;
    int total;
    if(b > 11000)
    {
        total = b - w;
        printf("Balance After Transaction = %d", total);
    }
    else
       printf("You dont have a sufficient balance");
}




#include<stdio.h>

int main(){
    int balance;
    int withdraw;
    int total;
    printf("Enter the value of balance:");
    scanf("%d",&balance);
    printf("Enter the value of withdraw:");
    scanf("%d",&withdraw);
    if(balance > withdraw)
    {
        total = balance - withdraw;
        printf("Balance After Transaction = %d", total);
        
    }
    else
       printf("You dont have a sufficient balance");
}




Enter the value of balance:100
Enter the value of withdraw:110
You dont have a sufficient balance


#include<stdio.h>

int main(){
    int marks,S1,S2,S3,S4,S5;
    printf("Enter the mark of S1:");
    scanf("%d",&S1);
    printf("Enter the mark of S2:");
    scanf("%d",&S2);
     printf("Enter the mark of S3:");
    scanf("%d",&S3);
     printf("Enter the mark of S4:");
    scanf("%d",&S4);
     printf("Enter the mark of S5:");
    scanf("%d",&S5);
    marks = S1+S2+S3+S4+S5;
    printf("The total marks:%d", marks);
    return 0;
    
}

Enter the mark of S1:98
Enter the mark of S2:96
Enter the mark of S3:95
Enter the mark of S4:96
Enter the mark of S5:97
The total marks:482


#include<stdio.h>
int main(){
    float units,cost,gst,gstcost,totalcost;
    printf("Enter the number of units:");
    scanf("%f",&units);
    printf("Enter the cost value:");
    scanf("%f",&cost);
    printf("Enter the GST value:");
    scanf("%f",&gst);
     totalcost = units*cost;
    printf("The total cost:%f\n", totalcost);
    
    gstcost =  totalcost * gst;
    printf("The GSTcost:%f\n",gstcost);

    
    totalcost=  totalcost + gstcost;
    printf("The total cost after tax = %f",totalcost);
    return 0;
    
}

Enter the number of units:5
Enter the cost value:60
Enter the GST value:0.10
The total cost:300.000000
The GSTcost:30.000000
The total cost after tax = 330.000000


#include<stdio.h>
int main(){
    int choice;
    printf(".........choose language..........\n");
    printf("1:Tamil\n");
    printf("2:English\n");
    printf("3:Hindi\n");
    printf("Enter your choice:");
    scanf("%d",&choice);
    switch(choice){
    case 1: 
            printf("The people choose Tamil for communication");
            break;
            
    case 2:     
             printf("The people choose English for communication");
             break;
    
    case 3:
             printf("The people choose Hindi for communication");
             break;
     default:
             printf("Invalid choice");
}
return 0;
}


.........choose language..........
1:Tamil
2:English
3:Hindi
Enter your choice:1
The people choose Tamil for communication


#include<stdio.h>

int main(){
    int username,Pin,pin,a;
    username = a;
    Pin = 1234;
    int success = 0;
    for(int i=0; i<3; i++){
    printf("Enter the pin:");
    scanf("%d",&pin);
       if(Pin == pin){
           printf("Do your Transaction");
          return 0;
       }
     else{
         if(i<2)
        printf("Retry\n");
     }
}
printf("Your card is blocked");
return 0;
}


Enter the pin:1289
Retry
Enter the pin:7412
Retry
Enter the pin:1568
Your card is blocked



























