#include"lib.c"
main()
{

	struct student s[3];

	
		printf("Enter ID:");
		scanf("%d",&s[0].stu_age);
		printf("Enter Name:");
		scanf("%s",&s[0].stu_name);
		printf("Enter Age:");
		scanf("%d",&s[0].stu_age);
		printf("Enter Course:");
		scanf("%s",&s[0].stu_course);
		printf("Enter City:");
		scanf("%s",&s[0].stu_course);
		printf("Enter Standard:");
		scanf("%d",&s[0].stu_standard);
		printf("Enter School:");
		scanf("%s",&s[0].stu_school);
	}
	
	printf("ID:",s[0].stu_id);
	printf("Name:",s[0].stu_name);
	printf("Age:",s[0].stu_age);	
	printf("Course:",s[0].stu_course);
	printf("City:",s[0].stu_city);
	printf("Standard:",s[0].stu_standard);	
	printf("School:",s[0].stu_school);
}
	
