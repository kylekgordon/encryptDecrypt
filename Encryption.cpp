#include<iostream>
#include<fstream>

using namespace std;

ext()
{
	system("CLS");
	cout << "Goodbye!";
	return 0;
}

int main()
{
	int i, x;
	char str[50];
	
	ofstream outfile;
	outfile.open("sourcefile.txt");
	
	op:
	system("CLS");
	cout <<"\nPlease choose following options:\n";
	cout <<"1. Encrypt\n";
	cout <<"2. Decrypt\n";
	cout <<"3. Exit\n";
	
	cin >> x;
	
	switch(x)
	{
		case 1:
			
			system("CLS");
			cout << "Please enter a string (no space): ";
			cin >> str;
			
			for(i=0;(i<75 && str[i]!='\0');i++)
			{
				str[i]=str[i]+2;
			}
				
				
			cout <<"\nEcrypted string: "<<str<<endl;
			outfile <<"\nEcrypted string: "<<str<<endl;
			system("PAUSE");
			outfile.close();
			goto op;
			break;
			
				
		case 2:
			
			system("CLS");
			cout << "Please enter a string (no space): ";
			cin >> str;
			
			for(i=0;(i<75 && str[i]!='\0');i++)
			{
				str[i]=str[i]-2;
			}
				
				
				cout <<"\nDecrypted string: "<<str<<endl;
				system("PAUSE");
				goto op;
				break;
				
		case 3:
			ext();
			break;
				
		default:
			cout << "\nInvalid Input!\n";
			system("PAUSE");
			
	}
	
	
	return 0;
}
