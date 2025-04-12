#include <stdio.h> 
#include <string.h> 
int main() 
{ 
char ans1[15];int score=0;char ans2[15];
printf("***** WELCOME TO THE QUIZ GAME ");
printf("\n1.START QUIZ"); 
printf("\n2.INSTRUCTIONS");
printf("\n2.1 Write all answers in small letters    type answers don't type option*");
printf("\n3.VIEW HIGH SCORE"); printf("\n4.EXIT"); 
printf("\nEnter any one Choice"); printf("\n Question 1"); printf("\nWhat is the capital of france?");

printf("\n A.berlin"); printf("\n B.madrid"); printf("\n C.paris"); printf("\n D.rome");

scanf("%s",ans1);

if(strcmp(ans1,"berlin")==0) 
{ 
printf("\nwrong"); 
}
else if(strcmp(ans1,"madrid")==0) 
{ 
printf("\nwrong"); 
} 
else if(strcmp(ans1,"paris")==0) 
{ 
printf("\ncorrect"); score=score+3; 
} 
else if(strcmp(ans1,"rome")==0) 
{ 
printf("\nwrong"); 
}
else {printf("invalid"); 
} 
printf("\nYour score for 1st one is %d",score); printf("\nQuestion 2"); printf("\nwhich is the largest continent in the world");

printf("\n A.africa"); printf("\n B.asia"); printf("\n C.antartica"); printf("\n D.europe");

scanf("%s",ans2);

if(strcmp(ans2,"africa")==0) 
{ 
printf("\nwrong");
} 
else if(strcmp(ans2,"asia")==0)
{ 
printf("\ncorrect"); score=score+3;

}
else if(strcmp(ans2,"antartica")==0) 
{ printf("\nwrong"); 
} 
else if(strcmp(ans2,"europe")==0)
{
printf("\nwrong"); 
} else 
{ printf("\n invalid");
}

printf("\nyour total score is %d",score); printf("\nThe correct answers are \nQuestion 1 C.paris\nQuestion 2 B.asia"); printf("\n****** THANK YOU ******"); }

