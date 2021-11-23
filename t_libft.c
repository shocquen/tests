/* 
* Test libft main functions
* put all the .c, th e.h and this file in the same folder
* run :
* gcc *.c -Include *.h
* ./a.out | more
*/

#include "libft.h"
#include <stdio.h>
#include <ctype.h>

# define credit printf(" ::::::::      :::     :::    ::: :::   ::: \n:+:    :+:   :+: :+:   :+:   :+:  :+:   :+: \n+:+         +:+   +:+  +:+  +:+    +:+ +:+  \n+#++:++#++ +#++:++#++: +#++:+      +#++:   \n       +#+ +#+     +#+ +#+  +#+      +#+    \n#+#    #+# #+#     #+# #+#   #+#     #+#    \n ########  ###     ### ###    ###    ###    \n");

# define divider(name) printf("––––––––––––––– "#name" –––––––––––––––\n");
# define NL printf("\n");


void	t_atoi(void)
{
	int	i = 0;
	printf("%d: %s\n", i++, atoi("123") == ft_atoi("123") ? "OK" : "FAILURE");
	printf("%d: %s\n", i++, atoi("+123") == ft_atoi("+123") ? "OK" : "FAILURE");
	printf("%d: %s\n", i++, atoi("-123") == ft_atoi("-123") ? "OK" : "FAILURE");
	printf("%d: %s\n", i++, atoi("-12a3") == ft_atoi("-12a3") ? "OK" : "FAILURE");
	printf("%d: %s\n", i++, atoi("") == ft_atoi("") ? "OK" : "FAILURE");
}

void	t_bzero(void)
{
	char	array[8];
	char	ft_array[8];
	int	i = 0;
	
	bzero(array, 8);
	int	j = 0;
	while (!array[j])
		j++;
	ft_bzero(ft_array, 8);
	int	k = 0;
	while (!array[k])
		k++;
	printf("%d: %s\n", i++, j == k ?
	"OK" : "FAILURE");
	
	bzero(array, 5);
	j = 0;
	while (!array[j])
		j++;
	ft_bzero(ft_array, 5);
	k = 0;
	while (!array[k])
		k++;
	printf("%d: %s\n", i++, j == k ?
	"OK" : "FAILURE");

	bzero(array, 1);
	j = 0;
	while (!array[j])
		j++;
	ft_bzero(ft_array, 1);
	k = 0;
	while (!array[k])
		k++;
	printf("%d: %s\n", i++, j == k ?
	"OK" : "FAILURE");
}

void	t_isalnum(void)
{
	int i = 0;

	printf("%d: %s\n", i++, isalnum('a') == ft_isalnum('a') ?
	"OK" : "FAILURE");
	printf("%d: %s\n", i++, isalnum('2') == ft_isalnum('2') ?
	"OK" : "FAILURE");
	printf("%d: %s\n", i++, isalnum(4) == ft_isalnum(4) ?
	"OK" : "FAILURE");
}

void	t_isalpha(void)
{
	int i = 0;

	printf("%d: %s\n", i++, isalpha('a') == ft_isalpha('a') ?
	"OK" : "FAILURE");
	printf("%d: %s\n", i++, isalpha('2') == ft_isalpha('2') ?
	"OK" : "FAILURE");
	printf("%d: %s\n", i++, isalpha(4) == ft_isalpha(4) ?
	"OK" : "FAILURE");
}

void	t_isascii(void)
{
	int i = 0;

	printf("%d: %s\n", i++, isascii('a') == ft_isascii('a') ?
	"OK" : "FAILURE");
	printf("%d: %s\n", i++, isascii('2') == ft_isascii('2') ?
	"OK" : "FAILURE");
	printf("%d: %s\n", i++, isascii(4) == ft_isascii(4) ?
	"OK" : "FAILURE");
}

void	t_isdigit(void)
{
	int i = 0;

	printf("%d: %s\n", i++, isdigit('a') == ft_isdigit('a') ?
	"OK" : "FAILURE");
	printf("%d: %s\n", i++, isdigit('2') == ft_isdigit('2') ?
	"OK" : "FAILURE");
	printf("%d: %s\n", i++, isdigit(4) == ft_isdigit(4) ?
	"OK" : "FAILURE");
}

void	t_isprint(void)
{
	int i = 0;

	printf("%d: %s\n", i++, isprint('a') == ft_isprint('a') ?
	"OK" : "FAILURE");
	printf("%d: %s\n", i++, isprint('2') == ft_isprint('2') ?
	"OK" : "FAILURE");
	printf("%d: %s\n", i++, isprint(4) == ft_isprint(4) ?
	"OK" : "FAILURE");
}

void	t_memset(void)
{
	char	array[10];
	char	ft_array[10];
	int	i = 0;

	memset(array, '#', 8);
	ft_memset(ft_array, '#', 8);
	printf("%d: %s\n", i++, !memcmp(array, ft_array, 7) ?
	"OK" : "FAILURE");
	memset(array, '0', 8);
	ft_memset(ft_array, '0', 8);
	printf("%d: %s\n", i++, !memcmp(array, ft_array, 8) ?
	"OK" : "FAILURE");
	memset(array, '@', 2);
	ft_memset(ft_array, '@', 2);
	printf("%d: %s\n", i++, !memcmp(array, ft_array, 2) ?
	"OK" : "FAILURE");
}

void	t_strcmp(void)
{
	int	i = 0;

	printf("%d: %s\n", i++, strcmp("Je", "Je") == ft_strcmp("Je", "Je") ?
	"OK" : "FAILURE");
	printf("%d: %s\n", i++, strcmp("", "Je") < 0 && ft_strcmp("", "Je") < 0 ?
	"OK" : "FAILURE");
	printf("%d: %s\n", i++, strcmp("Je", "J") > 0 && ft_strcmp("Je", "J") > 0 ?
	"OK" : "FAILURE");
	printf("%d: %s\n", i++, strcmp("", "") == ft_strcmp("", "") ?
	"OK" : "FAILURE");
}

void t_strcpy(void)
{
	int	i = 0;
	char	dst[8];
	char	ft_dst[8];
	char	dst_1[5];
	char	ft_dst_1[5];
	char	dst_2[1];
	char	ft_dst_2[1];

	strcpy(dst, "abcdefg");
	ft_strcpy(ft_dst, "abcdefg");
	printf("%d: %s\n", i++, !strcmp(dst, ft_dst) ?
	"OK" : "FAILURE");
	printf("%d: %s\n", i++, !strcmp(strcpy(dst_1, "abc"), ft_strcpy(ft_dst_1, "abc"))?
	"OK" : "FAILURE");
	printf("%d: %s\n", i++, !strcmp(strcpy(dst_2, ""), ft_strcpy(ft_dst_2, ""))?
	"OK" : "FAILURE");
}

void t_strlcpy(void)
{
	int	i = 0;
	char	dst[8];
	char	ft_dst[8];
	char	dst_1[5];
	char	ft_dst_1[5];
	size_t	a;
	size_t	b;

	a = strlcpy(dst, "abcdefg", 8);
	b = ft_strlcpy(ft_dst, "abcdefg", 8);
	printf("%d: %s\n", i++, !strcmp(dst, ft_dst) ?
	"OK" : "FAILURE");
	printf("%d: %s\n", i++, a == b ? "OK" : "FAILURE");
	strlcpy(dst_1, "abc", 5);
	ft_strlcpy(ft_dst_1, "abc", 5);
	printf("%d: %s\n", i++, !strcmp(dst_1, ft_dst_1)?
	"OK" : "FAILURE");
}

void t_strlen(void)
{
	int	i;

	printf("%d: %s\n", i++, strlen("Salut") == ft_strlen("Salut") ?
	"OK" : "FAILURE");
	printf("%d: %s\n", i++, strlen("") == ft_strlen("") ?
	"OK" : "FAILURE");
}

void	t_strncmp(void)
{
	int	i = 0;

	printf("%d: %s\n", i++, strncmp("Je", "Je", 1) == ft_strncmp("Je", "Je", 1) ?
	"OK" : "FAILURE");
	printf("%d: %s\n", i++, strncmp("", "Je", 0) == ft_strncmp("", "Je", 0) ?
	"OK" : "FAILURE");
	printf("%d: %s\n", i++, strncmp("Je", "J", 1) == ft_strncmp("Je", "J", 1) ?
	"OK" : "FAILURE");
	printf("%d: %s\n", i++, strncmp("", "", 0) == ft_strncmp("", "", 0) ?
	"OK" : "FAILURE");
}

/* void t_strncpy(void) NOT IN THE SUBJECT
{
	int	i = 0;
	char	dst[8];
	char	ft_dst[8];
	char	dst_1[5];
	char	ft_dst_1[5];
	char	dst_2[1];
	char	ft_dst_2[1];

	strcpy(dst, "abcdefg");
	ft_strcpy(ft_dst, "abcdefg");
	printf("%d: %s\n", i++, !strcmp(dst, ft_dst) ?
	"OK" : "FAILURE");
	printf("%d: %s\n", i++, !strcmp(strncpy(dst_1, "abc", 5), ft_strncpy(ft_dst_1, "abc", 5))?
	"OK" : "FAILURE");
	printf("%d: %s\n", i++, !strcmp(strncpy(dst_2, "", 0), ft_strncpy(ft_dst_2, "", 0))?
	"OK" : "FAILURE");
} */

void	t_strnstr(void)
{
	int	i = 0;

	printf("%d: %s\n", i++, strnstr("bar baz bas", "baz", 7) == ft_strnstr("bar baz bas", "baz", 7) ?
	"OK" : "FAILURE");
	printf("%d: %s\n", i++, strnstr("bar baz bas", "baz", 3) == ft_strnstr("bar baz bas", "baz", 3) ?
	"OK" : "FAILURE");
}

void	t_strstr(void)
{
	int	i = 0;

	printf("%d: %s\n", i++, strstr("bar baz bas", "baz") == ft_strstr("bar baz bas", "baz") ?
	"OK" : "FAILURE");
	printf("%d: %s\n", i++, strstr("bar baz bas", "bas") == ft_strstr("bar baz bas", "bas") ?
	"OK" : "FAILURE");
	printf("%d: %s\n", i++, strstr("", "bas") == ft_strstr("", "bas") ?
	"OK" : "FAILURE");
	printf("%d: %s\n", i++, strstr("bar baz bas", "") == ft_strstr("bar baz bas", "") ?
	"OK" : "FAILURE");
}

void	t_tolower(void)
{
	int	i = 0;

	printf("%d: %s\n", i++, tolower('x') == ft_tolower('x') ?
	"OK" : "FAILURE");
	printf("%d: %s\n", i++, tolower('2') == ft_tolower('2') ?
	"OK" : "FAILURE");
	printf("%d: %s\n", i++, tolower('X') == ft_tolower('X') ?
	"OK" : "FAILURE");
}

void	t_toupper(void)
{
	int	i = 0;

	printf("%d: %s\n", i++, toupper('x') == ft_toupper('x') ?
	"OK" : "FAILURE");
	printf("%d: %s\n", i++, toupper('2') == ft_toupper('2') ?
	"OK" : "FAILURE");
	printf("%d: %s\n", i++, toupper('X') == ft_toupper('X') ?
	"OK" : "FAILURE");
}

void	t_strdup(void)
{
	int	i = 0;
	char	*array1 = strdup("Salut");
	char	*array2 = strdup("hello World");
	char	*array3 = strdup("");
	char	*ft_array1 = ft_strdup("Salut");
	char	*ft_array2 = ft_strdup("hello World");
	char	*ft_array3 = ft_strdup("");

	printf("%d: %s\n", i++, !strcmp(array1, ft_array1) ?
	"OK" : "FAILURE");
	printf("%d: %s\n", i++, !strcmp(array2, ft_array2) ?
	"OK" : "FAILURE");
	printf("%d: %s\n", i++, !strcmp(array3, ft_array3) ?
	"OK" : "FAILURE");
	free(array1);
	free(ft_array1);
	free(array2);
	free(ft_array2);
	free(array3);
	free(ft_array3);
}

void	t_strcat(void)
{
	int	i = 0;
	char	array1[10];
	char	array2[10];
	char	ft_array1[10];
	char	ft_array2[10];

	strcpy(array1, "HELL");
	strcpy(array2, "HEL");
	strcpy(ft_array1, "HELL");
	strcpy(ft_array2, "HEL");
	printf("%d: %s\n", i++, strcmp(strcat(array1, "Hello"), ft_strcat(ft_array1, "Hello")) ?
	"OK" : "FAILURE");
	printf("%d: %s\n", i++, strcmp(strcat(array2, "Hello"), ft_strcat(ft_array2, "Hello")) ?
	"OK" : "FAILURE");
}

void	t_strncat(void)
{
	int	i = 0;
	char	array1[10];
	char	array2[10];
	char	ft_array1[10];
	char	ft_array2[10];

	strcpy(array1, "HELL");
	strcpy(array2, "HEL");
	strcpy(ft_array1, "HELL");
	strcpy(ft_array2, "HEL");
	printf("%d: %s\n", i++, strcmp(strncat(array1, "Hello", 2), ft_strncat(ft_array1, "Hello", 2)) ?
	"OK" : "FAILURE");
	printf("%d: %s\n", i++, strcmp(strncat(array2, "Hello", 2), ft_strncat(ft_array2, "Hello", 2)) ?
	"OK" : "FAILURE");
}

void	t_strlcat(void)
{
	int	i = 0;
	char	array1[10];
	char	array2[10];
	char	ft_array1[10];
	char	ft_array2[10];

	strcpy(array1, "HELL");
	strcpy(array2, "HEL");
	strcpy(ft_array1, "HELL");
	strcpy(ft_array2, "HEL");
	printf("%d: %s\n", i++, strlcat(array1, "Hello", 10) == ft_strlcat(ft_array1, "Hello", 10) ?
	"OK" : "FAILURE");
	printf("%d: %s\n", i++, strlcat(array2, "Hello", 10) == ft_strlcat(ft_array2, "Hello", 10) ?
	"OK" : "FAILURE");
	printf("%d: %s\n", i++, !strcmp(array1, ft_array1) ?
	"OK" : "FAILURE");
	printf("%d: %s\n", i++, !strcmp(array2, ft_array2) ?
	"OK" : "FAILURE");
}

void	t_strchr(void)
{
	int	i = 0;

	printf("%d: %s\n", i++,	!strcmp(strchr("bar bas baz", 'z'), ft_strchr("bar bas baz", 'z')) ?
	"OK" : "FAILURE");
	printf("%d: %s\n", i++,	!strcmp(strchr("bar bas baz", 'a'), ft_strchr("bar bas baz", 'a')) ?
	"OK" : "FAILURE");
	printf("%d: %s\n", i++,	strchr("bar bas baz", 't') == ft_strchr("bar bas baz", 't') ?
	"OK" : "FAILURE");
}

void	t_strrchr(void)
{
	int	i = 0;

	printf("%d: %s\n", i++,	!strcmp(strrchr("bar bas baz", 'z'), ft_strrchr("bar bas baz", 'z')) ?
	"OK" : "FAILURE");
	printf("%d: %s\n", i++,	!strcmp(strrchr("bar bas baz", 'a'), ft_strrchr("bar bas baz", 'a')) ?
	"OK" : "FAILURE");
	printf("%d: %s\n", i++,	strrchr("bar bas baz", 't') == ft_strrchr("bar bas baz", 't') ?
	"OK" : "FAILURE");
}

void	t_memcpy(void)
{
	int	i = 0;
	char	array[5];
	int		array2[3];
	char	ft_array[5];
	int		ft_array2[3];

	memcpy(array, "Gekko", 4);
	ft_memcpy(ft_array, "Gekko", 4);
	printf("%d: %s\n", i++, !memcmp(array, ft_array, 4) ?
	"OK" : "FAILURE");
	int	intarray[] = {4, 6, 4, 6};
	printf("%d: %s\n", i++, !memcmp(memcpy(array2, intarray, 3), ft_memcpy(ft_array2, intarray, 3), 3) ?
	"OK" : "FAILURE");
}

void	t_memmove(void)
{
	int	i = 0;
	char	array[5];
	int		array2[3];
	char	ft_array[5];
	int		ft_array2[3];

	memmove(array, "Gekko", 4);
	ft_memmove(ft_array, "Gekko", 4);
	printf("%d: %s\n", i++, !memcmp(array, ft_array, 4) ?
	"OK" : "FAILURE");
	int	intarray[] = {4, 6, 4, 6};
	printf("%d: %s\n", i++, !memcmp(memmove(array2, intarray, 3), ft_memmove(ft_array2, intarray, 3), 3) ?
	"OK" : "FAILURE");
}

void t_memchr(void)
{
	int	i = 0;

	printf("%d: %s\n", i++,	!strcmp(memchr("bar bas baz", 'r', 5), ft_memchr("bar bas baz", 'r', 5)) ?
	"OK" : "FAILURE");
	printf("%d: %s\n", i++,	!strcmp(memchr("bar bas baz", 'a', 2), ft_memchr("bar bas baz", 'a', 2)) ?
	"OK" : "FAILURE");
	printf("%d: %s\n", i++,	memchr("bar bas baz", 't', 15) == ft_memchr("bar bas baz", 't', 15) ?
	"OK" : "FAILURE");
}

/* Not in the subject */
/* void	t_memccpy(void)
{
	int	i = 0;
	char	array[5];
	char	array2[5];
	char	ft_array[5];
	char	ft_array2[5];

	printf("%d: %s\n", i++, memccpy(array, "Gekko",(int)'t', 5) == ft_memccpy(ft_array, "Gekko",(int)'t', 5) ?
	"OK" : "FAILURE");
	memccpy(array2, "Gekko", (int)'k', 5);
	ft_memccpy(ft_array2, "Gekko", (int)'k', 5);
	printf("%d: %s\n%s ≠ %s", i++, !memcmp(array2, ft_array2, 3) ?
	"OK" : "FAILURE", array2, ft_array2);
} */

int	main(void)
{
	NL
	credit
	NL

	/* atoi */
	divider(atoi)
	t_atoi();
	NL

	/* bzero */
	divider(bzero)
	t_bzero();
	NL

	/* isalnum */
	divider(isalnum)
	t_isalnum();
	NL
	
	/* isalpha */
	divider(isalpha)
	t_isalpha();
	NL

	/* isascii */
	divider(isascii)
	t_isascii();
	NL

	/* isdigit */
	divider(isdigit)
	t_isdigit();
	NL

	/* isprint */
	divider(isprint)
	t_isprint();
	NL

	/* memset */
	divider(memset)
	t_memset();
	NL

	/* strcmp */
	divider(strcmp)
	t_strcmp();
	NL

	/* strcpy */
	divider(strcpy)
	t_strcpy();
	NL
	
	/* strlen */
	divider(strlen)
	t_strlen();
	NL

	/* strncmp */
	divider(strncmp)
	t_strncmp();
	NL

	/* strncpy */
	/* divider(strncpy)
	t_strncpy();
	NL */

	/* strnstr */
	divider(strnstr)
	t_strnstr();
	NL

	/* strstr */
	divider(strstr)
	t_strstr();
	NL

	/* tolower */
	divider(tolower)
	t_tolower();
	NL
	
	/* toupper */
	divider(toupper)
	t_toupper();
	NL

	/* strdup */
	divider(strdup)
	t_strdup();
	NL

	/* strcat */
	divider(strcat)
	t_strcat();
	NL

	/* strncat */
	divider(strncat)
	t_strncat();
	NL

	/* strlcat */
	divider(strlcat)
	t_strlcat();
	NL

	/* strchr */
	divider(strchr)
	t_strchr();
	NL

	/* strrchr */
	divider(strrchr)
	t_strrchr();
	NL

	/* memcpy */
	divider(memcpy)
	t_memcpy();
	NL

	/* memccpy not in the subject */

	/* memchr */
	divider(memchr)
	t_memchr();
	NL

	/* memchr */
	divider(memmove)
	t_memmove();
	NL

	/* strlcpy */
	divider(strlcpy)
	t_strlcpy();
	NL

	return (0);
}