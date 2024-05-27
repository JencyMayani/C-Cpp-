#include<iostream>
using namespace std;

class FileManager{
	private:
		string fp;
		FileManager()
		{
			FILE *fp = fopen("write.txt","w");
			FILE *fp1 = fopen("read.txt","r");
		}
		void write()
		{
			if(fp==0)
	    	{
	    		printf("ERROR");
	    	
			}
			else
			{
				fprintf(fp,"My Self Jency Mayani");
	    		fclose(fp);
			}
		}
		void read()
		{
			if(fp1==NULL)
    	{
    		printf("ERROR");
    	
		}
		else
		{
			fscanf(fp1," read.txt ");
    		fclose(fp1);
		}
		}
		
};
int main()
{
	FileManager f;
	f.FileManager();
	f.read();
	f.write();
}
