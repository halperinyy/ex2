/******************
Name:
ID:
Assignment: ex2
*******************/

#include <stdio.h>

int main() {

	int menue;
	char e,h0='a',h1='a';
	char eye,nose,mouth;
	int size,o1,o2;
	int r;
	// 	printf("Choose an option:\n"
	// 	"1. Happy Face\n"
	// 	"2. Balanced Number\n"
	// 	"3. Generous Number\n"
	// 	"4. Circle Of Joy\n"
	// 	"5. Happy Numbers\n"
	// 	"6. Festival Of Laughter\n"
	// 	"7. Exit\n");
	// 	menue=1;
	// 	r = scanf(" %c", &e);
	// 	printf("r = %d, h0 = %c, h1 = %c\n", r,h0,h1);

	// 			/*case 1:*/
	// 			// printf("Enter symbols for the eyes, nose, and mouth:\n");
	// 			int yy = scanf("%c%c%c", &eye ,&nose ,&mouth);
	// 			// printf("yy = %d\n", yy);
	// 			printf("Enter face size:\n");
	// 		 r = scanf("%d", &size);
	// 			printf("%d, r = %d\n", size, r);

	// return 0;

	int mainIndex = 0;
	while(mainIndex != 1){
		printf("Choose an option:\n"
		"1. Happy Face\n"
		"2. Balanced Number\n"
		"3. Generous Number\n"
		"4. Circle Of Joy\n"
		"5. Happy Numbers\n"
		"6. Festival Of Laughter\n"
		"7. Exit\n");
		scanf(" %d", &menue);
		switch(menue){
			// Case 1: Draw Happy Face with given symbols for eyes, nose and mouse
			/* Example:
			* n = 3:
			* 0   0
			*   o
			* \___/
			*/
			case 1:{
				char eye,nose,mouth;
				int size,o1,o2;
				printf("Enter symbols for the eyes, nose, and mouth:\n");
				// int yy = scanf("%c%c%c", &eye ,&nose ,&mouth);
				scanf(" %c", &eye);
				scanf(" %c" ,&nose);
				scanf(" %c", &mouth);
				for(int i1 =0;i1 != 1;){
					printf("Enter face size:\n");
					scanf(" %d", &size);
						 //'i' stands for Index 
						o1 = size / 2; //odd stands for 'odd'
						o2 = size % 2;	
							if(o2 == 1 && size > 0){
								printf("%c" ,eye);
								for(int si = 0;si < size;si ++){ //si = size index
									printf(" ");
								}
								printf("%c\n" ,eye);
								for(int ni1 = 0;ni1 < o1;ni1 ++){ //ni = nose index
									printf(" ");
								}
								for(int noseindex = 0;noseindex < o1;noseindex ++){ //ni = nose index
									printf(" ");
								}								
								printf("%c" ,nose);
								for(int ni2 = 0;ni2 < o1;ni2 ++){ //ni = nose index
									printf(" ");
								}
								printf("\n");
								printf("\\");
								for(int mi = 0;mi < size;mi ++){ //mi = mouth index
									printf("%c" ,mouth);
								}	
								printf("/");
								printf("\n");
								i1 = 1;
							}
							else{
								printf("The face's size must be an odd and positive number, please try again:\n");
							}
					}
				}

				break;
			// Case 2: determine whether the sum of all digits to the left of the middle digit(s)
			// and the sum of all digits to the right of the middle digit(s) are equal
			/* Examples:
			Balanced: 1533, 450810, 99
			Not blanced: 1552, 34
			Please notice: the number has to be bigger than 0.
			*/
			case 2:	{		
				/*there's a loop! /yy */
				int i6 = 0;
				while(i6 != 1){
					printf("Enter a number:\n");
					int a,b,c1,c2,c3,c4,c5,d,e,f,g,h,j = 0,lm; //'i' stands for Index
					scanf(" %d", &a);
					b = a;
					if(a > 0){
						c1 = 0;
						for(int i2 = 0;i2 != 1;){//'i' stands for Index
							b = b / 10;
							c1++;
							if(b == 0){
								i2 = 1;
							}
						}
						c2 = c1 / 2;
						c5 = c1 % 2;
						c3 = c1 - c2;
						if(c5 == 0){
							c3 = c3 + 1;
							c4 = c2 - 1;
						}
						else{

						}
						// printf("c1 is: %d\n" ,c1);
						// printf("c2 is: %d\n" ,c2);
						// printf("c3 is: %d\n" ,c3);
						// printf("c4 is: %d\n" ,c4);
						// printf("c5 is: %d\n" ,c5);
						f = 0;
						d = a;
						g = a;

						for(int i3 = 0; i3 != c4; i3++){ //sum of the left numbers
							e = d % 10;
							printf("e is:%d\n" ,e);
							f = f + e;
							printf("f is:%d\n" ,f);
							d = d / 10;
							printf("d is:%d\n" ,d);
						}
						printf("f is:%d\n" ,f);

						for(int i5 = 0; i5 != c2; i5++){
							for(int i4 = 0; i4 != c3;i4++){ //leaving only the right digits left
								g = g / 10;
								printf("g is: %d\n" ,g);
							}
							h = g % 10;
							j = j + h;
							g = g / 10;
						}
						printf("j is:%d\n" ,j);
						if(j == f){
							printf("This number is balanced and brings harmony!\n");
							i6 = 1;
						}	
						else{
							printf("This number isn't balanced and destroys harmony.\n");
							i6 = 1;
						}
					}
					else{
						printf("Only positive number is allowed, please try again:\n");
					}
				}
			}
				break;
			// Case 3: determine whether the sum of the proper divisors (od an integer) is greater than the number itself
			/* Examples:
			Abudant: 12, 20, 24
			Not Abudant: 3, 7, 10
			Please notice: the number has to be bigger than 0.
			*/

			case 3: {
				int n3;
				for(int i3 = 0;i3 != 1;){
					printf("Enter a number:\n");
					scanf(" %d",&n3);
					if(n3 > 0){		
						int reminder;
						int sor = 1; // 'sor' stands for "sum of reminders" 
						for(int i = 1;n3 > i;i++){
							// int reminder;
							reminder = n3 % i;
							printf("reminder is: %d", reminder);							
							// int sor = 0; // 'sor' stands for "sum of reminders" 
							if(reminder == 0){
								printf("reminder is:  %d", reminder);							
								sor = sor + reminder;
								printf("sor is:  %d", sor);														
							}
						}	
							if(sor > n3){
								printf("This number is generous!");
								i3 = 1;
							}
							else{
								printf("This number does not share.!");
								i3 = 1;
							}
						
					}
					else{
						printf("Only positive number is allowed, please try again:");
					}	
				}
			}   
				break;

			// Case 4: determine wether a number is a a_prime.
			/* Examples:
			This one brings joy: 3, 5, 11
			This one does not bring joy: 15, 8, 99
			Please notice: the number has to be bigger than 0.
			*/
			case 4:{
					int a,a_orig,rev;
					printf("Enter a number:\n");
					scanf(" %d", &a);
					while(a <= 0)
					{
						printf("Only positive number is allowed, please try again:\n");
						scanf(" %d", &a);
					}

					rev = 0;
					a_orig = a;
					//reverse the number a_orig to rev
					while(a_orig) {
						rev *= 10;
						rev += (a_orig % 10);
						a_orig = a_orig / 10;
					}

					int prime = 1;
					if(a>1){
						//Check if a is prime
						for(int d = a - 1; d > 1 && prime == 1 ; d--){
							if( (a % d) == 0){
								prime = 0;
							}
						}
						//Check if rev is prime
						for(int d = rev - 1; d > 1 && prime == 1 ; d--){
							if( (rev % d) == 0){
								prime = 0;
							}
						}
					}
					else{
						prime = 0;
					}

					if(prime) {
						printf("This number completes the circle of joy!\n");
					}
					else {
						printf("The circle remains incomplete.\n");
					}
				}   
				break;

			// Happy numbers: Print all the happy numbers between 1 to the given number.
			// Happy number is a number which eventually reaches 1 when replaced by the sum of the square of each digit
			/* Examples:
			Happy :) : 7, 10
			Not Happy :( : 5, 9
			Please notice: the number has to be bigger than 0.
			*/
			case 5:{
					int n;
					printf("Enter a number:\n");
					scanf(" %d", &n);
					while(n <= 0)
					{
						printf("Only positive number is allowed, please try again:\n");
						scanf(" %d", &n);
					}

					printf("Between 1 and %d only these numbers bring happiness: ",n);

					for(int i = 1 ; i <= n ; i++)
					{
						int a = i;
						int sum = 0;
						do
						{
							int x = a;
							sum = 0;
							//Get the sum
							while(x){
								int digit = x % 10;
								sum += digit * digit;
								x = x / 10;
							}
							//Move the to a and check if it is a happy number
							a = sum;
							//We know from the question that 7 is a happy, so if we reach a single digit number that is not 1 or 7 it is not happy
							if(a == 1 || a == 7)
							{
								printf("%d ",i);
							}
							//This is the exit condition
							else if(a < 10)
							{
								a = 1;
							}							
						} while(a != 1);
					}
					printf("\n");
				}   
				break;
			// Festival of Laughter: Prints all the numbers between 1 the given number:
			// and replace with "Smile!" every number that divided by the given smile number
			// and replace with "Cheer!" every number that divided by the given cheer number
			// and replace with "Festival!" every number that divided by both of them
			/* Example:
			6, smile: 2, cheer: 3 : 1, Smile!, Cheer!, Smile!, 5, Festival!
			*/

			case 6:{
					int n;
					int smileNumber, cheerNumber;
					char cheer_str[] = "cheer:";
					char smile_str[] = "smile:";
					char buff0[300];
					char buff1[300];
					printf("Enter a smile and cheer number:\n");
					// scanf(" smile: %d, cheer: %d", &smileNumber, &cheerNumber);
					scanf(" smile: %[^abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ], cheer: %[^abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ]",buff0,buff1);
					printf("buff0 = %s\n",buff0);
					printf("buff1 = %s\n",buff1);
					break;
					// scanf(" smile: %[^a-zA-Z]d, cheer: %[^a-zA-Z]",&smileNumber,&cheerNumber);
					// printf("smileNumber = %d\n",smileNumber);
					// printf("cheerNumber = %d\n",cheerNumber);

					int char_index = 0;
					//Skip whitespaces
					// while(buff[char_index] == ' ')
					// {
					// 	char_index++;
					// }
					// int i_cheer = 0;
					// //Skip cheer_str
					// while(buff[char_index] == cheer_str[i_cheer] && cheer_str[i_cheer])
					// {
					// 	char_index++;
					// 	i_cheer++;
					// }

					// if(cheer_str[i_cheer] != 0)
					// {

					// }

					// //Skip whitespaces
					// while(buff[char_index] == ' ')
					// {
					// 	char_index++;
					// }

					// //Extract number to cheer
					// //Skip whitespaces
					// while(buff[char_index] == ' ')
					// {
					// 	char_index++;
					// }

					// //Skip smile_str

					// //Skip whitespaces
					// while(buff[char_index] == ' ')
					// {
					// 	char_index++;
					// }

					//Extract number to smile




					//printf("smileNumber = %d, cheerNumber = %d\n", smileNumber, cheerNumber);
					printf("Enter maximum number for the festival:\n");
					scanf(" %d", &n);
					while(n <= 0)
					{
						printf("Only positive maximum number is allowed, please try again:\n");
						scanf(" %d", &n);
					}

					//Check the n number for festival cheer and smile. if not either then print number
					for(int i = 1 ; i <= n ; i++)
					{
						//Check festival
						if((i % smileNumber) == 0 && (i % cheerNumber) == 0)
						{
							printf("Festival!\n");
						}
						else if((i % cheerNumber) == 0){
							printf("Cheer!\n");
						}
						else if((i % smileNumber) == 0){
							printf("Smile!\n");
						}
						else
						{
							printf("%d\n",i);
						}
					}
				}   
				break;
			case 7:{
				printf("Thank you for your journey through Numeria!\n");
				mainIndex = 1;
				}
				break;
			default:{
				printf("This option is not available, please try again.\n");	
				}
				break; 	
			return 0;
		}
	}
}
