#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<stdlib.h>

int name_flame_count(char*,char*);
int flames(int);
int str_length_total;
int main()
{
	int flame_count=0,flame_status=0;
	char *your_name,*partner_name;
	your_name=(char*)malloc(30*sizeof(char));
	partner_name=(char*)malloc(30*sizeof(char));
	int choice=0;
	
	do{
		printf("\n\t\t\t***Welcome to flames game...***");
		printf("\n\tPress 1 to play 0 to exit: ");
		scanf("%d",&choice);
		if(choice==1)
		{
			printf("\n\tEnter Your Name: ");
		}
		else
		{
			exit(1);
		}
	
	scanf("%s",your_name);	
	printf("\n\tEnter Your Partner name: ");
	scanf("%s",partner_name);
//	printf("\nThe Your name and partner name: %s and %s",your_name,partner_name);
	flame_count=name_flame_count(your_name,partner_name);
//	printf("\nThe difference count for the flame_count: %d",flame_count);
	flame_status=flames(flame_count);
//	printf("\nThe flame_status is:%d",flame_status);
	if(flame_status==1)
	{
		printf("\nSuccessfully excuted");
	}
	else{
		printf("\nNeed to check ones again");
	}
	
}while(choice);
}

int name_flame_count(char *str_1,char *str_2)
{
	char name_store;			//store the character
	//name_store=(char*)malloc(30*sizeof(char));
	int flame_count=0;
	int t=0,i=0;
	int name_temp=0;
	int str1_length,str2_length,name_large=0,return_flame_count;
	str1_length=strlen(str_1);
//	printf("\nThe your name and partner will be: %s and %s",str_1,str_2);
//	printf("\nThe length of you name is: %d",str1_length);
	str2_length=strlen(str_2);
//	printf("\nThe length of your partner name is: %d",str2_length);
	if(str1_length>str2_length)
	{
		name_large=1;
//		printf("\nstr1_length is largest");
	}
	if(str1_length<str2_length)
	{
		name_large=2;
//		printf("\nstr2_lenght is largest");
	}
	
	for(t=0;t<str1_length;t++)
	{
		name_store=str_1[t];
		for(i=0;i<str2_length;i++)
		{
			if(name_store==str_2[i])
			{
				str_1[t]=' ';
				str_2[i]=' ';
				++name_temp;
				++name_temp;
				break;
			}
		}
	}
//	printf("\nThe total name_temp value will be:%d",name_temp);
	str_length_total=str1_length+str2_length;
//	printf("\nThe total string length is: %d",str_length_total);
	return_flame_count=str_length_total-name_temp;
	
	/*
	if(name_large==1)
	{
		t=0;
		int temp_store_length_1=str1_length;
		printf("\n1.Entering int the name_large_1");
		printf("\n");
		while(*str_2 !='\0')
		{
			printf("\n");
			printf("\n2.Entering into termination check....times:%d",temp_store_length_1);
			for(i=0;i<str1_length;i++)
			{
				if(str_2[t]==str_1[i])
				{
					str_1[i]=0;--i;
					printf("\n3.The your_character is: %c and partner character is: %c",str_1[t],str_2[i]);
				//	name_store[name_temp]=str_1[t];
					++name_temp;					//due to 2characte
					++name_temp;
					printf("\n4.The name_temp size is: %d",name_temp);	
				}	
				else;
			}
			//t++;
			str_2++;	
			--temp_store_length_1;
			printf("\nTotal_1:The name_temp value will be:%d",name_temp);
		}	
		printf("\nTotal_2:The total name_temp value will be:%d",name_temp);
		str_length_total=str1_length+str2_length;
		printf("\nThe total string length is: %d",str_length_total);
		return_flame_count=str_length_total-name_temp;
	}
	else if(name_large==2)
	{
		t=0;
		printf("\nEntering into name_large_2");
		while(str_2[t] !='\0')
		{
			printf("\nEntering into termination check....");
			for(i=0;i<str2_length;i++)
			{
				if(str_2[t]==str_1[i])
				{
					printf("\nThe your_character is: %c and partner character is: %c",str_2[t],str_1[i]);
				//	name_store[name_temp]=str_1[t];
					++name_temp;					//due to 2character
					++name_temp;
					printf("\nThe name_temp size is: %d",name_temp);
				}
			}
			t++;
			printf("\nThe name_temp value will be:%d",name_temp);
		}
		printf("\nThe total name_temp value will be:%d",name_temp);
		str_length_total=str1_length+str2_length;
		return_flame_count=str_length_total-name_temp;
	}
	//add equal for elseif return as zero
	else
	{
		printf("\nThe match is not matched...");
	}
	*/
	return return_flame_count;
}

int flames(int count)
{
	if(count==3 || count==5 || count== 14 || count== 18)
	{
		printf("\n\t\t\tYou and Your partner's are Friends...");	
	}
	else if(count==10 || count==19 || count==16)
	{
		printf("\n\t\t\tYou both are Lovers...");
	}
	else if(count==8 || count==12 || count==13 || count==17)
	{
		printf("\n\t\t\tYour partner's having Affection between with you...");
	}
	else if(count==6 || count==11 || count==15)
	{
		printf("\n\t\t\tYour partner wants to Marrt you");
	}
	else if(count==2 || count==4 || count==7 || count ==9 || count==20)
	{
		printf("\n\t\t\tYou and your partners are Enemy");
	}
	else if(count==1)
	{
		printf("\n\t\t\t	Omg! both are Sweethearts");
	}	
	else if(count==0)
	{
		printf("\nAffection");
	}
	return 1;	
}



