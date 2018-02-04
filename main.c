#include <stdio.h>
#include <string.h>

int main(){
	while(1){
		int width, height;
		int a, b;
	   
	   	do {
	   		//Retrieve Width information from terminal/user and check if greater than 1
	   		printf("PLease enter the Width (w) of the Box: ");
			scanf("%d",&width);
			if (width <=1){
				printf("Sorry, this is an Invalid Width. The Width should be greater than 1.\n");
			}
		} while (width <=1);


		do {
			//Retrieve Height information from terminal/user and check if greater than 1
	   		printf("Please enter the Height (h) of the Box: ");
			scanf("%d",&height);
			if (height <=1){
				printf("Sorry, this is an Invalid Height. The Height should be greater than 1.\n");
			}
		} while (height <=1);

	    int maxHeightIndex = height - 1;
		int maxWidthIndex = width - 1;
		int maxSpaces = width - 2;

	    for (a = 0; a < height; a++){
	    	//Loop through each row
	    	if (a == 0 || a == maxHeightIndex){
	    		//Draw rows for only first and last row
	        	for (b = 0; b < width; b++){
	            	if (a == 0){
	               		if (b == 0){
				   			printf("┌");
	                   	}
	                   	else if (b == maxWidthIndex){
							printf("┐");
	                   	}
	                   	else {
							printf("─");
	                   	}
	                }
	                else if (a == maxHeightIndex){
	                   	if (b == 0){
							printf("└");
	                   	}
	                   	else if (b == maxWidthIndex){
							printf("┘");
	                   	}
	                   	else {
							printf("─");
	                   	}
	                }
	            }
	        }
	        else {
	        	//Draw rows for middle rows exluding first and last row
				printf("│");

				if (maxSpaces > 0){
					printf("%*s", maxSpaces, " ");
				}
				
				printf("│");
	        }

	       	printf("\n");
		}
	}
}
