#include<stdio.h>
int insert();
int delete();
int linear();
int a[20],n,i,c=0;
int main()
{  
    int ch;

    printf("Enter n value: ");
    scanf("%d",&n);
    printf("\nEnter the %d elements: ",n);
    
    for(i=0;i<n;i++){

        scanf("%d",&a[i]);
    }
    printf("\nThe %d elements are: ",n);
    for(i=0;i<n;i++){

        printf("%d",a[i]);
    }
    printf("Enter the number according to your choice: \n");
    printf("1.Delete\n2.Insert\n3.Search\n");
    scanf("%d",&ch);
   switch(ch)
   {

    case 1:
    delete();
    break;

    case 2:
    linear();
    break;

    case 3:
    insert();
    break:

    default:
    printf("Invalid choice..");

   }
   return 0;
}

int delete()
{
    int x,pos;
    printf("\nEnter the element to delete: ");
    scanf("%d",&x);

    for(i=0;i<n;i++)
    {
        if(x==a[i])
        {
             c=1;
             pos=i;
             break;
        }
    }
    for(i=pos;i<n;i++)
    {
        a[i]=a[i+1];
    }
    n=n-1;
    printf("The elements after deletion are: \n ");

    for(i=0;i<n;i++)
    {
        printf("%d\t",a[i]);
    }
}
