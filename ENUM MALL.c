#include<stdio.h>
enum  floor{

	toys=0,supermarket,playingzone,shopping,eatingrow };
int main()
{
	int choice;
	printf("select your choice");
	scanf("%d",&choice);
	switch(choice)
	{
	
	case toys:
		printf("GOTO FIRST FLOOR");
		break;
	case supermarket:
			printf("GOTO SECOND FLOOR");
			break;
	case playingzone:
		printf("GOTO THIRD FLOOR");
	    break;
    case shopping:
    	printf("GOTO FOURTH FLOOR");
    	break;
    case eatingrow:
    	printf("GOTO FIVITH FLOOR");
    	break;
    	default:
    		printf("\n ENTERED WRONG CHOICE");
    	}
}
