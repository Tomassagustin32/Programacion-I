#include <stdio.h>
#include <stdlib.h>

void insertion(int data[], int len);

int main()
{
    int vector[5]={3,5,1,2,6};
    int i;
    insertion(vector, 5);

    for(i=0; i<5; i++)
    {
        printf("%d\n", vector[i]);
    }

    return 0;
}

void insertion(int data[], int len)
{
    int i, j;
    int temp;
    for(i=1; i<len; i++)
    {
        temp=data[i];
        j=i-1;
        while(j>=0 && temp<data[j]) //temp<data[j]
        {
            data[j+1]=data[j];
            j--;
        }
        data[j+1]=temp; //insercion
    }

}
