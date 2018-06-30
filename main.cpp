#include <iostream>
#include <string.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
using namespace std;
void strtok(char n[50])
{
	char *p;
	p=strtok(n," ");
	while(p!=NULL)
	{
		cout<<endl<<"-> "<<p<<endl;
		p=strtok(NULL," ");
	}
}

int main(int argc, char** argv) {
	char n[50]="Brandon Jose Vargas Rueda";
	
	strtok(n);
	
	
	return 0;
}
