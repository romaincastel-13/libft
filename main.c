/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rcastel <rcastel@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/03 13:18:25 by rcastel           #+#    #+#             */
/*   Updated: 2025/11/05 19:52:47 by rcastel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>
#include <bsd/string.h>
#include <string.h>
#include <strings.h>
#include <stdlib.h>
#include <unistd.h>

static void mod(char *s)
{
	s[1] = 'X';
}

static char my_char_func(unsigned int i, char c)
{
	return ((c + i) % 128);
}

static void my_void_func(unsigned int i, char *c)
{
	*c = *c + i;
}

int	main(void)
{
	char s1[] = "bonjour";
	
	printf("isalpha: %d\n", ft_isalnum('w'));
	printf("isalpha: %d\n", ft_isascii('w'));
	printf("strlen: %lu\n", ft_strlen("hellow"));
	printf("touuper: %c  %c\n", ft_toupper('g'), ft_toupper('G'));
	printf("tolower: %c  %c\n", ft_tolower('g'), ft_tolower('G'));
	printf("strchr: %s\n", ft_strchr("hello", 0));
	printf("strchr: %s\n", strchr(s1+2, 'b'));
	printf("strrchr: %s\n", ft_strrchr(s1+2, 'b'));

	printf("\n");

	// char s1[7] = "halleo";
	// s1[0] = 'e';
	// char s2[] = "hellza";
	// s2[0] = 'e';
	// mod(s1);
	// mod(s2);
	// printf("s1 %s\n", s1);
	// printf("s2 %s\n", s2);
	
	int n = 4;
	unsigned char b1[10];
	unsigned char b2[10]; 
	char c1[10];
	char c2[10]; 
	c1[0] = -50;
	c2[0] = 30;
	printf("ft_strncmp: %d\n", ft_strncmp(c1, c2, n));
	printf("strncmp: %d\n", strncmp(c1, c2, n));

	char s3[] = "helo";
	char s4[] = "jjjjjjjjjjjjjjjjjjjjjjjjjjjjjjjjjjjjjjjjjjj";
	char s5[] = "jjjjjjjjjjjjjjjjjjjjjjjjjjjjjjjjjjjjjjjjjjj";
	printf("return ft_strlcpy: %lu\n", ft_strlcpy(s4, "lorem ipsum dolor sit amet", 0));
	printf("return strlcpy: %lu\n", strlcpy(s5, "lorem ipsum dolor sit amet", 0));
	printf("ft_STRLCPY(dest): %s\n", s4);
	printf("STRLCPY(dest): %s\n", s5);

	char s6[15];
	memset(s6,'a',10);
	s6[10] = 0;
	s6[5] = 0;
	char s7[15];
	memset(s7,'a',10);
	s7[10] = 0;
	s7[5] = 0;
	// printf("%s\n", s6);
	printf("return ft_strlcat: %lu\n", ft_strlcat(s6, "hio", 0));
	printf("ft_strlcat(dest): %s\n", s6);
	printf("return strlcat: %lu\n", strlcat(s7, "hio", 0));
	printf("strlcat(dest): %s\n", s7);

	printf("\n");

	printf("ft_strnstr: %s\n", ft_strnstr("hello", "lo", 5));
	printf("strnstr: %s\n", strnstr("hello", "lo", 5));

	char s8[10];
	s8[0] = 9;
	s8[1] = '+';
	s8[2] = '8';
	s8[3] = '3';
	s8[4] = ' ';
	s8[5] = '3';
	s8[6] = 0;

	printf("atoi: %d\n", atoi(s8));
	printf("ft_atoi: %d\n", ft_atoi(s8));
	printf("atoi: %d\n", atoi("-2147483648"));
	printf("ft_atoi: %d\n", ft_atoi("-2147483648"));
	

	printf("\n");

	unsigned char m1[10];

	ft_memset(m1, 'e', 5);
	printf("ft_memset: %c\n", m1[2]);
	ft_memset(m1, 260, 5);
	printf("ft_memset: %i\n", (int)m1[2]);

	memset(m1, 'e', 5);
	printf("memset: %c\n", m1[2]);

	memset(m1, 260, 5);
	printf("memset: %i\n", (int)m1[2]);

	char m2[10];
	m2[3] = 'a';
	ft_bzero(m2,  5);
	printf("ft_bzero: %d\n", (int)m2[3]);
	char m3[10];
	m3[3] = 'a';
	bzero(m3,  5);
	printf("bzero: %d\n", (int)m3[3]);

	char m4[10];
	m4[0] = 'h';
	m4[1] = -40;
	m4[2] = 'e';
	m4[3] = 'l';
	m4[4] = 'o';
	m4[5] = 0;

	printf("ft_memchr: %s\n", ft_memchr(m4, -40, 5));
	printf("memchr: %s\n", memchr(m4, -40, 5));

	printf("ft_memcpy %s\n", ft_memcpy(m4,"hellaa" , 4));
	printf("memcpy: %s\n", memcpy(m4,"hellaacvxcvcxv" , 8));

	char m5[6];
	m5[0] = 'h';
	m5[1] = 40;
	m5[2] = 'e';
	m5[3] = 'l';
	m5[4] = 'o';
	m5[5] = 0;

	char m6[6];
	m6[0] = 'h';
	m6[1] = 40;
	m6[2] = 'e';
	m6[3] = 't';
	m6[4] = 'o';
	m6[5] = 0;

	printf("ft_memcmp %d\n", ft_memcmp(m5, m6 , 2));
	printf("memcmp: %d\n", memcmp(m5, m6 , 2));

	char m7[8];
	m7[0] = 'h';
	m7[1] = 'e';
	m7[2] = 'z';
	m7[3] = 'l';
	m7[4] = 'o';
	m7[5] = 'f';
	m7[6] = 'g';
	m7[7] = 0;

	char m8[8];
	m8[0] = 'h';
	m8[1] = 'e';
	m8[2] = 'z';
	m8[3] = 'l';
	m8[4] = 'o';
	m8[5] = 'f';
	m8[6] = 'g';
	m8[7] = 0;


	printf("ft_memmove %s\n", ft_memmove(m7+1, m7+2 , 4));
	printf("memmove: %s\n", memmove(m8+1, m8+2 , 4));

	char *c10;
	char *c9;

	// c9 = calloc(1, (__LONG_MAX__) /1000000000 );
	// printf("calloc: %s\n", c9);
	// c10 = ft_calloc(1, (__LONG_MAX__) /1000000000 );
	// printf("ft_calloc: %s\n", c10);

	printf("sizeof int: %d\n", sizeof(int));

	free(c10);
	free(c9);

	int *c11;
	c11 = calloc(4, 4);
	c11[2] = 2;
	printf("calloc: %d\n", c11[2]);
	free(c11);
	printf("premalloc: %d\n", c11[2]);
	c11 = malloc(4 * 4);
	printf("malloc: %d\n", c11[2]);
	free(c11);
	c11 = calloc(4, 4);
	printf("calloc: %d\n", c11[2]);
	free(c11);

	c11 = ft_calloc(4, 4);
	c11[2] = 2;
	printf("ftcalloc: %d\n", c11[2]);
	free(c11);
	printf("premalloc: %d\n", c11[2]);
	c11 = malloc(4 * 4);
	printf("malloc: %d\n", c11[2]);
	free(c11);
	c11 = ft_calloc(4, 4);
	printf("ftcalloc: %d\n", c11[2]);
	free(c11);

	printf("\n");

	char *st1;
	st1 = ft_strdup("hi");
	printf("ftstrdup: %s\n", st1);
	free(st1);
	char *st2;
	st2 = strdup("hi");
	printf("strdup: %s\n", st2);
	free(st2);
	
	char *st3;
	st3 = ft_substr("hello world!",3,5);
	printf("ftsubstr: %s \n", st3);
	free(st3);

	st3 = ft_strjoin("hello"," world");
	printf("ft_strjoin: %s \n", st3);
	free(st3);

	st3 = ft_strtrim("  \t  sqlut   world\t!!    \n   ","\t \n");
	printf("ft_strtrim: %s|\n", st3);
	free(st3);


	char **as1;
	as1 = ft_split("hello zorld !!!!", ' ');
	printf("ft_split: %s // %s // %s \n", as1[0], as1[1], as1[2]);
	
	int i;
	i = 0;
	while (as1[i] != NULL)
		free(as1[i++]);
	free(as1);

	st1 = ft_itoa(-2);
	st3 = ft_itoa(-__INT32_MAX__-1);
	printf("ft_itoa: %s  %s \n", st1, st3);
	free(st3);
	free(st1);

	st1 = ft_strmapi("aaaaaaaaaaaaa", my_char_func);
	printf("ft_strmapi : %s \n", st1);
	free(st1);

	char st10[] = "aaaaaaaaaaaaaaaaa";
	ft_striteri(st10, my_void_func);
	printf("ft_striteri : %s \n", st10);

	ft_putchar_fd( 'e', 1);
	ft_putchar_fd('\n', 1);

	ft_putstr_fd("hello!!\n", 1);
	
	ft_putendl_fd("hello!!", 1);

	ft_putnbr_fd(-__INT32_MAX__-1, 1);
	ft_putchar_fd('\n', 1);



}
