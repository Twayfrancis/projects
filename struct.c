#include <stdio.h>

struct myPld //create your structure and its members
{
    char myName[10];
    long int myPhoneNumber;
    float score ;
    char grade;

}pld;

int main()
{
	struct myPld s1, s2, s3[10];

	myPld s1 ->  {"Winnie", 25472234,70.55,'B'};  // Create a structure variable of myStructure called s1

   myPld.s2= {"Lorna", 25472454,89.55,'A'};

   myPld.s3= {"Njenga", 254776564,60.55,'C'};

    printf("My First Member: %s ,%lu ,%f ,%c\n", s1.myName,s1.myPhoneNumber,s1.score,s1.grade);

    printf("My Second Member: %s ,%lu ,%f ,%c\n", s2.myName,s2.myPhoneNumber,s2.score,s2.grade);

    printf("My Third Member:%s ,%lu ,%f ,%c\n", s3.myName,s3.myPhoneNumber,s3.score,s3.grade);
    return 0;
}
