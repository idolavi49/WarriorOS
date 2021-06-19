#include "../include/kb.h"
#include "../include/isr.h"
#include "../include/idt.h"
#include "../include/util.h"
#include "../include/shell.h"

int kmain()
{
	isr_install();
	clearScreen();
	print("Welcome to WarriorOS\n");
	print("Operation System written by Ido Lavi and Dan Hanegbi\n");
	print("Project related to Linux Development Course, Lecturer - Dr. Nezer Zaidenberg\n");
	
    launch_shell(0);
	return 0;
}
