/******************
Name:
ID:
Assignment: ex2
*******************/

#include <stdio.h>

int main() {

	int menue; //to store the user's menu selection.
	int mainIndex = 0;
	while(mainIndex != 1){ //they'll get the menu again and again until they'll exit
		printf("Choose an option:\n" //printing the menu
		"1. Happy Face\n"
		"2. Balanced Number\n"
		"3. Generous Number\n"
		"4. Circle Of Joy\n"
		"5. Happy Numbers\n"
		"6. Festival Of Laughter\n"
		"7. Exit\n");
		scanf(" %d", &menue); //scaning the user's choise
		switch(menue){ //switch case - for doing only the user's requested program

			case 1:{
				char eye,nose,mouth; //for the input
				int size,o1,o2; //size - an important input. o1,o2 - for calcualiting oddness
				printf("Enter symbols for the eyes, nose, and mouth:\n"); //printing -  as requested
				scanf(" %c", &eye); //scannig -  as requested
				scanf(" %c" ,&nose); //scannig -  as requested
				scanf(" %c", &mouth); //scannig -  as requested
				printf("Enter face size:\n");
				scanf(" %d", &size); //scannig -  as requested
		
		
				for(int i1 =0;i1 != 1;){ //i is common in loops. so i'll use i / i with a number (for the part in this h.w) / i + letter representin an intregate
						o1 = size / 2; 
						o2 = size % 2;	
							if(o2 == 1 && size > 0){
								printf("%c" ,eye); /*printing the eyes, with a loop of 'space' working as many times as the size between them*/
								for(int si = 0;si < size;si ++){ //si = size i
									printf(" ");
								}
								printf("%c\n" ,eye);
								for(int ni1 = 0;ni1 < o1;ni1 ++){ //ni = nose i
									printf(" ");
								}
								for(int noseindex = 0;noseindex < o1;noseindex ++){ //ni = nose index
									printf(" "); /*printing the nose, with a loop of 'space' working as many times as the size / 2 before and after the nose char*/
								}								
								printf("%c" ,nose);
								for(int ni2 = 0;ni2 < o1;ni2 ++){ //ni = nose i 2
									printf(" ");
								}
								printf("\n");
								printf("\\");
								for(int mi = 0;mi < size;mi ++){ //mi = mouth i
									printf("%c" ,mouth); /*printing the mouth, with a loop of 'mouth' working as many times as the size between the two \/*/
								}	
								printf("/");
								printf("\n");
								i1 = 1; //getting out from the loop
							}
							else{
								printf("The face's size must be an odd and positive number, please try again:\n"); //as requested
							}
					}
				}

				break;
			case 2:	{		
				int i6 = 0;
				printf("Enter a number:\n");
				while(i6 != 1){
					int num,b,c1,c2,c3,c4,c5,d,e,f,g,h,j = 0; //i gave informative names for the imprtant hings. because most of them are fof caculaiting i gave c for conters and  int's that rely on them
					scanf(" %d", &num);
					b = num;
					if(num > 0){
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
							c3 = c3;
							c4 = c2;
						}
						f = 0;
						d = num;
						g = num;

						for(int i3 = 0; i3 != c4; i3++){ //sum of the left numbers
							e = d % 10;
							f = f + e;
							d = d / 10;
						}

						for(int i5 = 0; i5 != c2; i5++){
							for(int i4 = 0; i4 != c3;i4++){ //leaving only the right digits left
								g = g / 10;
							}
							h = g % 10;
							j = j + h;
							g = g / 10;
						}
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
				printf("Enter a number:\n");
				scanf(" %d",&n3);
				for(int i3 = 0;i3 != 1;){
					if(n3 > 0){		
						int reminder;
						int sor = 1; // 'sor' stands for "sum of reminders" 
						for(int i = 1;n3 > i;i++){
							// int reminder;
							reminder = n3 % i;
							// int sor = 0; // 'sor' stands for "sum of reminders" 
							if(reminder == 0){
								sor = sor + reminder;
							}
						}	
							if(sor > n3){ //does he is genouros?
								printf("This number is generous!\n");
								i3 = 1;
							}
							else{
								printf("This number does not share.!\n");
								i3 = 1;
							}
						
					}
					else{
						printf("Only positive number is allowed, please try again:\n");
					}	
				}
			}   
				break;

			case 4:{
					int a,a_orig,rev; //a stands for "a number"
					printf("Enter a number:\n");
					scanf(" %d", &a);
					while(a <= 0) //we dont want negative / zero
					{
						printf("Only positive number is allowed, please try again:\n");
						scanf(" %d", &a);
					}

					rev = 0; //reversed
					a_orig = a;
					//reverse the number a_orig to rev
					while(a_orig) { 
						rev *= 10; //rightshift
						rev += (a_orig % 10); //adding to the rev
						a_orig = a_orig / 10; //updating 
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

			case 5:{
					int n;
					printf("Enter a number:\n");
					scanf(" %d", &n);
					while(n <= 0) //we dont want negative / zero
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

			case 6:{
					int n;
					int smileNumber = 0,cheerNumber = 0; //starting at 0 make things much more easier
					printf("Enter a smile and cheer number:\n");
					scanf(" smile: %d , cheer: %d" ,&smileNumber, &cheerNumber); //scanning for the requested numbers

					while(smileNumber == 0 || cheerNumber == 0 || smileNumber == cheerNumber){ // a loop that will earase the spaces, and make sure the input is in the requested format
						scanf("%*[^\n]");
						scanf("%*c");
							printf("Only 2 different positive numbers in the given format are allowed for the festival, please try again:\n");
							scanf(" smile : %d , cheer : %d" ,&smileNumber, &cheerNumber);
					}
					printf("Enter maximum number for the festival:\n"); // as requested
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
