#include <stdio.h>
#include <stdlib.h>
#include <fcntl.h>

char devfile[100];
int  myfile=0;

int main(int argc, char * argv[])
{

	//this string from the path of usb device, use "lsusb" command can list
	// and youcan find the true path "/dev/bus/usb..."
	sprintf(devfile, "/dev/bus/usb/002/004");
	myfile = open(devfile, O_RDWR);
	

	printf("%d\n", myfile);

	if(myfile==-1)
	{		
		return myfile;
	}

	
	close(myfile);

	return myfile;
}
