#include <stdio.h>
#include <stdlib.h>


// guessing game

int main(int argc, char *argv[]) {
	
	int number =5; //GUESSÝNG NUMBER ÝS 5 
	int guess;
	int guessCount =0;
	int guessLimit =5;  // 5 CHANCES 
	int outOfGuess=0;
	
	while(guess!=number && outOfGuess==0){
		
		if(guessCount<guessLimit){
		
			printf("Enter a number-->");
			scanf("%d",&guess);	
			guessCount++;
	    }else{
	    	outOfGuess =1;
		}
	    
		
	}
	
	if(outOfGuess==0){
		printf("YOU WIN");
	}else{
		printf("YOU LOST ");
	}
		
	return 0;
}

 


