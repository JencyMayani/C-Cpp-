#include"lib.c"
main()
{
	int i,n;
	printf("Enter N:");
	scanf("%d",&n);
	struct Employee e[n];
	for(i=0;i<=e[n];i++)
	{
		printf("Enter ID:");
		scanf("%d",&e[n].emp_id);
		printf("Enter Name:");
		scanf("%s",&e[n].emp_name);
		printf("Enter Age:");
		scanf("%d",&e[n].emp_age);
		printf("Enter Role:");
		scanf("%s",&e[n].emp_role);
		printf("Enter city:");
		scanf("%s",&e[n].emp_city);
		printf("Enter Experience:");
		scanf("%s",&e[n].emp_experience);
		printf("Enter Company Name:");
		scanf("%s",&e[n].emp_company_name);		
	}
	
}
