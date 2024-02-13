#include<stdio.h>
#include<string.h>
int main()
{
    struct book
    {
       char name[50];
       float price;
       int no_of_pages;
    } a,b,c;
    // struct book a;
    // a.name = "jashmin"; 
    a.price = 250.6;
    a.no_of_pages = 500;
    strcpy(a.name,"Secret Seaven");

    b.no_of_pages = 1000;
    b.price = 300.7;
    strcpy(a.name,"wondorers");

    printf("%d\n",a.no_of_pages);
    printf("%f\n",a.price);
    printf("%s\n",a.name);
    
    printf("%d\n",b.no_of_pages);
    printf("%f\n",b.price);
    printf("%s\n",b.name);

    // char ch[13] = "Secret Seven";
    // printf("%s",ch);
    return 0;
}

