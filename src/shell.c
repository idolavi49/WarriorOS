#include "../include/shell.h"

void launch_shell(int n)
{
	string ch = (string) malloc(200);
	int counter = 0;
	do
	{
			print("Warrior (");
			print(int_to_string(n));
			print(")> ");
		    ch = readStr(); 
		    if(strEql(ch,"cmd"))
		    {
				print("\nNew terminal is opened.\n");
				launch_shell(n+1);
		    }
		    else if(strEql(ch,"clear"))
		    {
				clearScreen();
		    }
		    else if(strEql(ch,"cls"))
		    {
				clearScreen();
		    }			
			else if(strEql(ch,"calc"))
		    {
		    	calc();
		    }
		    else if(strEql(ch,"echo"))
		    {
		    	echo();
		    }
		    else if(strEql(ch,"help"))
		    {
		    	help();
		    }
		    else if(strEql(ch,"color"))
		    {
		    	set_background_color();
		    }
			else if(strEql(ch,"version"))
		    {
		    	version();
		    }
			
			else if(strEql(ch,"exit"))
		    {
		    	print("\nGood Bye!\n");
		    }
			else if(strEql(ch,""))
		    {
				print("\n");
		    }		    
		    else
		    {
		        print("\nInvalid input.\n");
		    } 
	} while (!strEql(ch,"exit"));
}

void calc()
{
	print("\nEnter first number: ");
	int first = str_to_int(readStr());
	print("\nEnter second number: ");
	int second = str_to_int(readStr());
	print("\n1 : +");
	print("\n2 : -");
	print("\n3 : *");
	print("\n4 : /");
	print("\nChoose arithmetic: ");
	int arithmetic = str_to_int(readStr());
	int res;
	switch (arithmetic)
	{
	case 1:
		res = first + second;
		print("\nResult: ");
		print(int_to_string(res));
		break;
	case 2:
		res = first - second;
		print("\nResult: ");
		print(int_to_string(res));
		break;
	case 3:
		res = first * second;
		print("\nResult: ");
		print(int_to_string(res));
		break;
	case 4:
		res = first / second;
		print("\nResult: ");
		print(int_to_string(res));
		break;
	}
	print("\n");

}

void echo()
{
	print("\n");
	string str = readStr();
	print("\n");
	print(str);
	print("\n");
}

void set_background_color()
{
	print("\n0 : black");
	print_colored("\n1  : blue",1,0);   
	print_colored("\n2  : green",2,0);
	print_colored("\n3  : cyan",3,0);
	print_colored("\n4  : red",4,0);
	print_colored("\n5  : purple",5,0);
	print_colored("\n6  : orange",6,0);
	print_colored("\n7  : grey",7,0);
	print_colored("\n8  : dark grey",8,0);
	print_colored("\n9  : blue purple",9,0);
	print_colored("\n10 : green light",10,0);
	print_colored("\n11 : blue light",11,0);
	print_colored("\n12 : red light",12,0);
	print_colored("\n13 : rose",13,0);
	print_colored("\n14 : yellow",14,0);
	print_colored("\n15 : white",15,0);
	
	print("\n\nText color: ");
	int text_color = str_to_int(readStr());
	print("\n\nBackground color: ");
	int bg_color = str_to_int(readStr());
	set_screen_color(text_color,bg_color);
	clearScreen();
}

void version()
{
	print("\n1.0.0\n");
}

void help()
{	
	print("\ncmd     : Create new terminal");
	print("\nclear   : Clear the screen");
	print("\ncalc    : Calculate two integers");
	print("\necho    : Print the text");
	print("\version  : Echo the OS version number");
	print("\ncolor   : Changes the colors of the terminal");
	print("\nexit    : Quits from the current shell");
	print("\n\n");
}

