#include <stdio.h>
#include <stdlib.h>



//Global Variable
int size,ele,i,choice;

//Function call to the directory
void push();
int pop();
void display();
int peek();

 //Creating a new stack
struct stack
{
   int arr[100];
   int top;
}st;

int main()
{

  st.top=-1;

    printf("\n Enter the size of STACK with MAX 100 ");
    scanf("%d",&size);
    printf("\n\t STACK OPERATIONS USING ARRAY");
    printf("\n\t");
    printf("\n\t 1.PUSH\n\t 2.POP\n\t 3.PEEK\n\t 4.DISPLAY\n\t 5.EXIT");
    do
    {
        printf("\n Enter the Choice:");
        scanf("%d",&choice);
        switch(choice)
        {
            case 1:
            {
                push();
                break;
            }
            case 2:
            {
                pop();
                break;
            }
            case 3:
            {
                peek();
                break;
            }
            case 4:
            {
                display();
                break;
            }
            case 5:
            {
                printf("\n\t EXIT POINT ");
                break;
            }
            default:
            {
                printf ("\n\t Please Enter a Valid Choice(1/2/3/4)");
            }

        }
    }
    while(choice!=5);
    return 0;
}

//Inserting Element

void push(int ele)
{
if((st.top)==size-1)
{
printf("Stack is full\n");}
else
{
st.top++;
printf("Enter element to push ");
scanf("%d",&ele);
st.arr[st.top]=ele;
}}


//Removing Element

int pop()
{
if((st.top)==-1)
{
printf("Stack is Empty\n");
}
else
{
int out;
out=st.arr[st.top];
st.top--;
return out;
}}

//Peek of the stack

int peek()
{
int display;
display=st.arr[st.top];
printf("The peek is %d",display);

}

//display stack

void display()
{
    if((st.top)>=0)
    {
        printf("\n The elements in STACK \n");
        for(i=st.top; i>=0; i--)
            printf("\n%d",st.arr[i]);

    }
    else
    {
        printf("\n The STACK is empty");
    }

}
