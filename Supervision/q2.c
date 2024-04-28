#include"my_function2.c"
struct students
{
    int no;
    char name[20];
    float che;
    float maths;
    float phy;
    float total;
    float per;
};
main()
{
	int i;
    struct students s[5];
    for(i=0;i<5;i++)
    {
        s[i].no = getint("Roll No.");
        printf("Enter Name : ");
        fflush(stdin);
        gets(s[i].name);
        s[i].che = getfloat("Chemistry Marks");
        s[i].maths = getfloat("Maths Marks");
        s[i].phy = getfloat("Physics Marks");
        printf("\n");
    }
    for(i=0;i<5;i++)
    {
        printf("\nRoll No : %d\n",s[i].no);
        printf("Name : %s\n",s[i].name);
        printf("Chemistry Marks : %.2f/100\n",s[i].che);
        printf("Maths Marks : %.2f/100\n",s[i].maths);
        printf("Physics Marks : %.2f/100\n",s[i].phy);
        s[i].total = s[i].che+s[i].maths+s[i].phy;
        s[i].per = (s[i].total/300)*100;
        printf("Total : %.2f/300\n",s[i].total);           
        printf("Percentage : %.2f\n",s[i].per);
    }

}
