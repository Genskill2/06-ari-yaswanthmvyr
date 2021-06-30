#include<stdio.h>
#include<cs50.h>
#include<string.h>
#include<ctype.h>

string ari(string s)
{
	int a=0,b=0,c=0;
	for(int i=0;i<strlen(s);i++)
	{
	    if(isalnum(s[i])!=0)
	    a++;
	}
	for(int j=0;j<strlen(s);j++)
	{
	    if(s[j]==32)
	    b++;
	}
	for(int k=0;k<strlen(s);k++)
	{
	    if((((s[k]==46)||(s[k]==63))&&((s[k+1]==32)||(s[k+1]==0))))
	    c++;
	}
	float result=(4.71*((float)a/b))+(0.5*((float)b/c))-21.43;
	string ret;
	if(result<1)
	  ret="Kindergarten";
	else if(result<2)
	  ret="First/Second Grade";
	else if(result<3)
	  ret="Third Grade";
	else if(result<4)
	  ret="Fourth Grade";
	else if(result<5)
	  ret="Fifth Grade";
	else if(result<6)
	  ret="Sixth Grade";
	else if(result<7)
	  ret="Seventh Grade";
	else if(result<8)
	  ret="Eighth Grade";
	else if(result<9)
	  ret="Ninth Grade";
	else if(result<10)
	  ret="Tenth Grade";
	else if(result<11)
	  ret="Eleventh Grade";
	else if(result<12)
	  ret="Twelfth grade";
	else if(result<13)
	  ret="College student";
	else
	  ret="Professor";
	return ret;
}
