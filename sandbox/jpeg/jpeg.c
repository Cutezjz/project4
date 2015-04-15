#include <stdio.h>
#include <stdlib.h>
#include "magickminify.h"
#include "steque.h"


int main(void){
	
	printf("In main \n");
	FILE* paraglider;
	if (!(paraglider = fopen("paraglider.jpg", "rb"))){
		printf("source file error\n");
		return -1;
	}
	ssize_t source_len;
	long position;
	
	printf("calculating end \n");
	
	fseek(paraglider, 0, SEEK_END);
	
	position = ftell(paraglider);
	
	source_len = (ssize_t)position;
	
	char* fileBuffer = malloc((int)source_len);
	printf("File len is %d\n", (int)source_len);
	
	int bytes_read = 0;
	rewind(paraglider);
	printf("bytes read %d\n", fread(fileBuffer, 1, (size_t)source_len,  paraglider));
	
	
	
	
	
	
	ssize_t dst_len;
	
	void* result;
	printf("Inint magic \n");
	
	magickminify_init();
	
	
	printf("Init success\n");
	
	result = magickminify(fileBuffer, source_len, &dst_len);
	printf("Minified!!!! new length: %d\n", dst_len);
	
	
	FILE* minifyed;
	minifyed = fopen("result.jpeg", "wb");
	int i;
	
	printf("writing...\n");
	if (fwrite(result, dst_len, 1, minifyed) != 1){
			printf("write error\n");
			return 1;
			
	} else {
		printf("write successfull\n");
			
	}
		
	fclose(paraglider);
	fclose(minifyed);
	free(fileBuffer);
	magickminify_cleanup();
	
	return 0;
	
	
	
	
}