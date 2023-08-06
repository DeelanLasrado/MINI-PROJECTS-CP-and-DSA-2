
#include <math.h>
#include <stdio.h>
#include <stdlib.h>



void randomPasswordGeneration()
{
    int lett,num,symb;
    printf("Welcome to the password generator\n");
	

    printf("How many letters do you want in your password?");
    scanf("%d",&lett);

    printf("How many numbers do you want in your password?");
    scanf("%d",&num);

    printf("How many symbols do you want in your password?");
    scanf("%d",&symb);


    int count_num=0,count_symb=0,count_lett=0;
	int i = 0;

    int count=(lett+num+symb);


	int randomizer = 0;

	
	

	
	char numbers[] = "0123456789";

	
	char letter[] = "abcdefghijklmnoqprstuvwyzxABCDEFGHIJKLMNOQPRSTUYWVZX";

	
	

	
	char symbols[] = "!@#$^&*?";

	
	char password[count];

   

	
	randomizer =rand() % 3;

    printf("This is your password as per your requirements: \n");

	
	for (i = 0; i < count ; i++) {

		if (randomizer == 1&&count_num<num) {
			password[i] = numbers[rand() % 10];
			randomizer = rand() % 4;
            count_num++;
			printf("%c", password[i]);
		}
		else if (randomizer == 2&&count_symb<symb) {
			password[i] = symbols[rand() % 8];
			randomizer = rand() % 4;
            count_symb++;
			printf("%c", password[i]);
		}
		
		else if(count_lett<lett){
			password[i] = letter[rand() % 52];
			randomizer = rand() % 4;
			printf("%c", password[i]);
		}
	}
}


int main()
{
	
	


	randomPasswordGeneration();

	return 0;
}
