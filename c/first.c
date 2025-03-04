// You are using GCC
#include<stdio.h>
#include<string.h>
struct DEP_STORE{
    char name[50];
    char address[50];
    char number[50];
    int N;
};
struct STORE_ITEM{
    int number;
    char name[50];
    int quantity;
    float price;
};
int main(){
    struct DEP_STORE store;
    gets(store.name);
    scanf("%s",store.address);
    scanf("%s",store.number);
    scanf("%d",&store.N);
    int n=store.N;
    struct STORE_ITEM item[n];
    for(int i=0;i<n;i++){
        scanf("%d",&item[i].number);
        scanf("%s",item[i].name);
        scanf("%d",&item[i].quantity);
        scanf("%f",&item[i].price);
    }
    printf("Store Name: ");
    puts(store.name);
    printf("\nStore Address: %s\n",store.address);
    printf("Phone Number: %s\n",store.number);
    printf("\n");
    printf("Item Number Item Name Available Quantity Item Price\n");
    float total=0.0;
    for(int i=0;i<n;i++){
        printf("%d\t%s\t%d\t%.2f\n",item[i].number,item[i].name,item[i].quantity,item[i].price);
        total+=(item[i].quantity*item[i].price);
    }
    printf("\n");
    printf("Total Item Value: Rs. %.2f",total);
    return 0;
}