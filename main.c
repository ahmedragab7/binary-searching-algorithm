#include <stdio.h>
#include <stdlib.h>


void search_f(int arr[],int n_o_e,int target){
int half=0;
int num=n_o_e;
int factor=1;
for(;;){
half=(num%2!=0) ? (half+(factor*(num-1)/2)):(half+(factor*(num/2)));

if (target==arr[half]){
printf("\nthe order of this number is : %d",half+1);
break;}

else if(target>arr[half]){factor=1;}
else {factor=-1;}


num=n_o_e-half;

}
}

int main()
{
int target;
printf("inter the number that you want to search for :" );
scanf("%d",&target);

int ar[10]={1,1,1,1,5,6,7,9,11,44};
search_f(ar,sizeof(ar)/sizeof(ar[0]),target);

    return 0;
}
