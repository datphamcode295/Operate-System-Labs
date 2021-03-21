
int read_line(char *str){
if(strspn(str, "0123456789") == strlen(str))
	return 1;
	return 0;
}
