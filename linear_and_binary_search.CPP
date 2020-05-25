//Linear Search: O(n)
//Binary Search: O(log(n))
#include<stdio.h>
#include<conio.h>

void linearSearch(int array[], int searchMe, int mySize)
{
	int i,flag =- 1;
   for(i=0;i< mySize; i++)
   	if(array[i] == searchMe)
      {
      	flag++;
         printf("\nFOUND at %d position. ",i+1);
         break;
      }

   if(flag == -1)
   printf("\nNOT FOUND");
}


void binarySearch(int array[], int searchMe, int mySize)
{

	int low = 0, high = mySize - 1, flag = -1;

   while(low<=high)
   {
     int mid=(low+high)/2;
     if(array[mid]<searchMe)
     {
         low=mid+1;
     }
     else if(array[mid]>searchMe)
     {
         high=mid-1;
     }
     else
     {
     		printf("\nFOUND");
         flag++;
         break;
     }
   }
   if(flag == -1)
   printf("\nNOT FOUND");
 }

void main()
{
int a[15],size,i,choice,search;

printf("\n	Enter size of arrray (size <=14 ) : ");
scanf("%d",&size);


printf("\n\nChoose...\n1. Linear Search\n2. Binary Search\n		...");
scanf("%d",&choice);

if(choice == 1)
{
	for(i=0;i<size;i++)
	{
		printf("\na[%d] = ",i);
		scanf("%d",&a[i]);
	}

   printf("\nValue to search = ");
   scanf("%d",&search);

   linearSearch(a, search, size);
}
else if(choice == 2)
{
	printf("\nEnter numbers in SORTED manner.");

	for(i=0;i<size;i++)
	{
		printf("\na[%d] = ",i);
		scanf("%d",&a[i]);
	}

   printf("\nValue to search = ");
   scanf("%d",&search);

   binarySearch(a, search, size);
}

getch();

}
