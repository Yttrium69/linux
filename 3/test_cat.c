#include <stdio.h>
#include <fcntl.h>
#include <unistd.h>
#define BUFSIZE 512
int main(int argc, char *argv[]) {
	char *infile=argv[1];
	int filedes;
	ssize_t nread;
	char des_buf[BUFSIZE];
	while(nread = read(infile, des_buf, BUFSIZE) > 0){
			write(2, des_buf, nread)>0;printf("%d\n", nread);
			}
	if(nread<0) close(infile);
	exit(0);
	return 0;
}

