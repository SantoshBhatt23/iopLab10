//creating a sturcture named iem
#include <stdio.h>
#include <string.h>
struct item{
    char item_name[50];
    int qty;
    float price;
    float amount;
};

void takeEntry(struct item i1){
    printf("Enter item name: ");
    fgets(i1.item_name,50,stdin);
    i1.item_name[strcspn(i1.item_name,"\n")] = '\0';
    printf("Enter quantity: ");
    scanf("%d",&i1.qty);
    printf("Enter price: ");
    scanf("%f",&i1.price);
    i1.amount = i1.qty * i1.price;
    printf("total amount of the item: %d * %.2f= %.2f\n",i1.qty,i1.price,i1.amount);
}
int main()
{
    struct item i1;
    takeEntry(i1);
    return 0;

}