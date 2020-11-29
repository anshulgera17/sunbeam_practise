#include<iostream>
using namespace std;
enum AccoutType
{
	ecurrent,esaving,eloan,efixed
};

class Account
{
private:

char accountHolderName[30];
int	AccountNo;
double	balance;

public:

Account(void):accountHolderName(" "),AccountNo(0),balance(0)
{ }


//Account(char *accountHolderName, double initialAmount, AccountType acc type)
void Deposit(double amount);

void getAccountHolderName(char*);

void getAccountNumber();

void getAccountType();

void getCurrentBalance();

void printOnConsole();

void setAccountHolderName(const char* accountHolderName);

void setBalance(double amount);

void withdraw(double amount);

int main(){

	int


	return 0;

}
};
