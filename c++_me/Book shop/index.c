//Book Shop
#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<unistd.h>

#define DB_FILE "customer.db"
#define DB_FILE_B "books.db"

enum menu
{
EXIT,CUSTOMER_NEW,CUSTOMER_FIND,STOCK_NEW_BOOK,
STOCK_DISPLAY_STOCK,STOCK_UPDATE_BOOK_QUANTITY,
STOCK_DELETE_BOOK,BILL_NEW,BILL_ADD_BOOK,BILL_PRINT_BILL
};


typedef struct customer
{
	char name[50];
	unsigned long int mobile_no;
	char address[100];
}cus_t;


typedef struct book
	{
	unsigned long int book_id;
	char book_name[100] ;
	char book_author[50];
	unsigned long int book_unit;
	unsigned long int book_price;
	unsigned long int book_quantity;
	}book_t;

typedef struct bill{
	int billno;
		char cname[50];
		int bcount[10];
		int countb;
		char date[10];
		struct book billbook[10];
}bill_t;

void customer_new(cus_t *cu)
{
	printf("Enter Name:\n");
	scanf("%s",cu->name);

	printf("Enter Mobile No:\n");
	scanf("%lu",&cu->mobile_no);

	printf("Enter Address:\n");
	scanf("%s",cu->address);
}


void customer_display(const cus_t *s)
{
	printf("%20s %10lu %20s\n", s->name, s->mobile_no, s->address);
}


void new_customer()
{
	cus_t s;
	FILE *fp;
	customer_new(&s);
	fp = fopen(DB_FILE, "ab");
	// err check
	fwrite(&s, sizeof(s), 1, fp);
	fclose(fp);
}


void display()
{
	cus_t s;
	FILE *fp;
	fp = fopen(DB_FILE, "rb");
	// err check
	while( fread(&s, sizeof(s), 1, fp) > 0)
	customer_display(&s);
	fclose(fp);
}


void find_customer()     //find customer by mobile no
{
	int m_no, found=0;
	cus_t s;
	printf("enter mobile no. to find customer: \n");
	scanf("%lu", &m_no);

	FILE *fp;
	fp = fopen(DB_FILE, "rb");


		while( fread(&s, sizeof(s), 1, fp) > 0)
		{
			if(m_no == s.mobile_no)
			{
				found = 1;
				break;
			}
		}
	fclose(fp);

	if(found)
		customer_display(&s);
	else
		printf("customer not found.\n");
}

int get_last_book_id()  //Get last book id
{

book_t bk;
FILE *fp=NULL;

if( access( DB_FILE_B, F_OK ) != -1 )    //using unistd.h
		 {
			 fp=fopen(DB_FILE_B,"rb");
			 fseek(fp,-sizeof(bk),SEEK_END);
			 fread(&bk,sizeof(bk),1,fp);

			 return bk.book_id;
		}

		else
		{
			bk.book_id=0;
			return bk.book_id;
		}
}




void book_new(book_t *bk)
{

	bk->book_id=get_last_book_id()+1;

	printf("Enter Book Name:\n");

	scanf("%s",bk->book_name);

	getchar();

	printf("Enter Book Author Name:\n");

	scanf("%s",bk->book_author);

	getchar();

	printf("Enter Book unit:\n");

	scanf("%lu",&bk->book_unit);

	printf("Enter Book Price:\n");

	scanf("%lu",&bk->book_price);

	printf("Enter Book quantity:\n");

	scanf("%lu",&bk->book_quantity);

}


void new_book()
{
	book_t b;
	FILE *fp;

	book_new(&b);

	fp = fopen(DB_FILE_B, "ab");
	// err check
	fwrite(&b, sizeof(b), 1, fp);
	fclose(fp);

}


void book_display( book_t *bk)
{
	printf("%10s %10s %5lu %5lu %5lu %5lu\n",
			bk->book_name,bk->book_author,bk->book_unit,
			bk->book_price,bk->book_quantity,bk->book_id);
}


void display_books()    //display books
{
		book_t bk;
		FILE *fp;
		fp = fopen(DB_FILE_B, "rb");

		while( fread(&bk, sizeof(bk), 1, fp) > 0)
			book_display(&bk);
		fclose(fp);
}
/*

update_book()//not complete
{
	int book_id_ser, found=0,book_qua_new;
	book_t bk,t;
	printf("enter book id to update quantity");
	scanf("%d",&book_id_ser);
	FILE *fp;
	long size = sizeof(book_t);
	fp=fopen(DB_FILE_B,"rb+");
	//err check
	while (fread(&bk,sizeof(bk),1,fp)>0)
		{
		//search book id
			if(book_id_ser == bk.book_id)
				{
					found = 1;
					printf("Enter quantity for update: ");
					scanf("%d",&book_qua_new);
					bk.book_quantity=bk.book_quantity+book_qua_new;
					printf("%lu",bk.book_quantity);
					// accept new record
					//printf("Enter quantity for update: ");
				//	book_new(&t);
					// change file pos to one record back from the cur pos.
				//	fseek(fp, -size, SEEK_CUR);
					// write record to file
				//	fwrite(&t, sizeof(t), 1, fp);
					break;
				}
		}
			fclose(fp);
			if(found==0)
			printf("book not found.\n");
}
*/


delete_book()			//delete book by id
{
		int book_id_ser,found=0;
		book_t bk;
		printf("Enter Book id to search book");
		scanf("%d",&book_id_ser);

		FILE *fp=NULL, *ft=NULL;
		fp = fopen(DB_FILE_B, "rb");
		ft=fopen("temp.db","wb");

		while(fread(&bk, sizeof(bk),1,fp)>0)
			{
				if(book_id_ser == bk.book_id)
					found=1;
				else
					fwrite(&bk,sizeof(bk),1,ft);
			}
		fclose(ft);
		fclose(fp);

		remove(DB_FILE_B);
			// rename temp file to the original file.
			rename("temp.db", DB_FILE_B);
			if(found)
				printf("book deleted.\n");
			else
				printf("book id not found.\n");
}

/*void update_book(int bid,signed int bq)
{
	 book_t bk;
		FILE *fp,*fq;
		int key;
		fp=fopen("DB_FILE_B","rb");
		fq=fopen("book1.db","ab");
		while((fread(&bk,sizeof(bk),1,fp))!=0)
	{

		if (bid==bk.book_id)
		{
			  bk.book_quantity=bk.book_quantity+bq;
			 fwrite(&bk,sizeof(bk),1,fq);

		}
		else{

			fwrite(&bk,sizeof(bk),1,fq);
		}
		}

					remove("DB_FILE_B");
					rename("book1.db","DB_FILE_B");
					fclose(fp);
								fclose(fq);




}
book_update()
{
			        int bid,bq;
			        printf("Enter the book id");
					scanf("%d",&bid);
					printf("Enter book quantity :\n");
					scanf("%d",&bq);
			        update_book(bid,bq);
		}*/
/*int bill_no=0;
new_bill(){
	bill_t bi;
	 bill_no++;
			int total=0;
			printf(" Bill No  :%d\n",bill_no);
			printf("\n                          ||   BOOK SHOP  ||\n");
			printf("Name=%s                                                          Date=%s\n",bi.cname,__DATE__);
			printf("------------------------------------------------------------------------------------\n");
			printf("Item NO   Item Name                         Quntity         Unit Price      Total\n");
			printf("------------------------------------------------------------------------------------\n");
			int no=1;
			for(int i=0;i<bi.countb;i++,no++)
			{

				fprintf(stdout,"|%5d|%-32s|| %5d      |%12g     ||%7g   |",no,bi.billbook[i].name,
						bi.bcount[i],bi.billbook[i].unit_price,
						bi.bcount[i]bi.billbook[i].unit_price);
			   printf("\n");
				total=total+(bi.bcount[i]bi.billbook[i].book_price);
			}
			printf("------------------------------------------------------------------------------------\n");
			printf("                                                                        total :%d\n",total);
}*/

add_cart(){

}
print_bill(){

}

int main(void)
{

	enum menu choice = EXIT;
	do
	{

		printf("\n\n0. EXIT\n1. CUSTOMER_NEW\n2. CUSTOMER_FIND\n3. STOCK_NEW_BOOK\n"
				"4. STOCK_DISPLAY_STOCK\n5. STOCK_UPDATE_BOOK_QUANTITY\n"
				"6. STOCK_DELETE_BOOK\n7.BILL_NEW\n8.BILL_ADD_BOOK\n"
				"9.BILL_PRINT_BILL \n Enter Choice : ");
		scanf("%d", &choice);
		switch(choice)
		{
		case CUSTOMER_NEW:
			new_customer();
			break;
		case CUSTOMER_FIND:
			find_customer();
			break;
		case STOCK_NEW_BOOK:
			new_book();
			break;
		case STOCK_DISPLAY_STOCK:
			display_books();
			break;
		case STOCK_UPDATE_BOOK_QUANTITY:
		//	book_update();
			break;
		case STOCK_DELETE_BOOK:
			delete_book();
			break;
		case BILL_NEW:
		//	new_bill();
			break;
		case BILL_ADD_BOOK:
		//	add_cart();
			break;
		case BILL_PRINT_BILL:
		//	print_bill();
			break;
		}
	}while(choice!=EXIT);
	return 0;
}
