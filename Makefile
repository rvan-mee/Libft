libft.a: isalpha.o isdigit.o isalnum.o isascii.o isprint.o strlen.o bzero.o memcpy.o memmove.o strlcpy.o strlcat.o toupper.o tolower.o strchr.o strrchr.o strncmp.o memchr.o memcmp.o strnstr.o atoi.o calloc.o strdup.o substr.o strjoin.o strtrim.o split.o memset.o isspace.o itoa.o
	ar rcs libft.a isalpha.o isdigit.o isalnum.o isascii.o isprint.o strlen.o bzero.o memcpy.o memmove.o strlcpy.o strlcat.o toupper.o tolower.o strchr.o strrchr.o strncmp.o memchr.o memcmp.o strnstr.o atoi.o calloc.o strdup.o substr.o strjoin.o strtrim.o split.o memset.o isspace.o itoa.o

isalpha.o: isalpha.c
	gcc -Wall -Werror -Wextra -std=c99 -c isalpha.c

isdigit.o: isdigit.c
	gcc -Wall -Werror -Wextra -std=c99 -c isdigit.c

isalnum.o: isalnum.c
	gcc -Wall -Werror -Wextra -std=c99 -c isalnum.c

isascii.o: isascii.c
	gcc -Wall -Werror -Wextra -std=c99 -c isascii.c

isprint.o: isprint.c
	gcc -Wall -Werror -Wextra -std=c99 -c isprint.c

isspace.o: isspace.c
	gcc -Wall -Werror -Wextra -std=c99 -c isspace.c

strlen.o: strlen.c
	gcc -Wall -Werror -Wextra -std=c99 -c strlen.c

bzero.o: bzero.c
	gcc -Wall -Werror -Wextra -std=c99 -c bzero.c

memcpy.o: memcpy.c
	gcc -Wall -Werror -Wextra -std=c99 -c memcpy.c

memmove.o: memmove.c
	gcc -Wall -Werror -Wextra -std=c99 -c memmove.c

memset.o: memset.c
	gcc -Wall -Werror -Wextra -std=c99 -c memset.c

strlcpy.o: strlcpy.c
	gcc -Wall -Werror -Wextra -std=c99 -c strlcpy.c

strlcat.o: strlcat.c
	gcc -Wall -Werror -Wextra -std=c99 -c strlcat.c

toupper.o: toupper.c
	gcc -Wall -Werror -Wextra -std=c99 -c toupper.c

tolower.o: tolower.c
	gcc -Wall -Werror -Wextra -std=c99 -c tolower.c

strchr.o: strchr.c
	gcc -Wall -Werror -Wextra -std=c99 -c strchr.c

strrchr.o: strrchr.c
	gcc -Wall -Werror -Wextra -std=c99 -c strrchr.c

strncmp.o: strncmp.c
	gcc -Wall -Werror -Wextra -std=c99 -c strncmp.c

memchr.o: memchr.c
	gcc -Wall -Werror -Wextra -std=c99 -c memchr.c

memcmp.o: memcmp.c
	gcc -Wall -Werror -Wextra -std=c99 -c memcmp.c

strnstr.o: strnstr.c
	gcc -Wall -Werror -Wextra -std=c99 -c strnstr.c

atoi.o: atoi.c
	gcc -Wall -Werror -Wextra -std=c99 -c atoi.c

calloc.o: calloc.c
	gcc -Wall -Werror -Wextra -std=c99 -c calloc.c

strdup.o: strdup.c
	gcc -Wall -Werror -Wextra -std=c99 -c strdup.c

substr.o: substr.c
	gcc -Wall -Werror -Wextra -std=c99 -c substr.c

strjoin.o: strjoin.c
	gcc -Wall -Werror -Wextra -std=c99 -c strjoin.c

strtrim.o: strtrim.c
	gcc -Wall -Werror -Wextra -std=c99 -c strtrim.c

split.o: split.c
	gcc -Wall -Werror -Wextra -std=c99 -c split.c

itoa.o: itoa.c
	gcc -Wall -Werror -Wextra -std=c99 -c itoa.c

clean:
	rm *.o