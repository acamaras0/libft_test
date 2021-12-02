#include <stdio.h>
#include <ctype.h>
#include <string.h>
#include <stdlib.h>
#include "libft.h"

int ft_strlen_test(void)
{
	char	*str;
	str  = "This string has 30 characters.";
	printf("\033[1;33m");
	printf("\n ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ 1 ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n\n");
	printf("*ft_strlen: \n");
	printf("%s\n", "30 is the right answer: ");
	printf("%zu\n\n", ft_strlen(str));

	return (0);
}

int ft_isalpha_test(void)
{
	char c = 'd';

	printf("*ft_isalpha:   %d\n", ft_isalpha(c));
	printf("*isalpha: %d\n\n", isalpha(c));
	return (0);
}

int ft_isdigit_test(void)
{
    char c = '!';


    printf("*ft_isdigit:   %d\n", ft_isdigit(c));
    printf("*isdigit: %d\n\n", isdigit(c));
    return (0);
}

int ft_isprint_test(void)
{
	char a, b, c, d, e;
	int f;
	a = 'a';
	b = '7';
	c = '|';
	d = '\n';
	e = '\t';
	f = 7;
	
	printf("*ft_isprint: \n");
	printf("This is a letter:       %d\n", ft_isprint(a));
	printf("This is a number char:  %d\n", ft_isprint(b));
	printf("This is a pipe symbol:  %d\n", ft_isprint(c));
	printf("This is a new line:     %d\n", ft_isprint(d));
	printf("This is a tab:          %d\n", ft_isprint(e));
	printf("This is an integer:     %d\n", ft_isprint(f));

	printf("*isprint: \n");
    printf("This is a letter:       %d\n", isprint(a));
    printf("This is a number char:  %d\n", isprint(b));
    printf("This is a pipe symbol:  %d\n", isprint(c));
    printf("This is a new line:     %d\n", isprint(d));
    printf("This is a tab:          %d\n", isprint(e));
    printf("This is an integer:     %d\n\n", isprint(f));

	return (0); 
}

int ft_isalnum_test(void)
{
	char a, b, c, d;
	a = 'a';
	b = '7';
	c = ' ';
	d = '\n';

	printf("*ft_isalnum: \n");
	printf("This is a letter:       %d\n", ft_isalnum(a));
	printf("This is a number:       %d\n", ft_isalnum(b));
	printf("This is an empty space: %d\n", ft_isalnum(c));
	printf("This ia a new line:     %d\n", ft_isalnum(d));

	printf("*isalnum: \n");
	printf("This is a letter:       %d\n", isalnum(a));
    printf("This is a number:       %d\n", isalnum(b));
    printf("This is an empty space: %d\n", isalnum(c));
    printf("This ia a new line:     %d\n\n", isalnum(d));


	return (0);
}

int ft_isascii_test(void)
{
    char a, b, c, d, e;
    a = 'a';
    b = '7';
    c = ' ';
    d = '\n';
	e = '~';
	int f;
	f = -1;

    printf("*ft_isascii: \n");
    printf("This is a letter:         %d\n", ft_isascii(a));
    printf("This is a number:         %d\n", ft_isascii(b));
    printf("This is an empty space:   %d\n", ft_isascii(c));
    printf("This ia a new line:       %d\n", ft_isascii(d));
	printf("This is an ~ :            %d\n", ft_isascii(e));
    printf("This is -1:               %d\n", ft_isascii(f));

    printf("*isascii: \n");
    printf("This is a letter:         %d\n", isascii(a));
    printf("This is a number:         %d\n", isascii(b));
    printf("This is an empty space:   %d\n", isascii(c));
    printf("This ia a new line:       %d\n", isascii(d));
	printf("This is an ~ :            %d\n", isascii(e));
    printf("This is -1:               %d\n", isascii(f));
	printf("\033[0m");
	printf("\033[0;36m");
	printf("\n ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ 2 ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n\n");

    return (0);
}

int ft_toupper_test(void)
{
    char a, b, c, d, e;
    int f;
    a = 'a';
    b = '7';
    c ='|';
    d = 'B';
    e = '\t';
    f = 7;

    printf("*ft_toupper: \n");
    printf("This is a lowercase:    %c\n", ft_toupper(a));
    printf("This is a number char:  %c\n", ft_toupper(b));
    printf("This is a pipe symbol:  %c\n", ft_toupper(c));
    printf("This is an uppercase:   %c\n", ft_toupper(d));
    printf("This is a tab:          %d\n", ft_toupper(e));
    printf("This is an integer:     %d\n", ft_toupper(f));

    printf("*toupper: \n");
    printf("This is a lowercase:    %c\n", toupper(a));
    printf("This is a number char:  %c\n", toupper(b));
    printf("This is a pipe symbol:  %c\n", toupper(c));
    printf("This is an uppercase:   %c\n", toupper(d));
    printf("This is a tab:          %d\n", toupper(e));
    printf("This is an integer:     %d\n\n", toupper(f));

    return (0);
}

int ft_tolower_test(void)
{
    char a, b, c, d, e;
    int f;
    a = 'a';
    b = '7';
    c ='|';
    d = 'B';
    e = '\t';
    f = 7;

    printf("*ft_tolower: \n");
    printf("This is a lowercase:    %c\n", ft_tolower(a));
    printf("This is a number char:  %c\n", ft_tolower(b));
    printf("This is a pipe symbol:  %c\n", ft_tolower(c));
    printf("This is an uppercase:   %c\n", ft_tolower(d));
    printf("This is a tab:          %d\n", ft_tolower(e));
    printf("This is an integer:     %d\n", ft_tolower(f));

    printf("*tolower: \n");
    printf("This is a lowercase:    %c\n", tolower(a));
    printf("This is a number char:  %c\n", tolower(b));
    printf("This is a pipe symbol:  %c\n", tolower(c));
    printf("This is an uppercase:   %c\n", tolower(d));
    printf("This is a tab:          %d\n", tolower(e));
    printf("This is an integer:     %d\n\n", tolower(f));

    return (0);
}

int ft_memchr_test() 
{
	const char str[] = "www.hive.fi";
	const char ch = '.';
	char *ret;
	char *ret1;

	printf("*ft_memchr: \n");
	ret = ft_memchr(str, ch, strlen(str));
    printf("%s\n",str);
    printf("String after |%c| is - |%s|\n", ch, ret);

	printf("*memchr:  \n");
	ret1 = memchr(str, ch, strlen(str));
	printf("%s\n",str);
	printf("String after |%c| is - |%s|\n\n", ch, ret);

	return(0);
}

int ft_strchr_test () 
{
	const char str[] = "http://www.hive.fi";
	const char ch = '\0';
	char *ret;
	char *ret1;

	ret = ft_strchr(str, ch);
	printf("*ft_strchr: \n");
    printf("String after |%c| is - |%s|\n", ch, ret);

	ret1 = strchr(str, ch);
	printf("*strchr: \n");
	printf("String after |%c| is - |%s|\n\n", ch, ret);
   
	return(0);
}

int ft_strrchr_test() 
{
    const char str[] = "http://www.hive.fi";
    const char ch = 'w';
    char *ret;
    char *ret1;

    ret = ft_strrchr(str, ch);
    printf("*ft_strrchr: \n");
    printf("String after |%c| is - |%s|\n", ch, ret);

    ret1 = strrchr(str, ch);
    printf("*strrchr: \n");
    printf("String after |%c| is - |%s|\n\n", ch, ret1);

    return(0);
}

int ft_bzero_test(void)
{
	char str[100];
	char str1[100];

	char str2[] = "try me.";
	printf("*Before bzero: %s \n", str2);
	ft_bzero(str2 + 4, 2);
	printf("*After bzero: %s", str2);
	printf("\033[0m");
	printf("\033[1;33m");
	printf("\n ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ 3 ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n\n");
	return (0);
}

int ft_memcpy_test() 
{
    const char src[50] = "I really hope this will work.";
	char dest[50];

	printf("*ft_memcpy: \n");
	strcpy(dest,"Helloooo!!!");
	printf("Before memcpy dest = %s\n", dest);
	ft_memcpy(dest, src, strlen(src)+1);
	printf("After memcpy dest = %s\n", dest);
   
	printf("*memcpy  : \n");
    strcpy(dest,"Helloooo!!!");
    printf("Before memcpy dest = %s\n", dest);
    memcpy(dest, src, strlen(src)+1);
    printf("After memcpy dest = %s\n\n", dest);


    return(0);
}

int ft_strcpy_test(void)
{
	char src[100];
	char dest[100];

	char src1[100];
    char dest1[100];

	ft_strcpy(src,"This function copies a string from a source pointer to a destination pointer.");
	ft_strcpy(dest,"This is the destination pointer.");

	printf("\n*ft_strcpy: %s\n%s\n", src, dest);

	strcpy(src1, "This function copies a string from a source pointer to a destination pointer.");
	strcpy(dest1, "This is the destination point.");

	printf("\n*strcpy:   %s\n%s\n\n", src1, dest1);
	return (0);
}

int ft_strcat_test() 
{
	char src[50], dest[50];

	printf("\nSource: Everything revolves around me.\n");
	printf("Destination: How do I get home?\n\n");

	printf("*ft_strcat: \n");
	strcpy(src,  " Everything revolves around me.");
	strcpy(dest, "How do I get home?");

	ft_strcat(dest, src);

	printf("Final destination string : |%s|\n\n", dest);
   

	printf("*strcat: \n");
    strcpy(src,  " Everything revolves around me.");
    strcpy(dest, "How do I get home?");

    strcat(dest, src);

    printf("Final destination string : |%s|\n\n", dest);
	return(0);
}

int ft_strcmp_test(void)
{
	char *s1;
	char *s2;

	char *ss1;
	char *ss2;

	char *sss1;
	char *sss2;

	s1 = "a";
	s2 = "A";

	ss1 = "";
	ss2 = "Hello";

	sss1 = "42?!";
	sss2 = "42?!";

	printf("*ft_strcmp: %d\n", ft_strcmp(s1, s2));
	printf("*strcmp: %d\n\n", strcmp(s1, s2));

	printf("*ft_strcmp: %d\n", ft_strcmp(ss1, ss2));
	printf("*strcmp: %d\n\n", strcmp(ss1, ss2));
		
	printf("*ft_strcmp: %d\n", ft_strcmp(sss1, sss2));
	printf("*strcmp: %d\n\n", strcmp(sss1, sss2));

	return (0);
}

int ft_strstr_test(void)
{
    char str[] = "...and Heaven have mercy on us all";
    char find[] = "have mercy";

    char str2[] = "...and Heaven have mercy on us all";
    char find2[] = "";

    char str3[] = "...and Heaven have mercy on us all";
    char find3[] = "hello";
    
    printf("\n*strstr: %s\n", strstr(str, find));
    printf("*ft_strstr: %s\n", ft_strstr(str, find));

    printf("\n*strstr: %s\n", strstr(str2, find2));
    printf("*ft_strstr: %s\n", ft_strstr(str2, find2));

    printf("\n*strstr: %s\n", strstr(str3, find3));
    printf("*ft_strstr: %s\n\n", ft_strstr(str3, find3));
	return (0);
}

int ft_memmove_test() 
{
	char dest[] = "oldstring";
	const char src[]  = "newstring";

	printf("\n*Before ft_memmove dest = %s, src = %s\n", dest, src);
	ft_memmove(dest, src, 9);
	printf("*After ft_memmove  dest = %s, src = %s\n\n", dest, src);

	char dest1[] = "oldstring";
    const char src1[]  = "newstring";
	printf("*Before memmove    dest = %s, src = %s\n", dest1, src1);
    memmove(dest, src, 9);
    printf("*After memmove     dest = %s, src = %s\n\n", dest1, src1);
	return(0);
}

int ft_memcmp_test() 
{
	char str1[15];
	char str2[15];
	char str3[15];
	char str4[15];
	int ret;
	int ret2;

	memcpy(str1, "A", 6);
    memcpy(str2, "a", 6);

    ret =ft_memcmp(str1, str2, 5);
	
	printf("*ft_memcmp: \n");
    if(ret > 0) {
        printf("str2 is less than str1");
    } else if(ret < 0) {
        printf("str1 is less than str2");
    } else {
        printf("str1 is equal to str2");
    }

	memcpy(str3, "A", 6);
	memcpy(str4, "a", 6);

	ret2 = memcmp(str3, str4, 5);

	printf("\n*memcmp: \n");
	if(ret2 > 0) {
		printf("str2 is less than str1");
	} else if(ret2 < 0) {
		printf("str1 is less than str2");
	} else {
		printf("str1 is equal to str2");
	}
	printf("\033[0m");
	printf("\033[0;36m");
   printf("\n ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ 4 ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n\n");
	return(0);
}

int ft_strlcat_test(void)
{
    char    str0[] = "So long, and thanks for all the fish.";
    char    str1[300] = "Life, the Universe, and Everything.";
    char    str2[300] = "Life, the Universe, and Everything.";
    size_t    max = 5;
    size_t    libc, libft;

    libc = strlcat(str1, str0, max);
    libft = ft_strlcat(str2, str0, max);
    //if (strcmp(str1, str2) != 0 || libc != libft)
    {
        //printf("test failed when dstsize is smaller than dstlen + srclen\n");
        printf("*strlcat:\t[%s](%zu)\n*ft_strlcat:\t[%s](%zu)\n\n", str1, libc, str2, libft);
    }       
	return (0);
}

int ft_strdup_test(void)
{
	char *src;
	
	src = "I am really hungry, OK?!";

	printf("*ft_strdup: %s\n", ft_strdup(src));
	printf("*strdup   : %s\n\n", strdup(src));
	return (0);
}

int   ft_atoi_test()
{
    char str[] = "777";
	char str1[] = " ";
	char str2[] = "";
	char str3[] = "\n";
	char str4[] = "-2147483648";
	char str5[] = "2147483647";
	char str6[] = "=\t\v-666";

    printf("*ATOI    %i\n", atoi(str));
    printf("*FT_ATOI %i\n", ft_atoi(str));
	printf("*ATOI    %i\n", atoi(str1));
    printf("*FT_ATOI %i\n", ft_atoi(str1));
	printf("*ATOI    %i\n", atoi(str2));
    printf("*FT_ATOI %i\n", ft_atoi(str2));
	printf("*ATOI    %i\n", atoi(str3));
    printf("*FT_ATOI %i\n", ft_atoi(str3));
	printf("*ATOI    %i\n", atoi(str4));
    printf("*FT_ATOI %i\n", ft_atoi(str4));
	printf("*ATOI    %i\n", atoi(str5));
    printf("*FT_ATOI %i\n", ft_atoi(str5));
	printf("*ATOI    %i\n", atoi(str6));
    printf("*FT_ATOI %i\n\n", ft_atoi(str6));

    return 0;
}

int ft_memccpy_test() 
{
    const char src[50] = "I really hope this will work.";
    char dest[50];

    printf("*ft_memccpy: \n");
    strcpy(dest,"Helloooo!!!");
    printf("Before memmcpy dest = %s\n", dest);
    ft_memccpy(dest, src,'t',strlen(src)+1);
    printf("After memmcpy dest = %s\n\n", dest);

    printf("*memccpy: \n");
    strcpy(dest,"Helloooo!!!");
    printf("Before memmcpy dest = %s\n", dest);
    memccpy(dest, src, 't', strlen(src)+1);
    printf("After memmcpy dest = %s\n\n", dest);
    return(0);
}

int ft_strnstr_test()
{
    char str[] = "...and Heaven have mercy on us all";
    char find[] = "have mercy";
	size_t len1 = 10;

    char str2[] = "...and Heaven have mercy on us all";
    char find2[] = "";
	size_t len2 = 10;

    char str3[] = "...and Heaven have mercy on us all";
    char find3[] = "hello";
	size_t len3 = 10; 
    
    printf("\n*strnstr   : %s\n", strnstr(str, find, len1));
    printf("*ft_strnstr: %s\n\n", ft_strnstr(str, find, len1));
    printf("\n*strnstr   : %s\n", strnstr(str2, find2, len2));
    printf("*ft_strnstr: %s\n\n", ft_strnstr(str2, find2, len2));
    printf("\n*strnstr   : %s\n", strnstr(str3, find3, len3));
    printf("*ft_strnstr: %s\n\n", ft_strnstr(str3, find3, len3));
	return (0);
}

int ft_strncmp_test(void)
{
	char *s1;
	char *s2;
	size_t n1;
 
	char *ss1;
	char *ss2;
	size_t n2;

	char *sss1;
	char *sss2;
	size_t n3;

	s1 = "";
	s2 = "A";
	n1 = 1;

	ss1 = "AB";
	ss2 = "ABC";
	n2 = 2;

	sss1 = "42?!";
	sss2 = "42?!";
	n3 = 3;

	printf("*ft_strnstr: %d\n", ft_strncmp(s1, s2, n1));
	printf("*strnstr   : %d\n\n", strncmp(s1, s2, n1));

	printf("*ft_strnstr: %d\n", ft_strncmp(ss1, ss2, n2));
	printf("*strnstr   : %d\n\n", strncmp(ss1, ss2, n2));

	printf("*ft_strnstr: %d\n", ft_strncmp(sss1, sss2, n3));
	printf("*strnstr   : %d\n\n", strncmp(sss1, sss2, n3));

	return (0);
}

int ft_strncpy_test(void)
{
	char src[100];
	char dest[100];
	size_t n;
	n = 83;

	char src1[100];
	char dest1[100];
	size_t n1;
	n1 = 83;

	ft_strncpy(src, "This function copies up to n characters from the string pointed to, by src to dest.", n);
	ft_strncpy(dest, "This is the destination pointer.", n);

	printf("*ft_strncpy: %s\n%s\n%zu\n", src, dest, n);

	strncpy(src1, "This function copies up to n characters from the string pointed to, by src to dest.", n1);
    strncpy(dest1, "This is the destination pointer.", n1);

	printf("*strncpy   :   %s\n%s\n\n%zu", src1, dest1, n1);

	return (0);
}

int ft_strncat_test() 
{
    char src[50], dest[50];
	size_t n;
	n = 7;
 
    printf("\nSource: Enough is enough.\n");
    printf("Destination: How much is enough?\n\n");

    printf("*ft_strncat: \n");
    strcpy(src,  " Enough is enough.");
    strcpy(dest, "How much is enough?");

    ft_strncat(dest, src, n);

    printf("Final destination string : |%s|\n\n", dest);


    printf("*strncat: \n");
    strcpy(src,  " Enough is enough.");
    strcpy(dest, "How much is enough?");

    strncat(dest, src, n);

    printf("Final destination string : |%s|\n\n", dest);
	printf("\033[0m");
	printf("\033[0;33m");
	printf("\n ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ 5 ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n\n");


    return(0);
}

int ft_memalloc_test(void)
{
    int tests_passed = 0;
	int i = 0;
	void *mem1 = ft_memalloc(sizeof(int) * 10);
	int mem2[10] = {'\0'};
	char mem3[sizeof(int) * 10] = {'\0'};

	printf("*ft_memalloc\n");
	while (i < 40)
	{
		if (((char *)mem1)[i] != ((char *)mem2)[i])
		{
			printf("ERROR 1: mem1[i] != mem2[i]\n");
			break;
		}
		if (((char *)mem1)[i] != mem3[i])
		{
			printf("\nERROR 2: mem1[i] != mem2[i]\n");
			break;
		}
		i++;
	}
	if (i == 40)
		tests_passed++;

	free(mem1);
	if ((mem1 = ft_memalloc(-1)) == NULL)
		tests_passed++;
	else
		printf("\nERROR 3: ft_memalloc(-1) != NULL");
	
	free(mem1);
    if (tests_passed == 2)
	{
		printf("\tOK\n\n");
		return (1);
	}
    return (0);
}

int ft_putchar_test(void)
{
	printf("*ft_putchar\n\n");
    ft_putchar('H');
    ft_putchar('e');
    ft_putchar('l');
    ft_putchar('l');
    ft_putchar('o');
    ft_putchar('!');
	printf("\n\n");
    return (0);
}

int ft_putstr_test(void)
{
	char *str;
	str = "Hello there, friend!";
		printf("*ft_putstr \n\n");
	ft_putstr(str);
	printf("\n\n");
	return (0);
}

int ft_putendl_test(void)
{
    char *str;
    str= "Hello there, stranger!";

	printf("\n*ft_putendl\n\n");
    ft_putendl(str);
	printf("\n\n");
	return (0);
}

int ft_putnbr_test(void)
{
	int a, b, c, d;
	a = +7;
	b = -777;
	c = -2147483648;
	d = 2147483647;
	
	printf("*ft_putnbr\n\n");
	ft_putnbr(a);
	ft_putchar('\n');
	ft_putnbr(b);
    ft_putchar('\n');
	ft_putnbr(c);
    ft_putchar('\n');
	ft_putnbr(d);
	printf("\n\n");
    return (0);
}

int ft_strnew_test(void)
{
	char *str1 = ft_strnew(10);
	int i = 0;

	printf("\n*ft_strnew: should print 10 zeroes\n\n");
	while (i < 11)
	{
		printf("%d\n",(int)str1[i++]);
	}
	printf("%s\n", ft_strnew(10));
	printf("\n\n");

	return (0);
}

int ft_strdel_test(void)
{
	int tests_passed = 0;

	char *str1 = malloc(sizeof(char) * 10);
	char *str2 = NULL;

	printf("\n*ft_strdel\n");
	ft_strdel(&str1);
	if  (str1 == NULL)
		tests_passed++;
	else
		printf("\nERROR: str1 != NULL");

	ft_strdel(&str2);
	tests_passed++;

	if (tests_passed == 2)
	{
		printf("\tOK\n\n");
		return (1);
	}
	return (0);
}

int ft_strclr_test(void)
{
	char s1[30];
	int i = 0;
	printf("*ft_strclr\n\n");
	printf("\nThis function will print 22 zeroes and a new line if it works. \n\n");
	strcpy(s1, "I need to be cleared.");

	ft_strclr(s1);
	while (i < 22)
	{
		printf("%d\n",(int)s1[i++]);
	}	
	
	printf("%s\n\n",s1);
	return (0);

}

int     ft_strequ_test(void)
{
    int tests_passed = 0;

	printf("*ft_strequ\n");
    if (ft_strequ("hello world \t", "hello world \t") == 1 && strcmp("hello world \t", "hello world \t") == 0)
        tests_passed++;
    else
        printf("\nERROR 1");

    if (ft_strequ("\200", "\0") == 0 && strcmp("\200", "\0") > 0)
        tests_passed++;
    else
        printf("\nERROR 2");

    if (ft_strequ("", "\0") == 1 && strcmp("", "\0") == 0)
        tests_passed++;
    else
        printf("\nERROR 3");

    if (ft_strequ("test\0 test", "test") == 1 && strcmp("test\0 test", "test") == 0)
        tests_passed++;
    else
        printf("\nERROR 4");

    if (ft_strequ("abcd", "abcde") == 0 && strcmp("abcd", "abcde") < 0)
        tests_passed++;
    else
        printf("\nERROR 5");

    if (tests_passed == 5)
    {
        printf("\tOK\n\n");
        return (1);
    }    
    return (0);
}

int ft_strnequ_test(void)
{
    int tests_passed = 0;

	printf("*ft_strnequ\n");
    if (ft_strnequ("hello world \t", "hello world \t", 20) == 1 && strncmp("hello world \t", "hello world \t", 20) == 0)
        tests_passed++;
    else
        printf("\nERROR 1: ");
    
    if (ft_strnequ("\200", "\0", 1) == 0 && strncmp("\200", "\0", 1) > 0)
        tests_passed++;
    else
        printf("\nERROR 2: ");
    
    if (ft_strnequ("\200", "\0", 0) == 1 && strncmp("\200", "\0", 0) == 0)
        tests_passed++;
    else
        printf("\nERROR 3: ");

    if (ft_strnequ("", "\0", 1) == 1 && strncmp("", "\0", 1) == 0)
        tests_passed++;
    else
        printf("\nERROR 4: ");

    if (ft_strnequ("test\0 test", "test", 10) == 1 && strncmp("test\0 test", "test", 10) == 0)
        tests_passed++;
    else
        printf("\nERROR 5: ");

    if (ft_strnequ("abcd", "abcde", 4) == 1 && strncmp("abcd", "abcde", 4) == 0)
        tests_passed++;
    else
        printf("\nERROR 6: ");

    if (tests_passed == 6)
    {
        printf("\tOK\n\n");
        return (1);
    }
    return (0);
} 

int     ft_strsub_test(void)
{
    int tests_passed = 0;

	printf("*ft_strsub\n");
    char *str = ft_strsub("grab the substring", 9, 3);
    if (strcmp(str, "sub") == 0)
        tests_passed++;
    else
        printf("\nERROR: strcmp(str, 'sub') != 0\n%s)", str);

    free(str);
    str = ft_strsub("grab the substring", 0, 1);
    if (strcmp(str, "g") == 0)
        tests_passed++;
    else
        printf("\nERROR: strcmp(str, 'g') != 0\n%s)", str);

    free(str);
    str = ft_strsub("grab the substring", 1, 0);
    if (strcmp(str, "") == 0)
        tests_passed++;
    else
        printf("\nERROR: strcmp(str, '') != 0\n%s)", str);

    free(str);
    str = ft_strsub("grab the \0substring", 10, 3);
    if (strcmp(str, "sub") == 0)
        tests_passed++;
    else
        printf("\nERROR: strcmp(str, 'sub') != 0\n%s)", str);

    free(str);
    if (tests_passed == 4)
    {
        printf("\tOK\n\n");
        return (1);
    }
    return (0);
}

int     ft_strjoin_test(void)
{
    int tests_passed = 0;

		printf("*ft_strjoin\n");
    char *str = ft_strjoin("first one", " second one");
    if (strcmp(str, "first one second one") == 0)
        tests_passed++;
    else
        printf("\nERROR 1: strcmp(str, 'first one second one') != 0\n%s)", str);
    free(str);

    str = ft_strjoin("first one", "");
    if (strcmp(str, "first one") == 0)
        tests_passed++;
    else
        printf("\nERROR 2: strcmp(str, 'first one') != 0\n%s)", str);
    free(str);

    str = ft_strjoin("", "");
    if (strcmp(str, "") == 0)
        tests_passed++;
    else
        printf("\nERROR 3: strcmp(str, '') != 0\n%s)", str);
    free(str);

    if (tests_passed == 3)
    {
        printf("\tOK\n\n");
        return (1);
    }
    return (0);
}

int ft_putchar_fd_test(void)
{
	printf("*ft_putchar_fd\n");
	ft_putchar_fd('H', 2);
	ft_putchar_fd('e', 2);
	ft_putchar_fd('l', 2);
	ft_putchar_fd('l', 2);
	ft_putchar_fd('o', 2);
	ft_putchar_fd('!', 2);
	printf("\n\n");
	return (0);
}

int ft_putstr_fd_test(void)
{
	char *str;
	str = "Hello there, stranger!";
	printf("*ft_putstr_fd\n");
	ft_putstr_fd(str, 1);
	printf("\n\n");
	return(0);
}

int ft_putendl_fd_test(void)
{
    char *str;
    str= "Hello there, stranger!";

	printf("*ft_putendl_fd\n\n");
    ft_putendl_fd(str, 1);
	printf("\n");
	return (0);
}

int ft_putnbr_fd_test(void)
{
	int a, b, c, d;
	a = 7;
	b = -777;
	c = -2147483648;
	d = 2147483647;
	
	printf("*ft_putnbr_fd\n\n");
	ft_putnbr_fd(a, 1);
	ft_putchar_fd('\n', 1);
	ft_putnbr_fd(b, 1);
    ft_putchar_fd('\n', 1);
	ft_putnbr_fd(c, 1);
    ft_putchar_fd('\n', 1);
	ft_putnbr_fd(d, 1);
	printf("\n");
	printf("\033[0m");
	printf("\033[0;36m");
	printf("\n ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ 6 ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n\n");
    return (0);
}

int ft_memdel_test(void)
{
	int tests_passed = 0;

	char *ptr1 = malloc(sizeof(char) * 100);
	int *ptr2 = malloc(sizeof(int) * 25);
	void *ptr3 = malloc(100);
	void *ptr4 = NULL;

	ft_memdel((void**)&ptr1);
	ft_memdel((void**)&ptr2);
	ft_memdel(&ptr3);
	ft_memdel(&ptr4);

	printf("*ft_memdel\n");
	if (ptr1 == NULL && ptr2 == NULL && ptr3 == NULL && ptr4 == NULL)
		tests_passed++;
	else
		printf("\nERROR: ptr1 != NULL or ptr2 != NULL or ptr3 != NULL");

	if (tests_passed == 1)
	{
		printf("\tOK\n\n");
		return (1);
	}
	return (0);
}

static void    ft_iter(char *s)
{
    *s += 1;
}

int  ft_striter_test(void)
{
    int tests_passed = 0;

    char *str1 = malloc(sizeof(char) * 10);
    char *str2 = malloc(sizeof(char) * 10);
    str1 = strcpy(str1, "abcdefghi");
    str2 = strcpy(str2, "bcdefghij");

    void (*f)(char *) = ft_iter;

    ft_striter(str1, f);

	printf("*ft_striter\n");
    if (strcmp(str1, str2) == 0)
        tests_passed++;
    else
        printf("\nERROR: strcmp(str1, str2) != 0\n%s\n%s", str1, str2);

    free(str1);
    free(str2);
    if (tests_passed == 1)
    {
        printf("\tOK\n\n");
        return (1);
    }

    return (0);
}

static void    ft_iteri(unsigned int i, char *s)
{
    if (i % 2 == 0)
        *s += 1;
}

int     ft_striteri_test(void)
{
    int tests_passed = 0;

    char *str1 = malloc(sizeof(char) * 10);
    char *str2 = malloc(sizeof(char) * 10);
    str1 = strcpy(str1, "abcdefghi");
    str2 = strcpy(str2, "bbddffhhj");

    void (*f)(unsigned int, char*) = ft_iteri;

    ft_striteri(str1, f);

	printf("*ft_striteri\n");
    if (strcmp(str1, str2) == 0)
        tests_passed++;
    else
        printf("\nERROR: strcmp(str1, str2) != 0\n%s\n%s", str1, str2);

    free(str1);
    free(str2);
    if (tests_passed == 1)
    {
        printf("\tOK\n\n");
        return (1);
    }
    return (0);
}

char    ft_map(char c)
{
    return (c + 1);
}

int     ft_strmap_test(void)
{
    int tests_passed = 0;

    char *str1;
    char *str2 = malloc(sizeof(char) * 10);
    str1 = ft_strmap("abcdefghi", ft_map);
    str2 = strcpy(str2, "bcdefghij");

    printf("*ft_strmap\n");
	if (strcmp(str1, str2) == 0)
        tests_passed++;
    else
        printf("\nERROR: strcmp(str1, str2) != 0\n%s\n%s", str1, str2);

    free(str1);
    free(str2);
    if (tests_passed == 1)
    {
        printf("\tGreat Success!\n\n");
        return (1);
    }
    return (0);
}

char    ft_mapi(unsigned int i, char c)
{
    if (c % 2 == 0)
        return (c);
    return (c + 1);
}

int     ft_strmapi_test(void)
{
    int tests_passed = 0;

    char *str1;
    char *str2 =  malloc(sizeof(char) * 10);
    str1 = ft_strmapi("abcdefghi",ft_mapi);
    str2 = strcpy(str2, "bbddffhhj");

	printf("*ft_strmapi\n\n");
    if (strcmp(str1, str2) == 0)
        tests_passed++;
    else
        printf("\nERROR: strcmp(str1, str2) != 0\n%s\n%s", str1, str2);

    free(str1);
    free(str2);
    if (tests_passed == 1)
    {
        printf("\tOK\n\n");
        return (1);
    }
    return (0);
}

int     ft_strtrim_test(void)
{
    int tests_passed = 0;

    char *str = ft_strtrim(" \n\t \n  \ttrim this string\t \n \t\t  ");
	printf("*ft_strtrim\n");
    if (strcmp(str, "trim this string") == 0)
        tests_passed++;
    else
        printf("\nERROR 1: strcmp(str, 'trim this string') != 0\n|%s|", str);
    free(str);

    str = ft_strtrim("trim this string");
    if (strcmp(str, "trim this string") == 0)
        tests_passed++;
    else
        printf("\nERROR 2: strcmp(str, 'trim this string') != 0\n|%s|", str);
    free(str);

    str = ft_strtrim("");
    if (strcmp(str, "") == 0)
        tests_passed++;
    else
        printf("\nERROR 3: strcmp(str, '') != 0\n|%s|", str);
    free(str);

    str = ft_strtrim("\t\n ");
    if (strcmp(str, "") == 0)
        tests_passed++;
    else
        printf("\nERROR 4: strcmp(str, '') != 0\n|%s|", str);
    free(str);

    if (tests_passed == 4)
    {
        printf("\tOK\n\n");
        return (1);
    }
    return (0);
}

static void ft_free_array(char **arr, int size)
{
	while (size > 0)
	{
		free(arr[size - 1]);
		size--;
	}
	free(arr);
}

static int  ft_array_size(char **arr)
{
    int size = 0;

    while (arr[size] != 0)
        size++;
    return (size);
}

int     ft_strsplit_test(void)
{
    int tests_passed = 0;

    char **arr = ft_strsplit("*hello*fellow***students*", '*');
	char **arr1 = ft_strsplit("I*hate*my*life*.",'*');
	printf("*ft_strsplit\n\n");
	if (strcmp(arr1[4], ".") == 0)
		tests_passed++;
	else
		printf("You wish.\n");

	if (ft_array_size(arr) == 3)
        tests_passed++;
    else
        printf("\nERROR 1: array size not 4\n%d", ft_array_size(arr));
    
    if (strcmp(arr[0], "hello") == 0 && strcmp(arr[1], "fellow") == 0 && strcmp(arr[2], "students") == 0 && arr[3] == 0)
        tests_passed++;
    else
        printf("\nERROR 2 arr doesn't correspond to '*hello*fellow***students*'\n%s\n%s\n%s\n", arr[0], arr[1], arr[2]);
    ft_free_array(arr, 3);

    arr = ft_strsplit("*hello*fellow***students*", ' ');
    if (strcmp(arr[0], "*hello*fellow***students*") == 0 && arr[1] == 0)
        tests_passed++;
    else
        printf("\nERROR 3: arr doesn't correspond to '*hello*fellow***students*'\n%s\n%s", arr[0], arr[1]);
    ft_free_array(arr, 1);

    arr = ft_strsplit("", ' ');

    if (arr[0] == 0)
        tests_passed++;
    else
        printf("\nERROR 4: arr[0] != 0\n");
    ft_free_array(arr, 1);

	arr = ft_strsplit(0, '\0');

	if (arr == NULL)
		tests_passed++;
	else
		printf("error?");

    if (tests_passed == 6)
    {
        printf("\tOK \n\n");
        return (1);
    }
    return (0);
}

int     ft_itoa_test(void)
{
    int tests_passed = 0;

    char *str = ft_itoa(0);
	printf("*ft_itoa\n\n");
    if (strcmp(str, "0") == 0)
        tests_passed++;
    else
        printf("\nERROR 1: strcmp(str, '0') != 0\n%s", str);
    free(str);

    str = ft_itoa(-1);
    if (strcmp(str, "-1") == 0)
        tests_passed++;
    else
        printf("\nERROR 2: strcmp(str, '-1') != 0\n%s", str);
    free(str);

    str = ft_itoa(42);
    if (strcmp(str, "42") == 0)
        tests_passed++;
    else
        printf("\nERROR 3: strcmp(str, '42') != 0\n%s", str);
    free(str);

    str = ft_itoa(4000);
    if (strcmp(str, "4000") == 0)
        tests_passed++;
    else
        printf("\nERROR 4: strcmp(str, '4000') != 0\n%s", str);
    free(str);

    str = ft_itoa(2147483647);
    if (strcmp(str, "2147483647") == 0)
        tests_passed++;
    else
        printf("\nERROR 5: strcmp(str, '2147483647') != 0\n%s", str);
    free(str);

    str = ft_itoa(-2147483648);
    if (strcmp(str, "-2147483648") == 0)
        tests_passed++;
    else
        printf("\nERROR 6: strcmp(str, '-2147483648') != 0\n%s", str);
    free(str);

    if (tests_passed == 6)
    {
        printf("\tOK\n\n");
        return (1);
    }
    return (0);
}

int ft_lstnew_test(void)
{
	int tests_passed = 0;

	int content[] = {1, 2, 3, 4, 5};
	t_list *new = ft_lstnew(content, sizeof(int)*5);

	content[0] = 0;
	printf("\033[0m");
	printf("\033[0;33m");
	printf("\n ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~BONUS~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n\n");
	printf("*ft_lstnew\n\n");
	for (int i = 0; i < 5; i++)
	{
		if (((int*)new->content)[i] == i + 1)
			tests_passed++;
		else
			printf("\nERROR 1: ((int*)new->content)[i] != %d\n%d\n", i, ((int*)new->content)[i]);
	}

	if (new->next == NULL)
		tests_passed++;
	else
		printf("\nERROR 2: new->next != NULL\n");
	
	if (new->content_size == sizeof(content))
		tests_passed++;
	else
		printf("\nERROR 3: new->content_size != sizeof(content)\n");
	
	free(new->content);
	free(new);

	new = ft_lstnew(NULL, 100);

	if (new->content == NULL)
		tests_passed++;
	else
		printf("\nERROR 4: new->content != NULL\n");

	if (new->next == NULL)
		tests_passed++;
	else
		printf("\nERROR 5: new->next != NULL\n");

	if (new->content_size == 0)
		tests_passed++;
	else
		printf("\nERROR 6: new->content_size != 0\n");

	free(new);

	new = ft_lstnew("", 1);

	if (memcmp(new->content, "", 1) == 0)
		tests_passed++;
	else
		printf("\nERROR 7: new->content != '\\0'\n");

	if (new->next == NULL)
		tests_passed++;
	else
		printf("\nERROR 8: new->next != NULL\n");

	if (new->content_size == 1)
		tests_passed++;
	else
		printf("\nERROR 9: new->content_size != 1\n");
	
	free(new->content);
	free(new);

	new = ft_lstnew("not this", 0);

	if (new->content == NULL)
		tests_passed++;
	else
		printf("\nERROR 10: new->content != NULL\n");

	if (new->next == NULL)
		tests_passed++;
	else
		printf("\nERROR 11: new->next != NULL\n");

	if (new->content_size == 0)
		tests_passed++;
	else
		printf("\nERROR 12: new->content_size != 0\n");
	
	free(new);

	if (tests_passed == 16)
	{
		printf("\tOK\n\n");
		return (1);
	}
	return (0);
}

void ft_free_content(void *content, size_t size)
{
	if (size != 0)
		free(content);
}

int ft_lstadd_test(void)
{
	int tests_passed = 0;

	int content[] = {1, 2, 3, 4, 5};
	t_list *first = ft_lstnew(content, sizeof(int)*5);
	t_list *second = ft_lstnew("42", sizeof(char)*3);
	t_list *last = ft_lstnew("", 1);

	ft_lstadd(&first, second);
	ft_lstadd(&first, last);

	printf("*ft_lstadd\n\n");
	if (first->content_size == 1)
		tests_passed++;
	else
		printf("\nERROR: first->content_size != 1");

	if (first->next->content_size == 3)
		tests_passed++;
	else
		printf("\nERROR: first->content_size != 1");

	if (first->next->next->content_size == sizeof(int)*5)
		tests_passed++;
	else
		printf("\nERROR: first->content_size != sizeof(int)*5");

	ft_lstdel(&first, ft_free_content);

	if (tests_passed == 3)
	{
		printf("\tOK\n\n");
		return (1);
	}
	return (0);
}

void ft_del1(void *content, size_t size)
{
	if (size != 0)
		free(content);
}

int ft_lstdelone_test(void)
{
	int tests_passed = 0;

	int content[] = {1, 2, 3, 4, 5};
	t_list *new = ft_lstnew(content, sizeof(int)*5);
	t_list *next = ft_lstnew("42", sizeof(char)*3);

	new->next = next;

	ft_lstdelone(&new, ft_del1);
	printf("*ft_lstdelone\n\n");
	if (new == NULL)
		tests_passed++;
	else
		printf("\nERROR: new != NULL\n");
	
	if (next != NULL)
		tests_passed++;
	else
		printf("\nERROR: next == NULL\n");

	ft_lstdelone(&next, ft_del1);

	if (next == NULL)
		tests_passed++;
	else
		printf("\nERROR: next != NULL\n");

	new = ft_lstnew("", 0);
	ft_lstdelone(&new, ft_del1);

	if (new == NULL)
		tests_passed++;
	else
		printf("\nERROR: new != NULL\n");

	if (tests_passed == 4)
	{
		printf("\tOK\n\n");
		return (1);
	}
	return (0);
}

void	ft_f1(t_list *elem)
{
	elem->content_size++;
}

int ft_lstiter_test(void)
{
	int tests_passed = 0;

	int content[] = {1, 2, 3, 4, 5};
	t_list *first = ft_lstnew(content, sizeof(int)*5);
	t_list *second = ft_lstnew("42", sizeof(char)*3);
	t_list *last = ft_lstnew("", 1);

	first->next = second;
	second->next = last;

	ft_lstiter(first, ft_f1);
	printf("*ft_lstiter\n\n");
	if (first->content_size == sizeof(content) + 1)
		tests_passed++;
	else
		printf("\nERROR 1: first->content_size != sizeof(content) + 1\n");

	if (second->content_size == sizeof(char)*3 + 1)
		tests_passed++;
	else
		printf("\nERROR 2: second->content_size != sizeof(char)*3 + 1\n");

	if (last->content_size == sizeof(char) + 1)
		tests_passed++;
	else
		printf("\nERROR 3: last->content_size != sizeof(char) + 1\n");

	ft_lstdel(&first, ft_free_content);

	if (tests_passed == 3)
	{
		printf("\tOK\n\n");
		return (1);
	}
	return (0);
}

t_list *ft_f2(t_list *elem)
{
	t_list *new = ft_lstnew(elem->content, elem->content_size);
	if (new != NULL)
		new->content_size++;
	return (new);
}

int ft_lstmap_test(void)
{
	int tests_passed = 0;

	int content[] = {1, 2, 3, 4, 5};
	t_list *first = ft_lstnew(content, sizeof(int)*5);
	t_list *second = ft_lstnew("42", sizeof(char)*3);
	t_list *last = ft_lstnew("", 1);

	first->next = second;
	second->next = last;

	t_list *new = ft_lstmap(first, ft_f2);

	printf("*ft_lstmap\n\n");
	if (new->content_size == sizeof(content) + 1)
		tests_passed++;
	else
		printf("\nERROR: first->content_size != sizeof(content) + 1\n");

	if (new->next->content_size == sizeof(char)*3 + 1)
		tests_passed++;
	else
		printf("\nERROR: second->content_size != sizeof(char)*3 + 1\n");

	if (new->next->next->content_size == sizeof(char) + 1)
		tests_passed++;
	else
		printf("\nERROR: last->content_size != sizeof(char) + 1\n");

	ft_lstdel(&first, ft_free_content);
	ft_lstdel(&new, ft_free_content);

	if (tests_passed == 3)
	{
		printf("\tOK\n\n");
		return (1);
	}
	return (0);
}

int ft_lstdel_test(void)
{
	int tests_passed = 0;

	int content[] = {1, 2, 3, 4, 5};
	t_list *first = ft_lstnew(content, sizeof(int)*5);
	t_list *second = ft_lstnew("42", sizeof(char)*3);
	t_list *last = ft_lstnew("", 1);

	first->next = second;
	second->next = last;

	ft_lstdel(&first, ft_free_content);
	printf("*ft_lstdel\n");
	if (first == NULL)
		tests_passed++;
	else
		printf("\nERROR: first != NULL");

	if (tests_passed == 1)
	{
		printf("\tOK\n\n");
		return (1);
	}
	return (0);
}

int main()
{

ft_strlen_test();
ft_isalpha_test();
ft_isdigit_test();
ft_isalnum_test();
ft_isascii_test();
ft_isprint_test();

ft_toupper_test();
ft_tolower_test();
ft_memchr_test();
ft_strchr_test();
ft_strrchr_test();
ft_bzero_test();

ft_memcpy_test();
ft_strcpy_test();
ft_strcat_test();
ft_strcmp_test();
ft_strstr_test();
ft_memmove_test();
ft_memcmp_test();

ft_strlcat_test();
ft_strdup_test();
ft_atoi_test();
ft_memccpy_test();
ft_strnstr_test();
ft_strncmp_test();
ft_strncpy_test();
ft_strncat_test();

ft_memalloc_test();
ft_putchar_test();
ft_putstr_test();
ft_putendl_test();
ft_putnbr_test();
ft_strnew_test();
ft_strdel_test();
ft_strclr_test();
ft_strequ_test();
ft_strnequ_test();
ft_strsub_test();
ft_strjoin_test();
ft_putchar_fd_test();
ft_putstr_fd_test();
ft_putendl_fd_test();
ft_putnbr_fd_test();

ft_memdel_test();
ft_striter_test();
ft_striteri_test();
ft_strmap_test();
ft_strmapi_test();
ft_strtrim_test();
ft_strsplit_test();
ft_itoa_test();

ft_lstnew_test();
ft_lstadd_test();
ft_lstdel_test();
ft_lstdelone_test();
ft_lstiter_test();
ft_lstmap_test();

return(0);
}