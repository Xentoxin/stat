#include <stdio.h>
#include <stdlib.h>
#include <sys/stat.h>
#include <time.h>
int main(){
 struct stat sb;
 stat("foo" , &sb);
char strings[1000];
 sprintf(strings ,"the size of the file is %ld bytes \n" , sb.st_size);
puts(strings);
 sprintf(strings ,"the size of the file is %ld KB \n" , sb.st_size / 1024);
puts(strings);
 sprintf(strings, "the size of the file is %ld MB \n" , sb.st_size / 1048576);
puts(strings);
 sprintf( strings,"the size of the file is %ld GB \n" , sb.st_size / (1048576*1024));
puts(strings);
printf("the perms of the file are : %o \n" , sb.st_mode);
printf("the time of last access is  : %s \n" , ctime(&(sb.st_atime)));
}
