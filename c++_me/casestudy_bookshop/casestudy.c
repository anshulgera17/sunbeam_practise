/*
/*
 ============================================================================
 Name        : assign.c
 Author      :
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include<string.h>

//int cur_bill;
enum boperation{amit,new_cust,find_cust,new_book,display_book,update_book,delete_book,new_bill,add_cart,print_bill};
struct custmer
{
	char name[50];
	long int mobno;
	char add[40];
};
struct book
{
	int id;
	char name[30];
	char author[10];
	float unit_price;
	int quantity;
};
struct bill
{
	int billno;
	char cname[50];
	int bcount[10];
	int countb;
	char date[10];
	struct book billbook[10];

}cur_bill;

void newcustmer()
{
	FILE *fp;
	struct custmer c;
	printf("enter the new customer details:\n");
	printf("name   :");
	scanf("%s",c.name);
	printf("\n");
	printf("mobile no:");
	scanf("%ld",&c.mobno);
	printf("\n");
	printf("address:");
	scanf("%s",c.add);
	printf("\n");
	fp=fopen("custmer.db","ab");
	fwrite(&c,sizeof(c),1,fp);
	fclose(fp);
	printf("record inserted\n");

}
void findcustmer()
{
	struct custmer c;
	FILE *fp;
	 long int mb,key;
	fp=fopen("custmer.db","rb");
	printf("Enter the mobile number :");
	scanf("%ld",&mb);
	printf("\n");
	while((fread(&c,sizeof(c),1,fp))!=0)
{

	if (mb==c.mobno)
	{
		 key=1;
	}
	}
	if(key==1)
	{
		printf("Customer details are :\n");
				printf("name          :%s\n",c.name);
				printf("mobile number :%ld\n",c.mobno);
				printf("address       :%s\n",c.add);
	}
	else
		{
			printf("Record not available...\n");
		}

    fclose(fp);
    }

int lastbid()
{
	FILE *fp;
	int count=0;
	struct book b;
	fp=fopen("book.db","rb");
	while(fread(&b,sizeof(b),1,fp))
{
	count=b.id;
}
	fclose(fp);
	return count+1;
}
void newbook ()
{
	struct book b;
	FILE *fp;
	printf("\nEnter book name  :");
	scanf("%s",b.name);
	printf("\nauthor name      :");
	scanf("%s",b.author);
	printf("\nunit price       :");
	scanf("%f",&b.unit_price);
	printf("\nquantity         :");
	scanf("%d",&b.quantity);
	fp=fopen("book.db","ab");
	b.id=lastbid();
    fwrite(&b,sizeof(b),1,fp);
	fclose(fp);
	printf("Book inserted\n");
}
void bookdisplay(){
	struct book b;
	FILE *fp;
	fp=fopen("book.db","rb");
	while((fread(&b,sizeof(b),1,fp))!=0)
	{
		printf("book ID        :%d\n",b.id);
		printf("book name      :%s\n",b.name);
		printf("book author    :%s\n",b.author);
		printf("book price     :%f\n",b.unit_price);
		printf("book quantity  :%d\n",b.quantity);
	}

fclose(fp);
}
void updatebook(int bid,signed int bq)
{
	struct book b;
		FILE *fp,*fq;
		int key;
		fp=fopen("book.db","rb");
		fq=fopen("book1.db","ab");
		while((fread(&b,sizeof(b),1,fp))!=0)
	{

		if (bid==b.id)
		{
			  b.quantity=b.quantity+bq;
			 fwrite(&b,sizeof(b),1,fq);

		}
		else{

			fwrite(&b,sizeof(b),1,fq);
		}
		}

					remove("book.db");
					rename("book1.db","book.db");
					fclose(fp);
								fclose(fq);




}
void deletebook()
{
		int bid,key;
		struct book b;
		FILE *fp,*fq;
		fp=fopen("book.db","rb");
		fq=fopen("book1.db","ab");
		printf("Enter the book id");
		scanf("%d",&bid);
		while((fread(&b,sizeof(b),1,fp))!=0)
		{
			if (bid==b.id)
					{
				key=1;
					}
			else
			{

			fwrite(&b,sizeof(b),1,fq);


			}
		}
		if(key==1)
		{
		printf("book deleted...\n");
		remove("book.db");
		rename("book1.db","book.db");
		fclose(fp);
		fclose(fq);
		}
		else
		{
			printf("Id does not exist...\n");
			fclose(fp);
			remove("book1.db");
		}
}

void newbill(struct bill *b2)
{
	struct bill b1;
	struct book b;
	struct custmer c;
	FILE *fp;
		 long int mb,key;
		fp=fopen("custmer.db","rb");
		printf("Enter the mobile number  :");
		scanf("%ld",&mb);
		while((fread(&c,sizeof(c),1,fp))!=0)
	{

		if (mb==c.mobno)
		{

			 strcpy(cur_bill.cname,c.name);
			 key=1;
		}
		}
		if(key==1)
		{
            ;

		}
		else
		{
				printf("Record not available..\n");
		}

	    fclose(fp);

}

 void addcart(struct bill *b2)
  {   struct book b;
      int ch,i=0;
      FILE *fp;
			int bid,key,bq;
			fp=fopen("book.db","rb");
	  do {
			bookdisplay();
			fseek(fp,0,SEEK_SET);
			printf("Enter the book id   :");
			scanf("%d",&bid);
			printf("\nEnter book quantity :");
			scanf("%d",&bq);
			while((fread(&b,sizeof(b),1,fp))!=0)
		    {

			if (bid==b.id)
			{     cur_bill.billbook[i]=b;
			      cur_bill.bcount[i]=bq;
                   /*b2->billbook[i]=b;
                   b2->bcount[i]=bid;*/
			}
		}
			updatebook(bid,-bq);
			printf("do you want to continue..\n1.yes  0.no");
			scanf("%d",&ch);
			i++;
			}while(ch==1 && i<11);

			cur_bill.countb=i;
}
 int bill_no=0;

 void printbill()
 {
        bill_no++;
		int total=0;
		printf(" Bill No  :%d\n",bill_no);
		printf("\n                          ||  GANESH BOOK SHOP  ||\n");
		printf("Name=%s                                                          Date=%s\n",cur_bill.cname,__DATE__);
		printf("------------------------------------------------------------------------------------\n");
		printf("Item NO   Item Name                         Quntity         Unit Price      Total\n");
		printf("------------------------------------------------------------------------------------\n");
		int no=1;
		for(int i=0;i<cur_bill.countb;i++,no++)
		{

			fprintf(stdout,"|%5d|%-32s|| %5d      |%12g     ||%7g   |",no,cur_bill.billbook[i].name,cur_bill.bcount[i],cur_bill.billbook[i].unit_price,cur_bill.bcount[i]*cur_bill.billbook[i].unit_price);
		   printf("\n");
			total=total+(cur_bill.bcount[i]*cur_bill.billbook[i].unit_price);
		}
		printf("------------------------------------------------------------------------------------\n");
		printf("                                                                        total :%d\n",total);
 }

int main(void) {
	enum boperation sw;
	struct custmer c;
	struct book b1;
	struct bill b2;
	do
		{
		printf("1.new_cust\n2.find_cust\n3.new_book\n4.display_book\n5.update_book\n6.delete_book\n7.new_bill\n8.add_cart\n9.print_bill\n");
		scanf("%d",&sw);
		switch(sw)
	{
	case new_cust: newcustmer();
		break;
	case find_cust:
		findcustmer();
		break;
		case new_book: newbook();
		break;
		case display_book: bookdisplay();
		break;
		case update_book:
		{
			        int bid,bq;
			        printf("Enter the book id");
					scanf("%d",&bid);
					printf("Enter book quantity :\n");
					scanf("%d",&bq);
			        updatebook(bid,bq);
		}
		break;
		case delete_book: deletebook();
		break;
		case new_bill: newbill(&b2);
		break;
		case add_cart: addcart(&b2);
		break;

		case print_bill: printbill();
		break;


	}
		}while(sw!=0);
		return 0;

}
