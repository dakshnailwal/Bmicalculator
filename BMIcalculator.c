#include <stdio.h>

int main(){
	
	int age, rating;
	char name[10];
	char feedback[10];
	float bmi,weight,height,a;
	
	
	printf("Enter your name:");
	scanf("%s",&name);
	
	printf("Enter your age:");
	scanf("%d",&age);
	
	printf("Enter your height (In m):");
	scanf("%f",&height);
	fflush(stdin);
	printf("Enter your weight (In Kg):");
	scanf("%f",&weight);
	
	bmi = weight/(height*height);
	
	if(bmi<18.5){printf("%s your BMI is %f\n You are underweight",name,bmi);
	}
	else if (bmi>18.5 && bmi<24.9){ printf("%s your BMI is %f\n You are normal",name,bmi);
	}
	else if (bmi<25 && bmi>29.9){ printf("%s your BMI is %f\n You are overweight",name,bmi);
	}
	else if (bmi<30 && bmi>34.9){ printf("%s your BMI is %f\n You are obese",name,bmi);
	}
	else if (bmi<35 && bmi>39.9){ printf("%s your BMI is %f\n You are severely obese",name,bmi);
	}
	else { printf("%s your BMI is %f  You are morbidly obese",name,bmi);
	}
	
	
	
	printf("\n*Please rate your experience*.............1: Minimum and 5: Maximum\n");
	scanf("%d",&rating);
	
	switch(rating){
		
		case 1: printf("Your rating is 1\n Not satisfied with our service, drop a feedback:");
		break;
		case 2: printf("Your rating is 2\n Not satisfied with our service, drop a feedback:");
		break;
		case 3: printf("Your rating is 3\n Please give a feedback, it helps us Improve:");
		break;
		case 4: printf("Your rating is 4\n Please give a feedback, it helps us Improve:");
		break;
		case 5: printf("Your rating is 5\n Please give a feedback, it helps us Improve:");
		break;
		default: printf("Invalid Rating");
	}
	
	printf("\nDrop a feedback:");
	scanf("%s",&feedback);
	
	printf("*****Thank You for your Feedback*****");
	return 0;
}
