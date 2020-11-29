/*
 int a=10;
int b=20;

*/
/*
swap(int *a,int *b){
	int t;
	t=a;
	a=b;
	b=a;
}
*/
void  swap(int *x,int *y){
	int temp;
	temp=*x;
	*x=*y;
	*y=temp;
}
