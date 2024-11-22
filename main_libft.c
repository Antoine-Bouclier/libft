/* //ft_isalpha

#include <stdio.h>
#include <ctype.h>
int	main(void)
{
	// Test avec des chiffres
	printf("Testing digits:\n");
	for (int c = '0'; c <= '9'; c++)
		printf("ft_isalpha('%c') = %d | isalpha('%c') = %d\n", c, ft_isalpha(c), c, isalpha(c));

	// Test avec des lettres majuscules
	printf("\nTesting uppercase letters:\n");
	for (int c = 'A'; c <= 'Z'; c++)
		printf("ft_isalpha('%c') = %d | isalpha('%c') = %d\n", c, ft_isalpha(c), c, isalpha(c));

	// Test avec des lettres minuscules
	printf("\nTesting lowercase letters:\n");
	for (int c = 'a'; c <= 'z'; c++)
		printf("ft_isalpha('%c') = %d | isalpha('%c') = %d\n", c, ft_isalpha(c), c, isalpha(c));

	// Test avec des caractères non imprimables
	printf("\nTesting non-printable characters:\n");
	for (int c = 0; c < 32; c++)
		printf("ft_isalpha(%d) = %d | isalpha(%d) = %d\n", c, ft_isalpha(c), c, isalpha(c));
	printf("ft_isalpha(127) = %d | isalpha(127) = %d\n", ft_isalpha(127), isalpha(127)); // DEL

	// Test avec des caractères hors plage ASCII
	printf("\nTesting out-of-range values:\n");
	int out_of_range[] = {-1, 128, 255, 1000, -128};
	for (size_t i = 0; i < sizeof(out_of_range) / sizeof(out_of_range[0]); i++)
		printf("ft_isalpha(%d) = %d | isalpha(%d) = %d\n", out_of_range[i], ft_isalpha(out_of_range[i]), out_of_range[i], isalpha(out_of_range[i]));

	return 0;
} */
//-------------------------------------
/* //ft_isdigit

/* #include <stdio.h>
#include <ctype.h>
int	main(void)
{
	// Test avec des chiffres
	printf("Testing digits:\n");
	for (int c = '0'; c <= '9'; c++)
		printf("ft_isdigit('%c') = %d | isdigit('%c') = %d\n", c, ft_isdigit(c), c, isdigit(c));

	// Test avec des lettres majuscules
	printf("\nTesting uppercase letters:\n");
	for (int c = 'A'; c <= 'Z'; c++)
		printf("ft_isdigit('%c') = %d | isdigit('%c') = %d\n", c, ft_isdigit(c), c, isdigit(c));

	// Test avec des lettres minuscules
	printf("\nTesting lowercase letters:\n");
	for (int c = 'a'; c <= 'z'; c++)
		printf("ft_isdigit('%c') = %d | isdigit('%c') = %d\n", c, ft_isdigit(c), c, isdigit(c));

	// Test avec des caractères non imprimables
	printf("\nTesting non-printable characters:\n");
	for (int c = 0; c < 32; c++)
		printf("ft_isdigit(%d) = %d | isdigit(%d) = %d\n", c, ft_isdigit(c), c, isdigit(c));
	printf("ft_isdigit(127) = %d | isdigit(127) = %d\n", ft_isdigit(127), isdigit(127)); // DEL

	// Test avec des caractères hors plage ASCII
	printf("\nTesting out-of-range values:\n");
	int out_of_range[] = {-1, 128, 255, 1000, -128};
	for (size_t i = 0; i < sizeof(out_of_range) / sizeof(out_of_range[0]); i++)
		printf("ft_isdigit(%d) = %d | isdigit(%d) = %d\n", out_of_range[i], ft_isdigit(out_of_range[i]), out_of_range[i], isdigit(out_of_range[i]));

	return 0;
} */
//-------------------------------------
/* //ft_isalnum

/* #include <stdio.h>
#include <ctype.h>
int	main(void)
{
	// Test avec des chiffres
	printf("Testing digits:\n");
	for (int c = '0'; c <= '9'; c++)
		printf("ft_isalnum('%c') = %d | isalnum('%c') = %d\n", c, ft_isalnum(c), c, isalnum(c));

	// Test avec des lettres majuscules
	printf("\nTesting uppercase letters:\n");
	for (int c = 'A'; c <= 'Z'; c++)
		printf("ft_isalnum('%c') = %d | isalnum('%c') = %d\n", c, ft_isalnum(c), c, isalnum(c));

	// Test avec des lettres minuscules
	printf("\nTesting lowercase letters:\n");
	for (int c = 'a'; c <= 'z'; c++)
		printf("ft_isalnum('%c') = %d | isalnum('%c') = %d\n", c, ft_isalnum(c), c, isalnum(c));

	// Test avec des caractères non imprimables
	printf("\nTesting non-printable characters:\n");
	for (int c = 0; c < 32; c++)
		printf("ft_isalnum(%d) = %d | isalnum(%d) = %d\n", c, ft_isalnum(c), c, isalnum(c));
	printf("ft_isalnum(127) = %d | isalnum(127) = %d\n", ft_isalnum(127), isalnum(127)); // DEL

	// Test avec des caractères hors plage ASCII
	printf("\nTesting out-of-range values:\n");
	int out_of_range[] = {-1, 128, 255, 1000, -128};
	for (size_t i = 0; i < sizeof(out_of_range) / sizeof(out_of_range[0]); i++)
		printf("ft_isalnum(%d) = %d | isalnum(%d) = %d\n", out_of_range[i], ft_isalnum(out_of_range[i]), out_of_range[i], isalnum(out_of_range[i]));

	return 0;
} */
//-------------------------------------
/* //ft_isascii

/* #include <stdio.h>
#include <ctype.h>
int	main(void)
{
	// Test avec des chiffres
	printf("Testing digits:\n");
	for (int c = '0'; c <= '9'; c++)
		printf("ft_isascii('%c') = %d | isascii('%c') = %d\n", c, ft_isascii(c), c, isascii(c));

	// Test avec des lettres majuscules
	printf("\nTesting uppercase letters:\n");
	for (int c = 'A'; c <= 'Z'; c++)
		printf("ft_isascii('%c') = %d | isascii('%c') = %d\n", c, ft_isascii(c), c, isascii(c));

	// Test avec des lettres minuscules
	printf("\nTesting lowercase letters:\n");
	for (int c = 'a'; c <= 'z'; c++)
		printf("ft_isascii('%c') = %d | isascii('%c') = %d\n", c, ft_isascii(c), c, isascii(c));

	// Test avec des caractères non imprimables
	printf("\nTesting non-printable characters:\n");
	for (int c = 0; c < 32; c++)
		printf("ft_isascii(%d) = %d | isascii(%d) = %d\n", c, ft_isascii(c), c, isascii(c));
	printf("ft_isascii(127) = %d | isascii(127) = %d\n", ft_isascii(127), isascii(127)); // DEL

	// Test avec des caractères hors plage ASCII
	printf("\nTesting out-of-range values:\n");
	int out_of_range[] = {-1, 128, 255, 1000, -128};
	for (size_t i = 0; i < sizeof(out_of_range) / sizeof(out_of_range[0]); i++)
		printf("ft_isascii(%d) = %d | isascii(%d) = %d\n", out_of_range[i], ft_isascii(out_of_range[i]), out_of_range[i], isascii(out_of_range[i]));

	return 0;
} */
//-------------------------------------
/* //ft_isprint

/* #include <stdio.h>
#include <ctype.h>
int	main(void)
{
	// Test avec des chiffres
	printf("Testing digits:\n");
	for (int c = '0'; c <= '9'; c++)
		printf("ft_isprint('%c') = %d | isprint('%c') = %d\n", c, ft_isprint(c), c, isprint(c));

	// Test avec des lettres majuscules
	printf("\nTesting uppercase letters:\n");
	for (int c = 'A'; c <= 'Z'; c++)
		printf("ft_isprint('%c') = %d | isprint('%c') = %d\n", c, ft_isprint(c), c, isprint(c));

	// Test avec des lettres minuscules
	printf("\nTesting lowercase letters:\n");
	for (int c = 'a'; c <= 'z'; c++)
		printf("ft_isprint('%c') = %d | isprint('%c') = %d\n", c, ft_isprint(c), c, isprint(c));

	// Test avec des caractères non imprimables
	printf("\nTesting non-printable characters:\n");
	for (int c = 0; c < 32; c++)
		printf("ft_isprint(%d) = %d | isprint(%d) = %d\n", c, ft_isprint(c), c, isprint(c));
	printf("ft_isprint(127) = %d | isprint(127) = %d\n", ft_isprint(127), isprint(127)); // DEL

	// Test avec des caractères hors plage ASCII
	printf("\nTesting out-of-range values:\n");
	int out_of_range[] = {-1, 128, 255, 1000, -128};
	for (size_t i = 0; i < sizeof(out_of_range) / sizeof(out_of_range[0]); i++)
		printf("ft_isprint(%d) = %d | isprint(%d) = %d\n", out_of_range[i], ft_isprint(out_of_range[i]), out_of_range[i], isprint(out_of_range[i]));

	return 0;
} */
//-------------------------------------
/* //ft_strlen

/* #include <stdio.h>
#include <string.h>
int	main(void)
{
	// Ensemble de tests
	const char *test_cases[] = {
		"",                            // Chaîne vide
		"Hello, World!",               // Chaîne classique
		"ABCDEFGHIJKLMNOPQRSTUVWXYZ",  // Lettres majuscules
		"abcdefghijklmnopqrstuvwxyz",  // Lettres minuscules
		"0123456789",                  // Chiffres
		" \t\n\r\v\f",                 // Caractères d'espacement
		"!@#$%^&*()_+-=[]{}|;:',.<>?/", // Caractères spéciaux
		"Longueur avec un caractère spécial \x01", // Avec un caractère non imprimable
		"Cette chaîne est très très très très longue et contient beaucoup de mots pour tester la performance et la robustesse de ft_strlen.",
		NULL // Cas limite pour un pointeur NULL (ne sera pas testé directement)
	};

	// Tests
	printf("Testing ft_strlen:\n\n");
	for (int i = 0; test_cases[i] != NULL; i++) {
		const char *str = test_cases[i];
		printf("Test case %d: \"%s\"\n", i + 1, str);
		printf("ft_strlen: %zu | strlen: %zu\n\n", ft_strlen(str), strlen(str));
	}

	// Test avec un pointeur NULL (non recommandé, mais pour vérification)
	printf("Testing with NULL (undefined behavior):\n");
	const char *null_str = NULL;
	// Note : Ce test provoque un comportement indéfini. Activez-le avec précaution.
	//printf("ft_strlen(NULL): %zu | strlen(NULL): (undefined behavior, may crash)\n", ft_strlen(null_str));

	return (0);
} */
//-------------------------------------
/* //ft_memset

/* #include <stdio.h>
#include <string.h>
int main(void)
{
		// Test avec différentes tailles de mémoire et valeurs de caractère
	size_t test_sizes[] = { 0, 1, 5, 10, 20, 50, 100 };
	int test_values[] = { 0, 'A', '1', 255, 127, 42 };

	// Test de la fonction ft_memset
	printf("Testing ft_memset:\n\n");

	for (size_t i = 0; i < sizeof(test_sizes) / sizeof(test_sizes[0]); i++) {
		for (size_t j = 0; j < sizeof(test_values) / sizeof(test_values[0]); j++) {
			size_t size = test_sizes[i];
			int value = test_values[j];

			// Allocation de mémoire pour le test
			unsigned char *ft_result = (unsigned char *)malloc(size);
			unsigned char *mem_result = (unsigned char *)malloc(size);

			// Remplissage avec ft_memset et memset
			ft_memset(ft_result, value, size);
			memset(mem_result, value, size);

			// Affichage des résultats pour comparaison
			printf("Test size %zu, value %d:\n", size, value);
			printf("ft_memset result: ");
			for (size_t k = 0; k < size; k++)
				printf("%d ", ft_result[k]);
			printf("\n");

			printf("memset result: ");
			for (size_t k = 0; k < size; k++)
				printf("%d ", mem_result[k]);
			printf("\n\n");

			// Vérification des résultats
			for (size_t k = 0; k < size; k++) {
				if (ft_result[k] != mem_result[k]) {
					printf("Test failed for size %zu and value %d\n\n", size, value);
					break;
				}
			}

			// Libération de la mémoire
			free(ft_result);
			free(mem_result);
		}
	}

	return (0);
} */
//-------------------------------------
/* //ft_bzero

/* #include <stdio.h>
#include <string.h>
int	main(void)
{
	// Test avec différentes tailles de mémoire
	size_t test_sizes[] = { 0, 1, 5, 10, 20, 50, 100 };
	
	// Test de la fonction ft_bzero
	printf("Testing ft_bzero:\n\n");

	for (size_t i = 0; i < sizeof(test_sizes) / sizeof(test_sizes[0]); i++) {
		size_t size = test_sizes[i];

		// Allocation de mémoire pour le test
		unsigned char *ft_result = (unsigned char *)malloc(size);
		unsigned char *bzero_result = (unsigned char *)malloc(size);

		// Remplissage avec ft_bzero et bzero
		ft_bzero(ft_result, size);
		bzero(bzero_result, size);

		// Affichage des résultats pour comparaison
		printf("Test size %zu:\n", size);
		printf("ft_bzero result: ");
		for (size_t k = 0; k < size; k++)
			printf("%d ", ft_result[k]);
		printf("\n");

		printf("bzero result: ");
		for (size_t k = 0; k < size; k++)
			printf("%d ", bzero_result[k]);
		printf("\n\n");

		// Vérification des résultats
		for (size_t k = 0; k < size; k++) {
			if (ft_result[k] != bzero_result[k]) {
				printf("Test failed for size %zu\n\n", size);
				break;
			}
		}

		// Libération de la mémoire
		free(ft_result);
		free(bzero_result);
	}
	return (0);
} */
//-------------------------------------
/* //ft_memmove

/* #include <stdio.h>
#include <string.h>
int	main(void)
{
    char buf1[50], buf2[50];
    char *result_std, *result_ft;

    printf("===== Test de ft_memmove =====\n");

    // Test 1 : Pas de chevauchement
    strcpy(buf1, "abcdef");
    strcpy(buf2, "abcdef");
    result_std = memmove(buf1 + 10, buf1, 6);
    result_ft = ft_memmove(buf2 + 10, buf2, 6);
    printf("Pas de chevauchement :\n");
    printf("std : %s, ft : %s\n", buf1 + 10, buf2 + 10);

    // Test 2 : Chevauchement avant
    strcpy(buf1, "abcdef");
    strcpy(buf2, "abcdef");
    result_std = memmove(buf1 + 2, buf1, 6);
    result_ft = ft_memmove(buf2 + 2, buf2, 6);
    printf("Chevauchement avant :\n");
    printf("std : %s, ft : %s\n", buf1, buf2);

    // Test 3 : Chevauchement arrière
    strcpy(buf1, "abcdef");
    strcpy(buf2, "abcdef");
    result_std = memmove(buf1, buf1 + 2, 6);
    result_ft = ft_memmove(buf2, buf2 + 2, 6);
    printf("Chevauchement arrière :\n");
    printf("std : %s, ft : %s\n", buf1, buf2);

    // Test 4 : len = 0
    strcpy(buf1, "abcdef");
    strcpy(buf2, "abcdef");
    result_std = memmove(buf1, buf1, 0);
    result_ft = ft_memmove(buf2, buf2, 0);
    printf("len = 0 :\n");
    printf("std : %s, ft : %s\n", buf1, buf2);

    // Test 5 : Pointeurs nuls (NULL, NULL, 0)
    result_std = memmove(NULL, NULL, 0);
    result_ft = ft_memmove(NULL, NULL, 0);
    printf("Pointeurs nuls (NULL, NULL, 0) :\n");
    printf("std : %p, ft : %p\n", result_std, result_ft);

    // Test 6 : Pointeurs nuls avec len > 0
    result_std = NULL;
    result_ft = NULL;
    printf("Pointeurs nuls (NULL, NULL, 5) :\n");
    printf("std : ");
    fflush(stdout);
    result_std = memmove(NULL, NULL, 5); // Comportement indéfini, risqué
    printf("ft : ");
    fflush(stdout);
    result_ft = ft_memmove(NULL, NULL, 5); // Devrait renvoyer NULL

    printf("std : %p, ft : %p\n", result_std, result_ft);
} */
//-------------------------------------
/* //ft_memmove

/* #include <stdio.h>
#include <string.h>
int	main(void)
{
    char buf1[50], buf2[50];
    char *result_std, *result_ft;

    printf("===== Test de ft_memmove =====\n");

    // Test 1 : Pas de chevauchement
    strcpy(buf1, "abcdef");
    strcpy(buf2, "abcdef");
    result_std = memmove(buf1 + 10, buf1, 6);
    result_ft = ft_memmove(buf2 + 10, buf2, 6);
    printf("Pas de chevauchement :\n");
    printf("std : %s, ft : %s\n", buf1 + 10, buf2 + 10);

    // Test 2 : Chevauchement avant
    strcpy(buf1, "abcdef");
    strcpy(buf2, "abcdef");
    result_std = memmove(buf1 + 2, buf1, 6);
    result_ft = ft_memmove(buf2 + 2, buf2, 6);
    printf("Chevauchement avant :\n");
    printf("std : %s, ft : %s\n", buf1, buf2);

    // Test 3 : Chevauchement arrière
    strcpy(buf1, "abcdef");
    strcpy(buf2, "abcdef");
    result_std = memmove(buf1, buf1 + 2, 6);
    result_ft = ft_memmove(buf2, buf2 + 2, 6);
    printf("Chevauchement arrière :\n");
    printf("std : %s, ft : %s\n", buf1, buf2);

    // Test 4 : len = 0
    strcpy(buf1, "abcdef");
    strcpy(buf2, "abcdef");
    result_std = memmove(buf1, buf1, 0);
    result_ft = ft_memmove(buf2, buf2, 0);
    printf("len = 0 :\n");
    printf("std : %s, ft : %s\n", buf1, buf2);

    // Test 5 : Pointeurs nuls (NULL, NULL, 0)
    result_std = memmove(NULL, NULL, 0);
    result_ft = ft_memmove(NULL, NULL, 0);
    printf("Pointeurs nuls (NULL, NULL, 0) :\n");
    printf("std : %p, ft : %p\n", result_std, result_ft);

    // Test 6 : Pointeurs nuls avec len > 0
    result_std = NULL;
    result_ft = NULL;
    printf("Pointeurs nuls (NULL, NULL, 5) :\n");
    printf("std : ");
    fflush(stdout);
    result_std = memmove(NULL, NULL, 5); // Comportement indéfini, risqué
    printf("ft : ");
    fflush(stdout);
    result_ft = ft_memmove(NULL, NULL, 5); // Devrait renvoyer NULL

    printf("std : %p, ft : %p\n", result_std, result_ft);
} */
//-------------------------------------
/* //ft_strlcpy

/* #include <stdio.h>
#include <bsd/string.h>
int main(void)
{
	// Test de différentes tailles de mémoire et valeurs de chaînes
	const char *test_sources[] = {
		"Hello",                // Chaîne simple
		"Short",                // Chaîne courte
		"Longer string",        // Chaîne de taille intermédiaire
		"MaximumLengthTest",    // Chaîne relativement longue
		"Single",               // Chaîne de longueur un
		"",                     // Chaîne vide
		NULL                    // Pointeur NULL (ne sera pas testé directement)
	};

	size_t test_dst_sizes[] = { 0, 1, 5, 10, 20, 50 };

	// Test de la fonction ft_strlcpy
	printf("Testing ft_strlcpy:\n\n");

	for (size_t i = 0; test_sources[i] != NULL; i++) {
		for (size_t j = 0; j < sizeof(test_dst_sizes) / sizeof(test_dst_sizes[0]); j++) {
			const char *src = test_sources[i];
			size_t dstsize = test_dst_sizes[j];

			// Allocation de mémoire pour le test
			char *ft_dst = (char *)malloc(dstsize + 1); // +1 pour le caractère null
			char *mem_dst = (char *)malloc(dstsize + 1); // +1 pour le caractère null

			// Initialisation des chaînes
			if (ft_dst) ft_dst[0] = '\0';
			if (mem_dst) mem_dst[0] = '\0';

			// Appel à ft_strlcpy et strlcpy
			size_t ft_result = ft_strlcpy(ft_dst, src, dstsize);
			size_t mem_result = strlcpy(mem_dst, src, dstsize);

			// Affichage des résultats pour comparaison
			printf("Test with src: \"%s\", dstsize: %zu\n", src, dstsize);
			printf("ft_strlcpy result: %zu, ft_dst: \"%s\"\n", ft_result, ft_dst);
			printf("strlcpy result: %zu, mem_dst: \"%s\"\n\n", mem_result, mem_dst);

			// Vérification des résultats
			if (ft_result != mem_result || strcmp(ft_dst, mem_dst) != 0) {
				printf("Test failed for src: \"%s\", dstsize: %zu\n", src, dstsize);
			}

			// Libération de la mémoire
			free(ft_dst);
			free(mem_dst);
		}
	}

	return 0;
} */
//-------------------------------------
/* //ft_strlcat

/* #include <stdio.h>
#include <bsd/string.h>
int main(void)
{
	// Différents cas de test pour dst, src et size
	const char *test_dst[] = {
		"Hello, ",      // Dest vide
		"Short",        // Dest assez court
		"AlreadyFull",  // Dest déjà presque plein
		NULL
	};
	const char *test_src[] = {
		"World!",       // Src court
		"1234567890",   // Src plus long
		"Short",        // Src court mais différent
		NULL
	};
	size_t test_sizes[] = { 5, 10, 20, 25 };

	// Affichage de l'en-tête
	printf("Testing ft_strlcat:\n\n");

	// Parcours des différents cas
	for (int i = 0; test_dst[i] != NULL; i++) {
		for (int j = 0; test_src[j] != NULL; j++) {
			for (size_t k = 0; k < sizeof(test_sizes) / sizeof(test_sizes[0]); k++) {
				// Initialisation des chaînes de destination et source
				char *dst = strdup(test_dst[i]);
				const char *src = test_src[j];
				size_t size = test_sizes[k];

				// Sauvegarde de la longueur initiale de la chaîne de destination
				size_t len_dst = ft_strlen(dst);
				size_t len_src = ft_strlen(src);

				// Calcul de la capacité avant appel de la fonction
				char *dst_copy = strdup(dst);

				// Utilisation de ft_strlcat et de strlcat
				size_t ft_result = ft_strlcat(dst, src, size);
				size_t libc_result = strlcat(dst_copy, src, size);

				// Affichage des résultats
				printf("Test dst = \"%s\", src = \"%s\", size = %zu:\n", test_dst[i], test_src[j], size);
				printf("ft_strlcat: result = %zu, dst = \"%s\"\n", ft_result, dst);
				printf("libc strlcat: result = %zu, dst = \"%s\"\n\n", libc_result, dst_copy);

				// Comparaison des résultats
				if (ft_result != libc_result || strcmp(dst, dst_copy) != 0) {
					printf("Test failed for dst = \"%s\", src = \"%s\", size = %zu\n", test_dst[i], test_src[j], size);
				}

				// Libération de la mémoire allouée
				free(dst);
				free(dst_copy);
			}
		}
	}

	return 0;
} */
//-------------------------------------
/* //ft_toupper

/* #include <stdio.h>
#include <ctype.h>
int	main(void)
{
	// Test avec des chiffres
	printf("Testing digits:\n");
	for (int c = '0'; c <= '9'; c++)
		printf("ft_toupper('%c') = %d | toupper('%c') = %d\n", c, ft_toupper(c), c, toupper(c));

	// Test avec des lettres majuscules
	printf("\nTesting uppercase letters:\n");
	for (int c = 'A'; c <= 'Z'; c++)
		printf("ft_toupper('%c') = %d | toupper('%c') = %d\n", c, ft_toupper(c), c, toupper(c));

	// Test avec des lettres minuscules
	printf("\nTesting lowercase letters:\n");
	for (int c = 'a'; c <= 'z'; c++)
		printf("ft_toupper('%c') = %d | toupper('%c') = %d\n", c, ft_toupper(c), c, toupper(c));

	// Test avec des caractères non imprimables
	printf("\nTesting non-printable characters:\n");
	for (int c = 0; c < 32; c++)
		printf("ft_toupper(%d) = %d | toupper(%d) = %d\n", c, ft_toupper(c), c, toupper(c));
	printf("ft_toupper(127) = %d | toupper(127) = %d\n", ft_toupper(127), toupper(127)); // DEL

	// Test avec des caractères hors plage ASCII
	printf("\nTesting out-of-range values:\n");
	int out_of_range[] = {-1, 128, 255, 1000, -128};
	for (size_t i = 0; i < sizeof(out_of_range) / sizeof(out_of_range[0]); i++)
		printf("ft_toupper(%d) = %d | toupper(%d) = %d\n", out_of_range[i], ft_toupper(out_of_range[i]), out_of_range[i], toupper(out_of_range[i]));

	return (0);
} */
//-------------------------------------
/* //ft_tolower

/* #include <stdio.h>
#include <ctype.h>
int	main(void)
{
	// Test avec des chiffres
	printf("Testing digits:\n");
	for (int c = '0'; c <= '9'; c++)
		printf("ft_tolower('%c') = %d | tolower('%c') = %d\n", c, ft_tolower(c), c, tolower(c));

	// Test avec des lettres majuscules
	printf("\nTesting uppercase letters:\n");
	for (int c = 'A'; c <= 'Z'; c++)
		printf("ft_tolower('%c') = %d | tolower('%c') = %d\n", c, ft_tolower(c), c, tolower(c));

	// Test avec des lettres minuscules
	printf("\nTesting lowercase letters:\n");
	for (int c = 'a'; c <= 'z'; c++)
		printf("ft_tolower('%c') = %d | tolower('%c') = %d\n", c, ft_tolower(c), c, tolower(c));

	// Test avec des caractères non imprimables
	printf("\nTesting non-printable characters:\n");
	for (int c = 0; c < 32; c++)
		printf("ft_tolower(%d) = %d | tolower(%d) = %d\n", c, ft_tolower(c), c, tolower(c));
	printf("ft_tolower(127) = %d | tolower(127) = %d\n", ft_tolower(127), tolower(127)); // DEL

	// Test avec des caractères hors plage ASCII
	printf("\nTesting out-of-range values:\n");
	int out_of_range[] = {-1, 128, 255, 1000, -128};
	for (size_t i = 0; i < sizeof(out_of_range) / sizeof(out_of_range[0]); i++)
		printf("ft_tolower(%d) = %d | tolower(%d) = %d\n", out_of_range[i], ft_tolower(out_of_range[i]), out_of_range[i], tolower(out_of_range[i]));

	return (0);
} */
//-------------------------------------
/* //ft_strchr

/* #include <stdio.h>
#include <string.h>
int main(void)
{
	// Test avec différentes chaînes et caractères de recherche
	const char *test_strings[] = {
		"Hello, World!",
 		"ABCDEFGHIJKLMNOPQRSTUVWXYZ",
		"abcdefghijklmnopqrstuvwxyz",
		"1234567890",
		" \t\n\r\v\f", // Caractères d'espacement
		"!@#$%^&*()_+-=[]{}|;:',.<>?/", // Caractères spéciaux
		"", // Chaîne vide
		"Longueur avec des caractères spéciaux \x01", // Chaîne avec caractère non imprimable
	};

	int test_chars[] = {
		'H', 'o', 'W', 'l', ' ', '1', '9', 'z', '\n', '@', 255, 127, -1, -128
	};

	// Test de la fonction ft_strchr
	printf("Testing ft_strchr:\n\n");

	for (size_t i = 0; i < sizeof(test_strings) / sizeof(test_strings[0]); i++) {
		const char *str = test_strings[i];

		// On affiche la chaîne sur laquelle on va tester
		printf("Test string: \"%s\"\n", str);

		// Tester différents caractères de recherche
		for (size_t j = 0; j < sizeof(test_chars) / sizeof(test_chars[0]); j++) {
			int ch = test_chars[j];

			// Utilisation de ft_strchr et strchr
			char *ft_result = ft_strchr(str, ch);
			char *mem_result = strchr(str, ch);

			// Affichage des résultats pour comparaison
			if (ft_result != NULL)
				printf("ft_strchr: Found '%c' at position %ld\n", ch, ft_result - str);
			else
				printf("ft_strchr: '%c' not found\n", ch);

			if (mem_result != NULL)
				printf("strchr: Found '%c' at position %ld\n", ch, mem_result - str);
			else
				printf("strchr: '%c' not found\n", ch);

			// Comparaison des résultats
			if (ft_result != mem_result) {
				printf("Test failed for string \"%s\" and character '%c'\n\n", str, ch);
			}
			else {
				printf("Test passed for string \"%s\" and character '%c'\n\n", str, ch);
			}
		}
	}

	return 0;
}
 */
//-------------------------------------
/* //ft_strrchr

/* #include <stdio.h>
#include <string.h>
int main(void)
{
	// Ensemble de cas de test
	const char *test_cases[] = {
		"Hello, World!",        // Chaîne classique
		"Test with multiple t", // Plusieurs occurrences
		"Single character",     // Un seul caractère
		"Edge case \0 test",    // Cas avec caractère null
		"",                     // Chaîne vide
		"aaaaaaa",              // Même caractère répété
		"abcdef",               // Aucun match avec 'z'
		NULL                    // Fin des tests
	};
	int test_chars[] = {
		'o',       // Caractère présent une fois
		't',       // Caractère présent plusieurs fois
		'\0',      // Caractère null
		'z',       // Caractère absent
		'a',       // Caractère en début de chaîne
		'f'        // Caractère en fin de chaîne
	};

	// Exécution des tests
	printf("Testing ft_strrchr:\n\n");

	for (int i = 0; test_cases[i] != NULL; i++) {
		const char *str = test_cases[i];
		printf("Test case %d: \"%s\"\n", i + 1, str);
		for (size_t j = 0; j < sizeof(test_chars) / sizeof(test_chars[0]); j++) {
			int c = test_chars[j];
			char *ft_result = ft_strrchr(str, c);
			char *std_result = strrchr(str, c);

			// Affichage des résultats
			printf("  Searching for '%c' (%d):\n", c, c);
			printf("    ft_strrchr: %s\n", ft_result ? ft_result : "NULL");
			printf("    strrchr:    %s\n\n", std_result ? std_result : "NULL");

			// Validation des résultats
			if (ft_result != std_result) {
				printf("    Mismatch detected! Check your implementation.\n");
				return 1; // Sortir si les résultats diffèrent
			}
		}
	}

	printf("All tests passed successfully!\n");
	return 0;
} */
//-------------------------------------
/* //ft_strncmp

/* #include <stdio.h>
#include <string.h>
int main(void)
{
	// Cas de test
	const char *test_cases[][2] = {
		{"", ""},                        // Deux chaînes vides
		{"Hello", "Hello"},              // Deux chaînes identiques
		{"Hello", "Hell"},               // Une chaîne est un préfixe de l'autre
		{"Hello", "hello"},              // Différence de casse
		{"abc", "abcd"},                 // Une chaîne est un préfixe plus court
		{"abcd", "abc"},                 // Une chaîne est un préfixe plus long
		{"123", "124"},                  // Différence numérique
		{"", "Non empty"},               // Chaîne vide contre non vide
		{"Non empty", ""},               // Chaîne non vide contre vide
		{"Special \x01\x02", "Special"}, // Caractères spéciaux
		{"Longer string test", "Longer string testing"} // Deux chaînes similaires mais de longueurs différentes
	};

	// Longueurs à tester
	size_t test_lengths[] = {0, 1, 5, 10, 20};

	// Tests
	printf("Testing ft_strncmp:\n\n");
	for (size_t i = 0; i < sizeof(test_cases) / sizeof(test_cases[0]); i++) {
		for (size_t j = 0; j < sizeof(test_lengths) / sizeof(test_lengths[0]); j++) {
			const char *s1 = test_cases[i][0];
			const char *s2 = test_cases[i][1];
			size_t n = test_lengths[j];

			int ft_result = ft_strncmp(s1, s2, n);
			int std_result = strncmp(s1, s2, n);

			// Affichage des résultats
			printf("Test case %zu, n = %zu:\n", i + 1, n);
			printf("s1: \"%s\"\n", s1);
			printf("s2: \"%s\"\n", s2);
			printf("ft_strncmp: %d | strncmp: %d\n", ft_result, std_result);

			// Vérification des résultats
			if ((ft_result < 0 && std_result >= 0) ||
			    (ft_result > 0 && std_result <= 0) ||
			    (ft_result == 0 && std_result != 0)) {
				printf("Mismatch detected!\n");
			}
			printf("\n");
		}
	}

	return 0;
} */
//-------------------------------------
/* //ft_memchr

/* #include <stdio.h>
#include <string.h>
int main(void)
{
	// Ensemble de tests
	const char *test_strings[] = {
		"Hello, World!",          // Chaîne classique
		"ABCDEABCDE",             // Chaîne avec répétitions
		"abcdefghijklmnopqrstuvwxyz", // Alphabet en minuscule
		"",                       // Chaîne vide
		"123\0ABC",               // Chaîne avec un caractère nul
		"Test avec caractères spéciaux: \x01\x02\x03" // Chaîne avec caractères non imprimables
	};
	int test_chars[] = { 'A', 'z', '1', '\0', 'B', 'X', 255 }; // Caractères à chercher
	size_t test_lengths[] = { 0, 5, 10, 20 };                  // Longueurs de recherche

	// Test de la fonction ft_memchr
	printf("Testing ft_memchr:\n\n");

	for (size_t i = 0; i < sizeof(test_strings) / sizeof(test_strings[0]); i++) {
		for (size_t j = 0; j < sizeof(test_chars) / sizeof(test_chars[0]); j++) {
			for (size_t k = 0; k < sizeof(test_lengths) / sizeof(test_lengths[0]); k++) {
				const char *str = test_strings[i];
				int c = test_chars[j];
				size_t len = test_lengths[k];

				// Appels à ft_memchr et memchr
				void *ft_result = ft_memchr(str, c, len);
				void *std_result = memchr(str, c, len);

				// Affichage des résultats
				printf("Test case: string=\"%s\", char='%c', length=%zu\n", str, (c >= 32 && c <= 126) ? c : '?', len);
				printf("ft_memchr: %s\n", ft_result ? (char *)ft_result : "NULL");
				printf("memchr   : %s\n\n", std_result ? (char *)std_result : "NULL");

				// Vérification des résultats
				if (ft_result != std_result) {
					printf("Mismatch detected!\n");
					exit(1); // Arrête si une divergence est détectée
				}
			}
		}
	}

	printf("All tests passed!\n");
	return 0;
} */
//-------------------------------------
/* //ft_memcmp

/* #include <stdio.h>
#include <string.h>
int main(void)
{
	// Cas de test
	struct {
		const char *desc;
		const unsigned char *s1;
		const unsigned char *s2;
		size_t n;
	} test_cases[] = {
		{ "Identical arrays, n = 0", (unsigned char *)"abc", (unsigned char *)"abc", 0 },
		{ "Identical arrays, n = 3", (unsigned char *)"abc", (unsigned char *)"abc", 3 },
		{ "Different arrays, first byte differs", (unsigned char *)"abc", (unsigned char *)"xbc", 1 },
		{ "Different arrays, later byte differs", (unsigned char *)"abc", (unsigned char *)"abd", 3 },
		{ "Different sizes, n shorter than both", (unsigned char *)"abcdef", (unsigned char *)"abcxyz", 3 },
		{ "s1 shorter than n", (unsigned char *)"ab", (unsigned char *)"abcd", 4 },
		{ "s2 shorter than n", (unsigned char *)"abcd", (unsigned char *)"ab", 4 },
		{ "Empty arrays, n = 0", (unsigned char *)"", (unsigned char *)"", 0 },
		{ "Empty vs non-empty", (unsigned char *)"", (unsigned char *)"abc", 3 },
		{ "Unsigned character comparison", (unsigned char *)"\xff\xfe", (unsigned char *)"\xff\xff", 2 },
	};

	// Test de chaque cas
	printf("Testing ft_memcmp:\n\n");
	for (size_t i = 0; i < sizeof(test_cases) / sizeof(test_cases[0]); i++) {
		int ft_result = ft_memcmp(test_cases[i].s1, test_cases[i].s2, test_cases[i].n);
		int std_result = memcmp(test_cases[i].s1, test_cases[i].s2, test_cases[i].n);

		printf("Test case %zu: %s\n", i + 1, test_cases[i].desc);
		printf("ft_memcmp result: %d | memcmp result: %d\n", ft_result, std_result);

		// Vérification des résultats
		if ((ft_result == 0 && std_result != 0) || (ft_result != 0 && std_result == 0) ||
		    (ft_result > 0 && std_result <= 0) || (ft_result < 0 && std_result >= 0)) {
			printf("Mismatch found in test case %zu!\n\n", i + 1);
		} else {
			printf("Test case %zu passed.\n\n", i + 1);
		}
	}

	return 0;
} */
//-------------------------------------
/* //ft_strnstr

/* 
#include <bsd/string.h>
#include <stdio.h>
int	main(void)
{
	char *tmp = NULL;
	printf("Test strnstr : %s\n", strnstr(tmp, "Geeks", 1));
	printf("Test strnstr : %s\n", ft_strnstr(tmp, "Geeks", 0));
	return (0);
} */
//-------------------------------------
/* //ft_atoi

/* #include <stdio.h>
int	main(void)
{
	char c[] = "999999999999999999999999999999999999999999999";
	printf("ft_atoi('%s') = %d | atoi('%s') = %d\n", c, ft_atoi(c), c, atoi(c));
	char c1[] = "-999999999915618123184615631231099997";
	printf("ft_atoi('%s') = %d | atoi('%s') = %d\n", c1, ft_atoi(c1), c1, atoi(c1));
	char c2[] = "---999999999999999999999999999999999999999999999";
	printf("ft_atoi('%s') = %d | atoi('%s') = %d\n", c2, ft_atoi(c2), c2, atoi(c2));
	char c3[] = "--999999999999999999999999999999999999999999999";
	printf("ft_atoi('%s') = %d | atoi('%s') = %d\n", c3, ft_atoi(c3), c3, atoi(c3));
	char c4[] = "111";
	printf("ft_atoi('%s') = %d | atoi('%s') = %d\n", c4, ft_atoi(c4), c4, atoi(c4));
	char c5[] = "abc";
	printf("ft_atoi('%s') = %d | atoi('%s') = %d\n", c5, ft_atoi(c5), c5, atoi(c5));
	char c6[] = "  ---111abc";
	printf("ft_atoi('%s') = %d | atoi('%s') = %d\n", c6, ft_atoi(c6), c6, atoi(c6));
	char c7[] = "  abc";
	printf("ft_atoi('%s') = %d | atoi('%s') = %d\n", c7, ft_atoi(c7), c7, atoi(c7));
	char c8[] = "94681";
	printf("ft_atoi('%s') = %d | atoi('%s') = %d\n", c8, ft_atoi(c8), c8, atoi(c8));
	return(0);
} */
//-------------------------------------
/* //ft_calloc

/* #include <stdio.h>
#include <string.h>
int main(void)
{
    size_t count = 5;
    size_t size = sizeof(int);

    // Appel de calloc
    int *calloc_result = (int *)calloc(count, size);
    if (calloc_result == NULL)
    {
        printf("calloc: Memory allocation failed\n");
        return (1);
    }

    // Appel de ft_calloc
    int *ft_calloc_result = (int *)ft_calloc(count, size);
    if (ft_calloc_result == NULL)
    {
        printf("ft_calloc: Memory allocation failed\n");
        free(calloc_result);
        return (1);
    }

    // Vérification des résultats
    printf("Comparing calloc and ft_calloc:\n");
    int is_equal = 1;
    for (size_t i = 0; i < count; i++)
    {
        if (calloc_result[i] != ft_calloc_result[i])
        {
            is_equal = 0;
            break;
        }
    }

    if (is_equal)
        printf("Success: Both functions produce identical results.\n");
    else
        printf("Failure: Results differ between calloc and ft_calloc.\n");

    // Libération de la mémoire
    free(calloc_result);
    free(ft_calloc_result);

    return (0);
} */
//-------------------------------------
/* //ft_strdup

/* #include <stdio.h>
#include <string.h>
int	main(void)
{
	const char	*test_str1 = "Hello, World!";
	const char	*test_str2 = "";
	const char	*test_str3 = "Libft est génial!";
	char		*dup1;
	char		*dup2;

	// Test 1
	printf("Test 1 : Chaîne \"%s\"\n", test_str1);
	dup1 = ft_strdup(test_str1);
	dup2 = strdup(test_str1);
	printf("ft_strdup : \"%s\"\n", dup1);
	printf("strdup    : \"%s\"\n", dup2);
	free(dup1);
	free(dup2);

	// Test 2
	printf("\nTest 2 : Chaîne vide \"%s\"\n", test_str2);
	dup1 = ft_strdup(test_str2);
	dup2 = strdup(test_str2);
	printf("ft_strdup : \"%s\"\n", dup1);
	printf("strdup    : \"%s\"\n", dup2);
	free(dup1);
	free(dup2);

	// Test 3
	printf("\nTest 3 : Chaîne \"%s\"\n", test_str3);
	dup1 = ft_strdup(test_str3);
	dup2 = strdup(test_str3);
	printf("ft_strdup : \"%s\"\n", dup1);
	printf("strdup    : \"%s\"\n", dup2);
	free(dup1);
	free(dup2);

	return (0);
} */
//-------------------------------------
/* //ft_substr


/* #include <stdio.h>
#include <string.h>
int main(void)
{
    char *str = "Libft est un projet passionnant!";
    char *result_ft;
    char *expected_result;

    // Cas de test 1 : Substring normale
    result_ft = ft_substr(str, 5, 7);
    expected_result = strndup(str + 5, 7); // Simule substr
    printf("Test 1 :\n");
    printf("ft_substr: %s\n", result_ft);
    printf("Expected : %s\n\n", expected_result);
    free(result_ft);
    free(expected_result);

    // Cas de test 2 : Débordement (start > longueur de la chaîne)
    result_ft = ft_substr(str, 50, 10);
    expected_result = strdup(""); // Renvoie une chaîne vide
    printf("Test 2 :\n");
    printf("ft_substr: %s\n", result_ft);
    printf("Expected : %s\n\n", expected_result);
    free(result_ft);
    free(expected_result);

    // Cas de test 3 : Longueur demandée trop grande
    result_ft = ft_substr(str, 5, 50);
    expected_result = strdup(str + 5); // Renvoie le reste de la chaîne
    printf("Test 3 :\n");
    printf("ft_substr: %s\n", result_ft);
    printf("Expected : %s\n\n", expected_result);
    free(result_ft);
    free(expected_result);

    // Cas de test 4 : start = 0 et longueur = 0
    result_ft = ft_substr(str, 0, 0);
    expected_result = strdup("");
    printf("Test 4 :\n");
    printf("ft_substr: %s\n", result_ft);
    printf("Expected : %s\n\n", expected_result);
    free(result_ft);
    free(expected_result);

    return 0;
} */
//-------------------------------------
/* //ft_strjoin

/* 
#include <stdio.h>
#include <string.h>

int main(void)
{
    char *s1;
    char *s2;
    char *result;
    char *expected;

    // Test 1 : Deux chaînes normales
    s1 = "Hello";
    s2 = " World!";
    result = ft_strjoin(s1, s2);
    expected = strcat(strdup(s1), s2);
    printf("Test 1: \"%s\" + \"%s\"\n", s1, s2);
    printf("ft_strjoin : \"%s\"\n", result);
    printf("Expected   : \"%s\"\n", expected);
    printf("Match      : %s\n\n", strcmp(result, expected) == 0 ? "YES" : "NO");
    free(result);
    free(expected);

    // Test 2 : Une chaîne vide
    s1 = "";
    s2 = "World";
    result = ft_strjoin(s1, s2);
    expected = strcat(strdup(s1), s2);
    printf("Test 2: \"%s\" + \"%s\"\n", s1, s2);
    printf("ft_strjoin : \"%s\"\n", result);
    printf("Expected   : \"%s\"\n", expected);
    printf("Match      : %s\n\n", strcmp(result, expected) == 0 ? "YES" : "NO");
    free(result);
    free(expected);

     // Test 3 : Une chaîne NULL
    s1 = NULL;
    s2 = "World";
    result = ft_strjoin(s1, s2);
    expected = s2; // Selon ta fonction, elle retourne s2 directement
    printf("Test 3: NULL + \"%s\"\n", s2);
    printf("ft_strjoin : \"%s\"\n", result);
    printf("Expected   : \"%s\"\n", expected);
    printf("Match      : %s\n\n", strcmp(result, expected) == 0 ? "YES" : "NO");

     // Test 4 : Les deux chaînes vides
    s1 = "";
    s2 = "";
    result = ft_strjoin(s1, s2);
    expected = strcat(strdup(s1), s2);
    printf("Test 4: \"%s\" + \"%s\"\n", s1, s2);
    printf("ft_strjoin : \"%s\"\n", result);
    printf("Expected   : \"%s\"\n", expected);
    printf("Match      : %s\n\n", strcmp(result, expected) == 0 ? "YES" : "NO");
    free(result);
    free(expected);

    // Test 5 : Les deux chaînes NULL
    s1 = NULL;
    s2 = NULL;
    result = ft_strjoin(s1, s2);
    expected = NULL; // Selon ta logique
    printf("Test 5: NULL + NULL\n");
    printf("ft_strjoin : \"%s\"\n", result);
    printf("Expected   : \"%s\"\n", expected ? expected : "(NULL)");
    printf("Match      : %s\n\n", (result == expected) ? "YES" : "NO");

    return 0;
} */
//-------------------------------------
/* //ft_strtrim

/* #include <stdio.h>
#include <string.h>
int	main(void)
{
	// Test 1: Retirer des espaces en début et fin de chaîne
	char *result = ft_strtrim("   Hello, World!   ", " ");
	printf("Test 1 - Résultat: {%s} || Attendu : {Hello, World!}\n", result); // Attendu : "Hello, World!"
	free(result);

	// Test 2: Chaîne sans les caractères à supprimer
	result = ft_strtrim("Hello", " ");
	printf("Test 2 - Résultat: {%s} || Attendu : {Hello}\n", result); // Attendu : "Hello"
	free(result);

	// Test 3: Chaîne entièrement composée de caractères à supprimer
	result = ft_strtrim("   ", " ");
	printf("Test 3 - Résultat: {%s} || Attendu : {}\n", result); // Attendu : ""
	free(result);
	
	// Test 4: Chaîne vide
	result = ft_strtrim("", "abc");
	printf("Test 4 - Résultat: {%s} || Attendu : {}\n", result); // Attendu : ""
	free(result);

	// Test 5: Chaîne avec des caractères à supprimer (a) au début et à la fin
	result = ft_strtrim("aaaHello, World!aaa", "a");
	printf("Test 5 - Résultat: {%s} || Attendu : {Hello, World!}\n", result); // Attendu : "Hello, World!"
	free(result);

	// Test 6: Chaîne sans rien à supprimer
	result = ft_strtrim("NoTrimHere", " ");
	printf("Test 6 - Résultat: {%s} || Attendu : {NoTrimHere}\n", result); // Attendu : "NoTrimHere"
	free(result);

	// Test 7: Caractères spéciaux (espaces, tabulations, sauts de ligne)
	result = ft_strtrim("\n\t  Hello, World! \t\n", " \n\t");
	printf("Test 7 - Résultat: {%s} || Attendu : {Hello, World!}\n", result); // Attendu : "Hello, World!"
	free(result);

	// Test 8: set = NULL (comportement attendu peut varier selon l'implémentation de ta fonction)
	result = ft_strtrim("NoTrimHere", NULL);
	printf("Test 8 - Résultat: {%s} || Attendu : {NoTrimHere}\n", result); // Attendu : "NoTrimHere"

	// Test 9: set vide (aucun caractère à supprimer)
	result = ft_strtrim("NothingToTrim", "");
	printf("Test 9 - Résultat: {%s} || Attendu : {NothingToTrim}\n", result); // Attendu : "NothingToTrim"
	free(result);

	// Test 10: Caractères spéciaux dans set (supprimer "*" et "!")
	result = ft_strtrim("**Hello!**", "*!");
	printf("Test 10 - Résultat: {%s} || Attendu : {Hello}\n", result); // Attendu : "Hello"
	free(result);

	return 0;
} */

//-------------------------------------
/* //ft_split

/* #include <stdio.h>
#include <string.h>

int	main(void)
{
	// Test 1: Séparer une chaîne par un espace
	char **result = ft_split("Hello World from C", ' ');
	printf("Test 1 - Résultat:\n");
	for (int i = 0; result[i] != NULL; i++) {
		printf("  \"%s\"\n", result[i]);
		free(result[i]);
	}
	free(result);  // Libérer la mémoire
	printf("\n");

	// Test 2: Séparer une chaîne sans séparateur
	result = ft_split("NoSeparatorHere", ' ');
	printf("Test 2 - Résultat:\n");
	for (int i = 0; result[i] != NULL; i++) {
		printf("  \"%s\"\n", result[i]);
		free(result[i]);
	}
	free(result);  // Libérer la mémoire
	printf("\n");

	// Test 3: Chaîne vide
	result = ft_split("", ' ');
	printf("Test 3 - Résultat:\n");
	if (result && result[0] == NULL) {
		printf("  Résultat: chaîne vide\n");
	}
	free(result);  // Libérer la mémoire
	printf("\n");

	// Test 4: Séparer une chaîne avec plusieurs espaces
	result = ft_split("   Hello    World   ", ' ');
	printf("Test 4 - Résultat:\n");
	for (int i = 0; result[i] != NULL; i++) {
		printf("  \"%s\"\n", result[i]);
		free(result[i]);
	}
	free(result);  // Libérer la mémoire
	printf("\n");

	// Test 5: Séparer une chaîne par une tabulation
	result = ft_split("Hello\tWorld\tfrom\tC", '\t');
	printf("Test 5 - Résultat:\n");
	for (int i = 0; result[i] != NULL; i++) {
		printf("  \"%s\"\n", result[i]);
		free(result[i]);
	}
	free(result);  // Libérer la mémoire
	printf("\n");

	// Test 6: Séparer une chaîne avec des caractères spéciaux
	result = ft_split("Hello!World!from!C", '!');
	printf("Test 6 - Résultat:\n");
	for (int i = 0; result[i] != NULL; i++) {
		printf("  \"%s\"\n", result[i]);
		free(result[i]);
	}
	free(result);  // Libérer la mémoire
	printf("\n");

	// Test 7: Séparer une chaîne avec des séparateurs consécutifs
	result = ft_split("Hello  World", ' ');
	printf("Test 7 - Résultat:\n");
	for (int i = 0; result[i] != NULL; i++) {
		printf("  \"%s\"\n", result[i]);
		free(result[i]);
	}
	free(result);  // Libérer la mémoire
	printf("\n");

	// Test 8: Séparer une chaîne avec un seul caractère de séparation
	result = ft_split("a-b-c-d", '-');
	printf("Test 8 - Résultat:\n");
	for (int i = 0; result[i] != NULL; i++) {
		printf("  \"%s\"\n", result[i]);
		free(result[i]);
	}
	free(result);  // Libérer la mémoire
	printf("\n");

	// Test 9: Séparer une chaîne avec un séparateur non présent
	result = ft_split("NoSeparatorHere", ',');
	printf("Test 9 - Résultat:\n");
	for (int i = 0; result[i] != NULL; i++) {
		printf("  \"%s\"\n", result[i]);
		free(result[i]);
	}
	free(result);  // Libérer la mémoire
	printf("\n");

	// Test 10: Chaîne composée uniquement de séparateurs
	result = ft_split(",,,", ',');
	printf("Test 10 - Résultat:\n");
	if (result && result[0] == NULL) {
		printf("  Résultat: chaîne vide\n");
	}
	free(result);  // Libérer la mémoire
	printf("\n");

	return 0;
} */
//-------------------------------------
/* //ft_itoa

/* #include <stdio.h>
#include <string.h>
int	main(void)
{
    // Test 1 : Nombre positif
	printf("%s\n", ft_itoa(12345));


    // Test 2 : Nombre négatif
	printf("%s\n", ft_itoa(-12345));

    // Test 3 : Zéro
	printf("%s\n", ft_itoa(0));

    // Test 4 : Int minimum
	printf("%s\n", ft_itoa(-2147483648));

    // Test 5 : Int maximum
	printf("%s\n", ft_itoa(2147483647));

    // Test 6 : Petit nombre négatif
	printf("%s\n", ft_itoa(-1));

    // Test 7 : Petit nombre positif
	printf("%s\n", ft_itoa(1));

	return (0);
} */
//-------------------------------------
/* //ft_strmapi

/* #include <stdio.h>
#include <string.h>

// Fonction de transformation : exemple qui convertit en majuscule selon l'index
char	to_upper(unsigned int index, char c)
{
	(void)index;  // On ne l'utilise pas dans cet exemple
	if (c >= 'a' && c <= 'z')
		return (c - 'a' + 'A'); // Convertit en majuscule
	return c;
}

// Fonction qui retourne le même caractère (fonction identique)
char	identity(unsigned int index, char c)
{
	(void)index;  // On ne l'utilise pas ici
	return c;
}

// Fonction qui transforme les caractères en fonction de leur index
char	modify_by_index(unsigned int index, char c)
{
	return (c + index); // Par exemple, on ajoute l'index au caractère
}

// Fonction qui remplace les voyelles par des espaces
char	replace_vowels(unsigned int index, char c)
{
	(void)index;  // On ne l'utilise pas ici
	if (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u')
		return ' ';  // Remplace les voyelles par un espace
	return c;
}

// Fonction qui transforme les caractères en majuscules si leur index est impair
char	uppercase_if_odd_index(unsigned int index, char c)
{
	if (index % 2 == 1)
		return (c - 'a' + 'A'); // Convertit en majuscule si index impair
	return c;
}

int main(void)
{
	// Test 1: Appliquer to_upper sur chaque caractère
	char *result = ft_strmapi("hello", to_upper);
	printf("Test 1 - Résultat: \"%s\" (attendu: \"HELLO\")\n", result); // Attendu : "HELLO"
	free(result);

	// Test 2: Appliquer une fonction identique (fonction identique)
	result = ft_strmapi("hello", identity);
	printf("Test 2 - Résultat: \"%s\" (attendu: \"hello\")\n", result); // Attendu : "hello"
	free(result);

	// Test 3: Cas avec une chaîne vide
	result = ft_strmapi("", to_upper);
	printf("Test 3 - Résultat: \"%s\" (attendu: \"\")\n", result); // Attendu : ""
	free(result);

	// Test 4: Appliquer une fonction qui modifie les caractères par leur index
	result = ft_strmapi("abcdef", modify_by_index);
	printf("Test 4 - Résultat: \"%s\" (attendu: \"acegik\")\n", result); // Attendu : "acegik"
	free(result);

	// Test 5: Cas où s est NULL
	result = ft_strmapi(NULL, to_upper);
	printf("Test 5 - Résultat: \"%s\" (attendu: NULL)\n", result); // Attendu : NULL
	free(result);

	// Test 6: Tester une fonction qui supprime les voyelles
	result = ft_strmapi("aeiou", replace_vowels);
	printf("Test 6 - Résultat: \"%s\" (attendu: \"     \")\n", result); // Attendu : "     "
	free(result);

	// Test 7: Tester la transformation de caractères en fonction de l'index (index impair transforme en majuscule)
	result = ft_strmapi("abcdef", uppercase_if_odd_index);
	printf("Test 7 - Résultat: \"%s\" (attendu: \"aBcDeF\")\n", result); // Attendu : "aBcDeF"
	free(result);

	return 0;
} */

//-------------------------------------
/* //ft_striteri

/* void modify_char(unsigned int index, char *c)
{
	// Exemple : Inverser les minuscules et majuscules
	if (*c >= 'a' && *c <= 'z')
		*c -= 32; // Convertir en majuscule
	else if (*c >= 'A' && *c <= 'Z')
		*c += 32; // Convertir en minuscule
}

void rotate_char(unsigned int index, char *c)
{
	// Applique une transformation différente en fonction de l'index
	if (index % 2 == 0) {
		*c = (*c >= 'a' && *c <= 'z') ? *c - 32 : *c; // Convertir en majuscule si index pair
	} else {
		*c = (*c >= 'A' && *c <= 'Z') ? *c + 32 : *c; // Convertir en minuscule si index impair
	}
}

#include <stdio.h>
int main(void)
{
	// Test 1: Appliquer ft_striteri sur une chaîne normale
	char str1[] = "Hello World!";
	ft_striteri(str1, modify_char);
	printf("Test 1 - Résultat attendu: \"hELLO wORLD!\" \n||| Résultat obtenu: \"%s\"\n\n", str1);
	
	// Test 2: Chaîne vide
	char str2[] = "";
	ft_striteri(str2, modify_char);
	printf("Test 2 - Résultat attendu: \"\" \n||| Résultat obtenu: \"%s\"\n\n", str2);

	// Test 3: Chaîne avec un seul caractère
	char str3[] = "a";
	ft_striteri(str3, modify_char);
	printf("Test 3 - Résultat attendu: \"A\" \n||| Résultat obtenu: \"%s\"\n\n", str3);

	// Test 4: Chaîne sans lettres
	char str4[] = "1234567890";
	ft_striteri(str4, modify_char);
	printf("Test 4 - Résultat attendu: \"1234567890\" \n||| Résultat obtenu: \"%s\"\n\n", str4);

	// Test 5: Chaîne avec des caractères spéciaux
	char str5[] = "@#_!";
	ft_striteri(str5, modify_char);
	printf("Test 5 - Résultat attendu: \"@#_!\" \n||| Résultat obtenu: \"%s\"\n\n", str5);

	// Test 6: Application de f sur une chaîne mixte
	char str6[] = "abcDEF";
	ft_striteri(str6, modify_char);
	printf("Test 6 - Résultat attendu: \"ABCdef\" \n||| Résultat obtenu: \"%s\"\n\n", str6);

	// Test 7: Fonction f qui change le caractère selon son index (par exemple, faire une rotation)
	char str7[] = "Test123";
	ft_striteri(str7, rotate_char);
	printf("Test 7 - Résultat attendu: \"TeSt123\" \n||| Résultat obtenu: \"%s\"\n\n", str7);

	// Test 8: Application de f sur une chaîne déjà transformée
	char str8[] = "mIXedCaSe";
	ft_striteri(str8, modify_char);
	printf("Test 8 - Résultat attendu: \"MixedCaSe\" \n||| Résultat obtenu: \"%s\"\n\n", str8);

	return 0;
} */

//-------------------------------------
/* //ft_putstr_fd

/* int	main(void)
{
	ft_putstr_fd(NULL, 1);
	return (0);
} */

//-------------------------------------
/* //ft_putendl_fd

/* int	main(void)
{
	ft_putendl_fd(NULL, NULL);
	return (0);
} */

//-------------------------------------
/* //ft_lstnew

/* #include <stdio.h>
int	main(void)
{
	// Test 1 : Création d'un élément avec une chaîne de caractères
	char *str = "Hello, World!";
	t_list *node1 = ft_lstnew((void *)str);
	if (node1)
		printf("Test 1 - Content : %s | Next : %p\n", (char *)node1->content, node1->next);
	else
		printf("Test 1 - Échec de la création de l'élément.\n");
	free(node1);

	// Test 2 : Création d'un élément avec un entier
	int number = 42;
	t_list *node2 = ft_lstnew((void *)&number);
	if (node2)
		printf("Test 2 - Content : %d | Next : %p\n", *(int *)node2->content, node2->next);
	else
		printf("Test 2 - Échec de la création de l'élément.\n");
	free(node2);

	// Test 3 : Création d'un élément avec NULL
	t_list *node3 = ft_lstnew(NULL);
	if (node3)
		printf("Test 3 - Content : %p | Next : %p\n", node3->content, node3->next);
	else
		printf("Test 3 - Échec de la création de l'élément.\n");
	free(node3);

	// Test 4 : Création d'un élément avec une structure
	struct s_example {
		int x;
		float y;
	} example = {10, 3.14};
	t_list *node4 = ft_lstnew((void *)&example);
	if (node4)
		printf("Test 4 - Content : {x: %d, y: %.2f} | Next : %p\n",
			((struct s_example *)node4->content)->x,
			((struct s_example *)node4->content)->y,
			node4->next);
	else
		printf("Test 4 - Échec de la création de l'élément.\n");
	free(node4);

	return (0);
} */
//-------------------------------------
/* //ft_lstaddfront

/* #include <stdio.h>
int	main(void)
{
	t_list	*list = NULL; // Liste initialement vide
	t_list	*new_elem;

	// Création d'un premier élément
	new_elem = ft_lstnew("Troisième");
	if (new_elem == NULL)
	{
		perror("Erreur d'allocation pour 'Troisième'");
		return (1);
	}
	ft_lstadd_front(&list, new_elem);

	// Ajout d'un deuxième élément au début
	new_elem = ft_lstnew("Deuxième");
	if (new_elem == NULL)
	{
		perror("Erreur d'allocation pour 'Deuxième'");
		return (1);
	}
	ft_lstadd_front(&list, new_elem);

	// Ajout d'un troisième élément au début
	new_elem = ft_lstnew("Premier");
	if (new_elem == NULL)
	{
		perror("Erreur d'allocation pour 'Premier'");
		return (1);
	}
	ft_lstadd_front(&list, new_elem);

	// Affichage de la liste chaînée
	printf("Contenu de la liste chaînée :\n");
	{
		t_list *current = list;
		int i = 0;

		while (current)
		{
			printf("Élément %d : %s\n", i, (char *)current->content);
			current = current->next;
			i++;
		}
	}

	// Libération de la mémoire
	while (list)
	{
		t_list *temp = list;
		list = list->next;
		free(temp);
	}

	return (0);
} */
//-------------------------------------
/* //ft_lstsize

/* #include <stdio.h>
void	del_content(void *content)
{
	free(content);
}

int	main(void)
{
	t_list	*head = NULL;
	t_list	*node1 = NULL;
	t_list	*node2 = NULL;
	t_list	*node3 = NULL;
	int		size;

	// Création des éléments de la liste
	node1 = ft_lstnew(ft_strdup("Premier élément"));
	node2 = ft_lstnew(ft_strdup("Deuxième élément"));
	node3 = ft_lstnew(ft_strdup("Troisième élément"));

	// Construction de la liste chaînée
	head = node1;
	node1->next = node2;
	node2->next = node3;

	// Calcul de la taille de la liste
	size = ft_lstsize(head);
	printf("Taille de la liste : %d\n Attendu : 3\n\n", size); // Attendu : 3

	// Test avec une liste vide
	size = ft_lstsize(NULL);
	printf("Taille d'une liste vide : %d\n Attendu : 0\n\n", size); // Attendu : 0

	// Libération de la mémoire avec ft_lstclear
	ft_lstclear(&head, del_content);

	// Vérification après libération
	if (head == NULL)
		printf("Liste correctement libérée.\n");

	return (0);
} */
//-------------------------------------
/* //ft_lstlast

/* #include <stdio.h>
int	main(void)
{
	t_list	*head;
	t_list	*last;

	// Test 1 : Liste vide
	head = NULL;
	last = ft_lstlast(head);
	printf("Test 1 - Liste vide : %s\n", last == NULL ? "Test réussi (NULL)" : "Test échoué");

	// Test 2 : Liste avec un seul élément
	head = ft_lstnew("Premier");
	last = ft_lstlast(head);
	printf("Test 2 - Un seul élément : %s\n", last && last->content ? (char *)last->content : "NULL");
	free(head);

	// Test 3 : Liste avec plusieurs éléments
	head = ft_lstnew("Premier");
	head->next = ft_lstnew("Deuxième");
	head->next->next = ft_lstnew("Dernier");
	last = ft_lstlast(head);
	printf("Test 3 - Plusieurs éléments : %s\n", last && last->content ? (char *)last->content : "NULL");

	// Libération de la mémoire
	t_list *tmp;
	while (head)
	{
		tmp = head->next;
		free(head);
		head = tmp;
	}

	return (0);
} */
//-------------------------------------
/* //ft_lstaddback

/* #include <stdio.h>
int	main(void)
{
	t_list	*head = NULL;
	t_list	*node1 = NULL;
	t_list	*node2 = NULL;
	t_list	*node3 = NULL;

	// Création des éléments de la liste
	node1 = ft_lstnew("Premier élément");
	node2 = ft_lstnew("Deuxième élément");
	node3 = ft_lstnew("Troisième élément");

	// Ajout de node1 à la liste
	ft_lstadd_back(&head, node1);
	// Ajout de node2 à la fin de la liste
	ft_lstadd_back(&head, node2);
	// Ajout de node3 à la fin de la liste
	ft_lstadd_back(&head, node3);

	// Affichage de la liste
	printf("Contenu de la liste :\n");
	t_list *current = head;
	while (current)
	{
		printf("%s\n", (char *)current->content);
		current = current->next;
	}

	return (0);
} */
//-------------------------------------
/* //ft_lstdelone

/* #include <stdio.h>
void	del_content(void *content)
{
	free(content);
}

int	main(void)
{
	t_list	*node;
	
	// Création d'un élément de liste
	node = ft_lstnew(ft_strdup("Premier élément"));
	if (!node)
	{
		printf("Erreur d'allocation mémoire.\n");
		return (1);
	}
	
	// Affichage de l'élément avant la suppression
	printf("Avant suppression: %s\n", (char *)node->content);
	
	// Suppression de l'élément
	ft_lstdelone(node, del_content);

	node = NULL;

	// Vérification que la mémoire a été libérée (le pointeur node est maintenant inutilisable)
	if (node == NULL)
		printf("L'élément a été supprimé correctement.\n");
	else
		printf("Erreur : L'élément n'a pas été supprimé.\n");

	return (0);
} */
//-------------------------------------
/* //ft_lstclear

/* #include <stdio.h>
void	del_content(void *content)
{
	free(content);
}

int	main(void)
{
	t_list	*head = NULL;
	t_list	*node1 = NULL;
	t_list	*node2 = NULL;
	t_list	*node3 = NULL;
	int		size;

	// Création des éléments de la liste
	node1 = ft_lstnew(ft_strdup("Premier élément"));
	node2 = ft_lstnew(ft_strdup("Deuxième élément"));
	node3 = ft_lstnew(ft_strdup("Troisième élément"));

	// Construction de la liste chaînée
	ft_lstadd_back(&head, node1);
	ft_lstadd_back(&head, node2);
	ft_lstadd_back(&head, node3);

	// Affichage de la liste avant suppression
	t_list *temp = head;
	while (temp)
	{
		printf("Contenu de l'élément: %s\n", (char *)temp->content);
		temp = temp->next;
	}

	// Libération de la mémoire de la liste
	ft_lstclear(&head, del_content);

	// Vérification après libération (head devrait être NULL)
	if (head == NULL)
		printf("Liste correctement libérée.\n");
	else
		printf("Erreur : la liste n'a pas été libérée.\n");

	return (0);
} */
//-------------------------------------
/* //ft_lstiter

/* 
#include <stdio.h>
void	print_content(void *content)
{
	printf("%s\n", (char *)content);
}

int	main(void)
{
	t_list	*head = NULL;
	t_list	*node1 = NULL;
	t_list	*node2 = NULL;
	t_list	*node3 = NULL;

	// Création des éléments de la liste
	node1 = ft_lstnew(ft_strdup("Premier élément"));
	node2 = ft_lstnew(ft_strdup("Deuxième élément"));
	node3 = ft_lstnew(ft_strdup("Troisième élément"));

	// Construction de la liste chaînée
	head = node1;
	node1->next = node2;
	node2->next = node3;

	// Appliquer ft_lstiter pour afficher le contenu de chaque élément
	printf("Contenu de la liste :\n");
	ft_lstiter(head, print_content);

	// Libération de la mémoire (optionnel mais recommandé)
	free(node1->content);
	free(node2->content);
	free(node3->content);
	free(node1);
	free(node2);
	free(node3);

	return (0);
} */

//-------------------------------------
/* //ft_lstmap

/* #include <stdio.h>
#include <stdlib.h>
#include <string.h>
void	del_content(void *content)
{
	free(content);
}

// Fonction de transformation (exemple : on concatène "-modifié" à chaque contenu)
void	*transform(void *content)
{
	char *new_content;
	char *suffix = "-modifié";
	size_t len = ft_strlen((char *)content) + ft_strlen(suffix) + 1;
	
	new_content = malloc(len);
	if (!new_content)
		return (NULL);
	strcpy(new_content, (char *)content);
	strcat(new_content, suffix);
	return (new_content);
}

int	main(void)
{
	t_list	*list = NULL;
	t_list	*mapped_list = NULL;
	t_list	*tmp;
	
	// Création de la liste avec des éléments
	ft_lstadd_back(&list, ft_lstnew(ft_strdup("Element 1")));
	ft_lstadd_back(&list, ft_lstnew(ft_strdup("Element 2")));
	ft_lstadd_back(&list, ft_lstnew(ft_strdup("Element 3")));
	
	// Affichage de la liste initiale
	printf("Liste originale :\n");
	tmp = list;
	while (tmp)
	{
		printf("%s\n", (char *)tmp->content);
		tmp = tmp->next;
	}
	
	// Application de ft_lstmap avec la fonction de transformation
	mapped_list = ft_lstmap(list, transform, del_content);
	
	// Affichage de la nouvelle liste après transformation
	printf("\nListe après transformation :\n");
	tmp = mapped_list;
	while (tmp)
	{
		printf("%s\n", (char *)tmp->content);
		tmp = tmp->next;
	}

	// Libération de la mémoire
	ft_lstclear(&list, del_content);
	ft_lstclear(&mapped_list, del_content);

	return (0);
} */