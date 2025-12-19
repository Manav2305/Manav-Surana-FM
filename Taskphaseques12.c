#include<stdio.h>
#include<ctype.h>
int main()
{
    struct Product
    {
        int pID;
        char pname[100];
        int qty;
        float price;
    };
    while(1>0)
    {
        int n,i;
        printf("Enter the number of products:");
        if(scanf("%d",&n)==0);
        {
            printf("Enter a vaild integer\n");
            while(getchar()!='\n');
            continue;
        }
        if(n>0)
        {
            struct Product Product[n];
            for(i=0;i<n;i++)
            {
                printf("Enter Product ID:");
                scanf("%d",&Product[i].pID);
                printf("Enter Product Name:");
                scanf("%s",Product[i].pname);
                printf("Enter quantity:");
                scanf("%d",&Product[i].qty);
                printf("Enter price:");
                scanf("%f",&Product[i].price);
            }
    //Inventory
            float inv=0;
            for(i=0;i<n;i++)
            {
                int a=Product[i].qty;
                float b=Product[i].price;
                inv+=(a*b);
            }
            printf("Inventory= Rs. %.2f\n",inv);
    //Quantity and Price
            int hq=0,a,b;
            float hp=0;
            for(i=0;i<n;i++)
            {
                if(Product[i].qty>hq)
                {
                    hq=Product[i].qty;
                    a=i;
                }
                if(Product[i].price>hp)
                {
                    hp=Product[i].price;
                    b=i;
                }
            }
            printf("Product with highest quantity:\nID - %d\nName - %s\nQty - %d\nPrice - %.2f\n",Product[a].pID,Product[a].pname,
                Product[a].qty,Product[a].price);
            printf("Product with highest price:\nID - %d\nName - %s\nQty - %d\nPrice - %.2f\n",Product[b].pID,Product[b].pname,
                Product[b].qty,Product[b].price);
            return 0;
        }
        else
        {
            printf("Enter a number greater than 0\n");
        }
    }
}
    