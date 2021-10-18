libft.a: isalpha.o isdigit.o isalnum.o isascii.o isprint.o strlen.o bzero.o memcpy.o memmove.o strlcpy.o strlcat.o toupper.o tolower.o strchr.o strrchr.o strncmp.o memchr.o memcmp.o strnstr.o atoi.o calloc.o strdup.o substr.o strjoin.o strtrim.o split.o memset.o isspace.o itoa.o strmapi.o striteri.o putchar_fd.o putstr_fd.o putendl_fd.o intlength.o putnbr_fd.o lstnew_bonus.o lstadd_front_bonus.o lstsize_bonus.o lstlast_bonus.o lstadd_back_bonus.o
	ar rcs libft.a isalpha.o isdigit.o isalnum.o isascii.o isprint.o strlen.o bzero.o memcpy.o memmove.o strlcpy.o strlcat.o toupper.o tolower.o strchr.o strrchr.o strncmp.o memchr.o memcmp.o strnstr.o atoi.o calloc.o strdup.o substr.o strjoin.o strtrim.o split.o memset.o isspace.o itoa.o strmapi.o striteri.o putchar_fd.o putstr_fd.o putendl_fd.o intlength.o putnbr_fd.o lstnew_bonus.o lstadd_front_bonus.o lstsize_bonus.o lstlast_bonus.o lstadd_back_bonus.o

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

strmapi.o: strmapi.c
	gcc -Wall -Werror -Wextra -std=c99 -c strmapi.c

striteri.o: striteri.c
	gcc -Wall -Werror -Wextra -std=c99 -c striteri.c

putchar_fd.o: putchar_fd.c
	gcc -Wall -Werror -Wextra -std=c99 -c putchar_fd.c

putstr_fd.o: putstr_fd.c
	gcc -Wall -Werror -Wextra -std=c99 -c putstr_fd.c

putendl_fd.o: putendl_fd.c
	gcc -Wall -Werror -Wextra -std=c99 -c putendl_fd.c

intlength.o: intlength.c
	gcc -Wall -Werror -Wextra -std=c99 -c intlength.c

putnbr_fd.o: putnbr_fd.c
	gcc -Wall -Werror -Wextra -std=c99 -c putnbr_fd.c

lstnew_bonus.o: lstnew_bonus.c
	gcc -Wall -Werror -Wextra -std=c99 -c lstnew_bonus.c

lstadd_front_bonus.o: lstadd_front_bonus.c
	gcc -Wall -Werror -Wextra -std=c99 -c lstadd_front_bonus.c

lstsize_bonus.o: lstsize_bonus.c
	gcc -Wall -Werror -Wextra -std=c99 -c lstsize_bonus.c

lstlast_bonus.o: lstlast_bonus.c
	gcc -Wall -Werror -Wextra -std=c99 -c lstlast_bonus.c

lstadd_back_bonus.o: lstadd_back_bonus.c
	gcc -Wall -Werror -Wextra -std=c99 -c lstadd_back_bonus.c

clean:
	rm *.o