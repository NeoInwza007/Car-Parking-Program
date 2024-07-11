#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#include <string.h>

void main()

{
	char carLicense[10];
	char name[20];
    int choice;
    float num1,num2,num3,ans1,ans2,ans3;
    float result1,result2,result3,result4,result5,result6,result7,result8,result9,result10,result11,result12;
    
    FILE *outfile;
    
    
	printf("***Parking fee calculation program***\n\n");
	printf("***A fee will show 5 currency***\n\n");
    printf("   Welcome to Ku center parking lot\n\n   ");
    printf("Enter Your Name:  ");
    scanf("%s",name);
    printf("\n   Enter Your Car license:  ");
    scanf("%s",carLicense);
    printf("\n   Input must be integer or Exit press 0 \n\n   ");
   		printf("Choose the following\n  ");
        printf("Car          press '1'\n  ");
        printf("Motorcycle   press '2'\n  ");
        printf("Bicycle      press '3'\n");

        choice = getch();
		
        switch(choice) {
              case 48 : exit(0);
        }
        
        strcat(name, ".txt");
        outfile = fopen(name, "w");
        fprintf(outfile, "Name: %s\n",name);
        fprintf(outfile, "Car license: %s\n",carLicense);
        switch(choice) {
              case 49 : 
        fprintf(outfile, "Vehicle type: Car");
        printf("\nTotal parking time(hour) : ");
        scanf("%f",&num1);
        fprintf(outfile, "\nTotal parking time(hour) : %.0f" ,num1);
        ans1=(num1 - 1)*20;
        ans2=60+(num1 - 4)*25;
        ans3=135+(num1 - 7)*30;
        
        result1 = ans1*0.029;
        result2 = ans2*0.029;
        result3 = ans3*0.029;
        result4 = ans1*0.027;
        result5 = ans2*0.027;
        result6 = ans3*0.027;
        result7 = ans1*0.20;
        result8 = ans2*0.20;
        result9 = ans3*0.20;
        result10 = ans1*3.93;
        result11 = ans2*3.93;
        result12 = ans3*3.93;
        
              if(num1>0 && num1<=168){
              	
                if(num1<=1) {
                    printf("\nTotal parking fee : 0 THB");
                    printf("\nTotal parking fee : 0 USD");
					printf("\nTotal parking fee : 0 EUR");
                    printf("\nTotal parking fee : 0 CNY");
                    printf("\nTotal parking fee : 0 JPY");
                    
                    fprintf(outfile,"\nTotal parking fee : 0 THB");
                    fprintf(outfile,"\nTotal parking fee : 0 USD");
					fprintf(outfile,"\nTotal parking fee : 0 EUR");
                    fprintf(outfile,"\nTotal parking fee : 0 CNY");
                    fprintf(outfile,"\nTotal parking fee : 0 JPY");
                    
                }else if(num1>1 && num1<=4) {
                    printf("\nTotal parking fee : %.2f THB",ans1);
                    printf("\nTotal parking fee : %.2f USD",result1);
                    printf("\nTotal parking fee : %.2f EUR",result4);
                    printf("\nTotal parking fee : %.2f CNY",result7);
                    printf("\nTotal parking fee : %.2f JPY",result10);
                    
                    fprintf(outfile,"\nTotal parking fee : %.2f THB",ans1);
                    fprintf(outfile,"\nTotal parking fee : %.2f USD",result1);
                    fprintf(outfile,"\nTotal parking fee : %.2f EUR",result4);
                    fprintf(outfile,"\nTotal parking fee : %.2f CNY",result7);
                    fprintf(outfile,"\nTotal parking fee : %.2f JPY",result10);
                }else if(num1>4 && num1<=7) {
                    printf("\nTotal parking fee : %.2f THB",ans2);
                    printf("\nTotal parking fee : %.2f USD",result2);
                    printf("\nTotal parking fee : %.2f EUR",result5);
                    printf("\nTotal parking fee : %.2f CNY",result8);
                    printf("\nTotal parking fee : %.2f JPY",result11);
                    
                    fprintf(outfile,"\nTotal parking fee : %.2f THB",ans2);
                    fprintf(outfile,"\nTotal parking fee : %.2f USD",result2);
                    fprintf(outfile,"\nTotal parking fee : %.2f EUR",result5);
                    fprintf(outfile,"\nTotal parking fee : %.2f CNY",result8);
                    fprintf(outfile,"\nTotal parking fee : %.2f JPY",result11);
                }else if(num1>7 && num1<=12) {
                    printf("\nTotal parking fee : %.2f THB",ans3);
                    printf("\nTotal parking fee : %.2f USD",result3);
                    printf("\nTotal parking fee : %.2f EUR",result6);
                    printf("\nTotal parking fee : %.2f CNY",result9);
                    printf("\nTotal parking fee : %.2f JPY",result12);
                    
                    fprintf(outfile,"\nTotal parking fee : %.2f THB",ans3);
                    fprintf(outfile,"\nTotal parking fee : %.2f USD",result3);
                    fprintf(outfile,"\nTotal parking fee : %.2f EUR",result6);
                    fprintf(outfile,"\nTotal parking fee : %.2f CNY",result9);
                    fprintf(outfile,"\nTotal parking fee : %.2f JPY",result12);
                }else if(num1>12 && num1 <=24) {
                    printf("\nTotal parking fee : 1000 THB");
                    printf("\nTotal parking fee : %.2f USD",1000*0.029);
                    printf("\nTotal parking fee : %.2f EUR",1000*0.027);
                    printf("\nTotal parking fee : %.2f CNY",1000*0.20);
                    printf("\nTotal parking fee : %.2f JPY",1000*3.93);
                    
                    fprintf(outfile,"\nTotal parking fee : 1000 THB");
                    fprintf(outfile,"\nTotal parking fee : %.2f USD",1000*0.029);
                    fprintf(outfile,"\nTotal parking fee : %.2f EUR",1000*0.027);
                    fprintf(outfile,"\nTotal parking fee : %.2f CNY",1000*0.20);
                    fprintf(outfile,"\nTotal parking fee : %.2f JPY",1000*3.93);
                }else if(num1>24 && num1 <=48) {
                    printf("\nTotal parking fee : 1500 THB");
                    printf("\nTotal parking fee : %.2f USD",1500*0.029);
                    printf("\nTotal parking fee : %.2f EUR",1500*0.027);
                    printf("\nTotal parking fee : %.2f CNY",1500*0.20);
                    printf("\nTotal parking fee : %.2f JPY",1500*3.93);
                    
                    fprintf(outfile,"\nTotal parking fee : 1500 THB");
                    fprintf(outfile,"\nTotal parking fee : %.2f USD",1500*0.029);
                    fprintf(outfile,"\nTotal parking fee : %.2f EUR",1500*0.027);
                    fprintf(outfile,"\nTotal parking fee : %.2f CNY",1500*0.20);
                    fprintf(outfile,"\nTotal parking fee : %.2f JPY",1500*3.93);
                }else if(num1>48 && num1 <=72) {
                    printf("\nTotal parking fee : 2000 THB");
                    printf("\nTotal parking fee : %.2f USD",2000*0.029);
                    printf("\nTotal parking fee : %.2f EUR",2000*0.027);
                    printf("\nTotal parking fee : %.2f CNY",2000*0.20);
                    printf("\nTotal parking fee : %.2f JPY",2000*3.93);
                    
                    fprintf(outfile,"\nTotal parking fee : 2000 THB");
                    fprintf(outfile,"\nTotal parking fee : %.2f USD",2000*0.029);
                    fprintf(outfile,"\nTotal parking fee : %.2f EUR",2000*0.027);
                    fprintf(outfile,"\nTotal parking fee : %.2f CNY",2000*0.20);
                    fprintf(outfile,"\nTotal parking fee : %.2f JPY",2000*3.93);
                }else if(num1>72 && num1 <=96) {
                    printf("\nTotal parking fee : 2500 THB");
                    printf("\nTotal parking fee : %.2f USD",2500*0.029);
                    printf("\nTotal parking fee : %.2f EUR",2500*0.027);
                    printf("\nTotal parking fee : %.2f CNY",2500*0.20);
                    printf("\nTotal parking fee : %.2f JPY",2500*3.93);
                    
                    fprintf(outfile,"\nTotal parking fee : 2500 THB");
                    fprintf(outfile,"\nTotal parking fee : %.2f USD",2500*0.029);
                    fprintf(outfile,"\nTotal parking fee : %.2f EUR",2500*0.027);
                    fprintf(outfile,"\nTotal parking fee : %.2f CNY",2500*0.20);
                    fprintf(outfile,"\nTotal parking fee : %.2f JPY",2500*3.93);
                }else if(num1>96 && num1 <=120) {
                    printf("\nTotal parking fee : 3000 THB");
                    printf("\nTotal parking fee : %.2f USD",3000*0.029);
                    printf("\nTotal parking fee : %.2f EUR",3000*0.027);
                    printf("\nTotal parking fee : %.2f CNY",3000*0.20);
                    printf("\nTotal parking fee : %.2f JPY",3000*3.93);
                    
                    fprintf(outfile,"\nTotal parking fee : 3000 THB");
                    fprintf(outfile,"\nTotal parking fee : %.2f USD",3000*0.029);
                    fprintf(outfile,"\nTotal parking fee : %.2f EUR",3000*0.027);
                    fprintf(outfile,"\nTotal parking fee : %.2f CNY",3000*0.20);
                    fprintf(outfile,"\nTotal parking fee : %.2f JPY",3000*3.93);
                }else if(num1>120 && num1 <=144) {
                    printf("\nTotal parking fee : 4000 THB");
                    printf("\nTotal parking fee : %.2f USD",4000*0.029);
                    printf("\nTotal parking fee : %.2f EUR",4000*0.027);
                    printf("\nTotal parking fee : %.2f CNY",4000*0.20);
                    printf("\nTotal parking fee : %.2f JPY",4000*3.93);
                    
                    fprintf(outfile,"\nTotal parking fee : 4000 THB");
                    fprintf(outfile,"\nTotal parking fee : %.2f USD",4000*0.029);
                    fprintf(outfile,"\nTotal parking fee : %.2f EUR",4000*0.027);
                    fprintf(outfile,"\nTotal parking fee : %.2f CNY",4000*0.20);
                    fprintf(outfile,"\nTotal parking fee : %.2f JPY",4000*3.93);
                }else if(num1>144 && num1 <=168) {
                    printf("\nTotal parking fee : 5000 THB");
                    printf("\nTotal parking fee : %.2f USD",5000*0.029);
                    printf("\nTotal parking fee : %.2f EUR",5000*0.027);
                    printf("\nTotal parking fee : %.2f CNY",5000*0.20);
                    printf("\nTotal parking fee : %.2f JPY",5000*3.93);
                    
                    fprintf(outfile,"\nTotal parking fee : 5000 THB");
                    fprintf(outfile,"\nTotal parking fee : %.2f USD",5000*0.029);
                    fprintf(outfile,"\nTotal parking fee : %.2f EUR",5000*0.027);
                    fprintf(outfile,"\nTotal parking fee : %.2f CNY",5000*0.20);
                    fprintf(outfile,"\nTotal parking fee : %.2f JPY",5000*3.93);
                }
            }else{
            	printf("Parking time limit is 168 hour");
            	fprintf(outfile,"\nParking time limit is 168 hour");
			} 
        }
        switch(choice) {
              case 50 : 
        fprintf(outfile, "Vehicle type: Motorcycle");
        printf("\nTotal parking time(hour) : ");
        scanf("%f",&num2);
        fprintf(outfile, "\nTotal parking time(hour) : %.0f" ,num2);
        ans1=(num2 - 1)*10;
        ans2=30+(num2 - 4)*15;
        ans3=75+(num2 - 7)*20;
        
        result1 = ans1*0.029;
        result2 = ans2*0.029;
        result3 = ans3*0.029;
        result4 = ans1*0.027;
        result5 = ans2*0.027;
        result6 = ans3*0.027;
        result7 = ans1*0.20;
        result8 = ans2*0.20;
        result9 = ans3*0.20;
        result10 = ans1*3.93;
        result11 = ans2*3.93;
        result12 = ans3*3.93;
        
              if(num2>0 && num2<=120){
                if(num2<=1) {
                    printf("\nTotal parking fee : 0 THB");
                    printf("\nTotal parking fee : 0 USD");
					printf("\nTotal parking fee : 0 EUR");
                    printf("\nTotal parking fee : 0 CNY");
                    printf("\nTotal parking fee : 0 JPY");
                    
                    fprintf(outfile,"\nTotal parking fee : 0 THB");
                    fprintf(outfile,"\nTotal parking fee : 0 USD");
					fprintf(outfile,"\nTotal parking fee : 0 EUR");
                    fprintf(outfile,"\nTotal parking fee : 0 CNY");
                    fprintf(outfile,"\nTotal parking fee : 0 JPY");
                }else if(num2>1 && num2<=4) {
                    printf("\nTotal parking fee : %.2f THB",ans1);
                    printf("\nTotal parking fee : %.2f USD",result1);
                    printf("\nTotal parking fee : %.2f EUR",result4);
                    printf("\nTotal parking fee : %.2f CNY",result7);
                    printf("\nTotal parking fee : %.2f JPY",result10);
                    
                    fprintf(outfile,"\nTotal parking fee : %.2f THB",ans1);
                    fprintf(outfile,"\nTotal parking fee : %.2f USD",result1);
                    fprintf(outfile,"\nTotal parking fee : %.2f EUR",result4);
                    fprintf(outfile,"\nTotal parking fee : %.2f CNY",result7);
                    fprintf(outfile,"\nTotal parking fee : %.2f JPY",result10);
                }else if(num2>4 && num2<=7) {
                    printf("\nTotal parking fee : %.2f THB",ans2);
                    printf("\nTotal parking fee : %.2f USD",result2);
                    printf("\nTotal parking fee : %.2f EUR",result5);
                    printf("\nTotal parking fee : %.2f CNY",result8);
                    printf("\nTotal parking fee : %.2f JPY",result11);
                    
                    fprintf(outfile,"\nTotal parking fee : %.2f THB",ans2);
                    fprintf(outfile,"\nTotal parking fee : %.2f USD",result2);
                    fprintf(outfile,"\nTotal parking fee : %.2f EUR",result5);
                    fprintf(outfile,"\nTotal parking fee : %.2f CNY",result8);
                    fprintf(outfile,"\nTotal parking fee : %.2f JPY",result11);
                }else if(num2>7 && num2<=12) {
                    printf("\nTotal parking fee : %.2f THB",ans3);
                    printf("\nTotal parking fee : %.2f USD",result3);
                    printf("\nTotal parking fee : %.2f EUR",result6);
                    printf("\nTotal parking fee : %.2f CNY",result9);
                    printf("\nTotal parking fee : %.2f JPY",result12);
                    
                    fprintf(outfile,"\nTotal parking fee : %.2f THB",ans3);
                    fprintf(outfile,"\nTotal parking fee : %.2f USD",result3);
                    fprintf(outfile,"\nTotal parking fee : %.2f EUR",result6);
                    fprintf(outfile,"\nTotal parking fee : %.2f CNY",result9);
                    fprintf(outfile,"\nTotal parking fee : %.2f JPY",result12);
                }else if(num2>12 && num2<=24) {
                    printf("\nTotal parking fee : 500 THB");
                    printf("\nTotal parking fee : %.2f USD",500*0.029);
                    printf("\nTotal parking fee : %.2f EUR",500*0.027);
                    printf("\nTotal parking fee : %.2f CNY",500*0.20);
                    printf("\nTotal parking fee : %.2f JPY",500*3.93);
                    
                    fprintf(outfile,"\nTotal parking fee : 500 THB");
                    fprintf(outfile,"\nTotal parking fee : %.2f USD",500*0.029);
                    fprintf(outfile,"\nTotal parking fee : %.2f EUR",500*0.027);
                    fprintf(outfile,"\nTotal parking fee : %.2f CNY",500*0.20);
                    fprintf(outfile,"\nTotal parking fee : %.2f JPY",500*3.93);
                }else if(num2>24 && num2 <=48) {
                    printf("\nTotal parking fee : 1000 THB");
                    printf("\nTotal parking fee : %.2f USD",1000*0.029);
                    printf("\nTotal parking fee : %.2f EUR",1000*0.027);
                    printf("\nTotal parking fee : %.2f CNY",1000*0.20);
                    printf("\nTotal parking fee : %.2f JPY",1000*3.93);
                    
                    fprintf(outfile,"\nTotal parking fee : 1000 THB");
                    fprintf(outfile,"\nTotal parking fee : %.2f USD",1000*0.029);
                    fprintf(outfile,"\nTotal parking fee : %.2f EUR",1000*0.027);
                    fprintf(outfile,"\nTotal parking fee : %.2f CNY",1000*0.20);
                    fprintf(outfile,"\nTotal parking fee : %.2f JPY",1000*3.93);
                }else if(num2>48 && num2 <=72) {
                    printf("\nTotal parking fee : 1500 THB");
                    printf("\nTotal parking fee : %.2f USD",1500*0.029);
                    printf("\nTotal parking fee : %.2f EUR",1500*0.027);
                    printf("\nTotal parking fee : %.2f CNY",1500*0.20);
                    printf("\nTotal parking fee : %.2f JPY",1500*3.93);
                    
                    fprintf(outfile,"\nTotal parking fee : 1500 THB");
                    fprintf(outfile,"\nTotal parking fee : %.2f USD",1500*0.029);
                    fprintf(outfile,"\nTotal parking fee : %.2f EUR",1500*0.027);
                    fprintf(outfile,"\nTotal parking fee : %.2f CNY",1500*0.20);
                    fprintf(outfile,"\nTotal parking fee : %.2f JPY",1500*3.93);
                }else if(num2>72 && num2 <=96) {
                    printf("\nTotal parking fee : 2000 THB");
                    printf("\nTotal parking fee : %.2f USD",2000*0.029);
                    printf("\nTotal parking fee : %.2f EUR",2000*0.027);
                    printf("\nTotal parking fee : %.2f CNY",2000*0.20);
                    printf("\nTotal parking fee : %.2f JPY",2000*3.93);
                    
                    fprintf(outfile,"\nTotal parking fee : 2000 THB");
                    fprintf(outfile,"\nTotal parking fee : %.2f USD",2000*0.029);
                    fprintf(outfile,"\nTotal parking fee : %.2f EUR",2000*0.027);
                    fprintf(outfile,"\nTotal parking fee : %.2f CNY",2000*0.20);
                    fprintf(outfile,"\nTotal parking fee : %.2f JPY",2000*3.93);
                }else if(num2>96 && num2 <=120) {
                    printf("\nTotal parking fee : 2500 THB");
                    printf("\nTotal parking fee : %.2f USD",2500*0.029);
                    printf("\nTotal parking fee : %.2f EUR",2500*0.027);
                    printf("\nTotal parking fee : %.2f CNY",2500*0.20);
                    printf("\nTotal parking fee : %.2f JPY",2500*3.93);
                    
                    fprintf(outfile,"\nTotal parking fee : 2500 THB");
                    fprintf(outfile,"\nTotal parking fee : %.2f USD",2500*0.029);
                    fprintf(outfile,"\nTotal parking fee : %.2f EUR",2500*0.027);
                    fprintf(outfile,"\nTotal parking fee : %.2f CNY",2500*0.20);
                    fprintf(outfile,"\nTotal parking fee : %.2f JPY",2500*3.93);
                }
        	}else{
        		printf("Parking time limit is 120 hours");
        		fprintf(outfile,"\nParking time limit is 120 hours");
			} 
        }
        switch(choice) {
              case 51 : 
        fprintf(outfile, "Vehicle type:Bicycle");
        printf("\nTotal parking time(hour) : ");
        scanf("%f",&num3);
        fprintf(outfile, "\nTotal parking time(hour) : %.0f" ,num3);
        ans1=(num3 - 1)*5;
        ans2=15+(num3 - 4)*10;
        ans3=45+(num3 - 7)*15;
        
        result1 = ans1*0.029;
        result2 = ans2*0.029;
        result3 = ans3*0.029;
        result4 = ans1*0.027;
        result5 = ans2*0.027;
        result6 = ans3*0.027;
        result7 = ans1*0.20;
        result8 = ans2*0.20;
        result9 = ans3*0.20;
        result10 = ans1*3.93;
        result11 = ans2*3.93;
        result12 = ans3*3.93;

        	  if(num3>0 && num3<=72){
                if(num3<=1) {
                    printf("\nTotal parking fee : 0 THB");
                    printf("\nTotal parking fee : 0 USD");
                    printf("\nTotal parking fee : 0 EUR");
                    printf("\nTotal parking fee : 0 CNY");
                    printf("\nTotal parking fee : 0 JPY");
                    
                    fprintf(outfile,"\nTotal parking fee : 0 THB");
                    fprintf(outfile,"\nTotal parking fee : 0 USD");
                    fprintf(outfile,"\nTotal parking fee : 0 EUR");
                    fprintf(outfile,"\nTotal parking fee : 0 CNY");
                    fprintf(outfile,"\nTotal parking fee : 0 JPY");
                }else if(num3>1 && num3<=4) {
                    printf("\nTotal parking fee : %.2f THB",ans1);
                    printf("\nTotal parking fee : %.2f USD",result1);
                    printf("\nTotal parking fee : %.2f EUR",result4);
                    printf("\nTotal parking fee : %.2f CNY",result7);
                    printf("\nTotal parking fee : %.2f JPY",result10);
                    
                    fprintf(outfile,"\nTotal parking fee : %.2f THB",ans1);
                    fprintf(outfile,"\nTotal parking fee : %.2f USD",result1);
                    fprintf(outfile,"\nTotal parking fee : %.2f EUR",result4);
                    fprintf(outfile,"\nTotal parking fee : %.2f CNY",result7);
                    fprintf(outfile,"\nTotal parking fee : %.2f JPY",result10);
                }else if(num3>4 && num3<=7) {
                    printf("\nTotal parking fee : %.2f THB",ans2);
                    printf("\nTotal parking fee : %.2f USD",result2);
                    printf("\nTotal parking fee : %.2f EUR",result5);
                    printf("\nTotal parking fee : %.2f CNY",result8);
                    printf("\nTotal parking fee : %.2f JPY",result11);
                    
                    fprintf(outfile,"\nTotal parking fee : %.2f THB",ans2);
                    fprintf(outfile,"\nTotal parking fee : %.2f USD",result2);
                    fprintf(outfile,"\nTotal parking fee : %.2f EUR",result5);
                    fprintf(outfile,"\nTotal parking fee : %.2f CNY",result8);
                    fprintf(outfile,"\nTotal parking fee : %.2f JPY",result11);
                }else if(num3>7 && num3<=12) {
                    printf("\nTotal parking fee : %.2f THB",ans3);
                    printf("\nTotal parking fee : %.2f USD",result3);
                    printf("\nTotal parking fee : %.2f EUR",result6);
                    printf("\nTotal parking fee : %.2f CNY",result9);
                    printf("\nTotal parking fee : %.2f JPY",result12);
                    
                    fprintf(outfile,"\nTotal parking fee : %.2f THB",ans3);
                    fprintf(outfile,"\nTotal parking fee : %.2f USD",result3);
                    fprintf(outfile,"\nTotal parking fee : %.2f EUR",result6);
                    fprintf(outfile,"\nTotal parking fee : %.2f CNY",result9);
                    fprintf(outfile,"\nTotal parking fee : %.2f JPY",result12);
                }else if(num3>12 && num3<=24) {
                    printf("\nTotal parking fee : 300 THB");
                    printf("\nTotal parking fee : %.2f USD",300*0.029);
                    printf("\nTotal parking fee : %.2f EUR",300*0.027);
                    printf("\nTotal parking fee : %.2f CNY",300*0.20);
                    printf("\nTotal parking fee : %.2f JPY",300*3.93);
                    
                    fprintf(outfile,"\nTotal parking fee : 300 THB");
                    fprintf(outfile,"\nTotal parking fee : %.2f USD",300*0.029);
                    fprintf(outfile,"\nTotal parking fee : %.2f EUR",300*0.027);
                    fprintf(outfile,"\nTotal parking fee : %.2f CNY",300*0.20);
                    fprintf(outfile,"\nTotal parking fee : %.2f JPY",300*3.93);
                }else if(num3>24 && num3<=48) {
                    printf("\nTotal parking fee : 600 THB");
                    printf("\nTotal parking fee : %.2f USD",600*0.029);
                    printf("\nTotal parking fee : %.2f EUR",600*0.027);
                    printf("\nTotal parking fee : %.2f CNY",600*0.20);
                    printf("\nTotal parking fee : %.2f JPY",600*3.93);
                    
                    fprintf(outfile,"\nTotal parking fee : 600 THB");
                    fprintf(outfile,"\nTotal parking fee : %.2f USD",600*0.029);
                    fprintf(outfile,"\nTotal parking fee : %.2f EUR",600*0.027);
                    fprintf(outfile,"\nTotal parking fee : %.2f CNY",600*0.20);
                    fprintf(outfile,"\nTotal parking fee : %.2f JPY",600*3.93);
                }else if(num3>48 && num3<=72) {
                    printf("\nTotal parking fee : 900 THB");
                    printf("\nTotal parking fee : %.2f USD",900*0.029);
                    printf("\nTotal parking fee : %.2f EUR",900*0.027);
                    printf("\nTotal parking fee : %.2f CNY",900*0.20);
                    printf("\nTotal parking fee : %.2f JPY",900*3.93);
                    
                    fprintf(outfile,"\nTotal parking fee : 900 THB");
                    fprintf(outfile,"\nTotal parking fee : %.2f USD",900*0.029);
                    fprintf(outfile,"\nTotal parking fee : %.2f EUR",900*0.027);
                    fprintf(outfile,"\nTotal parking fee : %.2f CNY",900*0.20);
                    fprintf(outfile,"\nTotal parking fee : %.2f JPY",900*3.93);
                }
		    }else {
		    	printf("Parking time limit is 72 hours");
		    	fprintf(outfile,"\nParking time limit is 72 hours");
			}
        }
        printf("\n\n1st DEV : Chattanong Diloksichart 6530202633\n2nd DEV : Chanakan Bunkrapue 6530202641");
        printf("\n\nThank you and Good luck");
        
    fclose(outfile);
    getch();
}
