#include <stdio.h>
#include <stdlib.h>
#include <assert.h>
#include <string.h>
#include "libft.h"

/*
    cc main_lstadd_back.c ft_lstadd_back.c ft_lstnew.c ft_lstlast.c ft_strncmp.c
*/

// Macro pour l'assertion avec message personnalisé et ligne
#define assert_with_message(cond, msg, result, success_msg, test_number)    \
    if (!(cond)) {                                \
        result = 0;                                \
        fprintf(stderr, "Ligne %d Test n°%d : ❌ %s\n", __LINE__, test_number, msg); \
    } else { \
        result = 1; \
        printf("Test n°%d : ✅ %s\n", test_number, success_msg); \
    }

// Fonction de test pour lstadd_back
void test_lstadd_back()
{
    int success = 1; // Flag pour suivre les résultats des tests
    t_list *list = NULL;

    // Test 1 : Ajouter un premier élément
    printf("===== Test 1 =====\n");
    t_list *elem1 = ft_lstnew("Premier");
    ft_lstadd_back(&list, elem1);
    assert_with_message(list != NULL, "lstadd_back a échoué pour ajouter le premier élément", success, "Premier élément ajouté avec succès", 1);
    assert_with_message(ft_strncmp((char *)list->content, "Premier", 7) == 0, "Contenu du premier élément incorrect", success, "Contenu du premier élément validé", 2);
    assert_with_message(list->next == NULL, "Le champ 'next' du premier élément n'est pas NULL", success, "Le champ 'next' du premier élément est bien NULL\n", 3);

    // Test 2 : Ajouter un deuxième élément à la fin de la liste
    printf("===== Test 2 =====\n");
    t_list *elem2 = ft_lstnew("Deuxième");
    ft_lstadd_back(&list, elem2);
    assert_with_message(list->next != NULL, "lstadd_back n'a pas ajouté le deuxième élément", success, "Deuxième élément ajouté avec succès", 1);
    assert_with_message(ft_strncmp((char *)list->next->content, "Deuxième", 8) == 0, "Contenu du deuxième élément incorrect", success, "Contenu du deuxième élément validé", 2);
    assert_with_message(list->next->next == NULL, "Le champ 'next' du deuxième élément n'est pas NULL", success, "Le champ 'next' du deuxième élément est bien NULL\n", 3);

    // Test 3 : Ajouter un troisième élément à la fin de la liste
    printf("===== Test 3 =====\n");
    t_list *elem3 = ft_lstnew("Troisième");
    ft_lstadd_back(&list, elem3);
    assert_with_message(list->next->next != NULL, "lft_strncmpstadd_back n'a pas ajouté le troisième élément", success, "Troisième élément ajouté avec succès", 1);
    assert_with_message(ft_strncmp((char *)list->next->next->content, "Troisième", 9) == 0, "Contenu du troisième élément incorrect", success, "Contenu du troisième élément validé", 2);
    assert_with_message(list->next->next->next == NULL, "Le champ 'next' du troisième élément n'est pas NULL", success, "Le champ 'next' du troisième élément est bien NULL\n", 3);

    // Test 4 : Ajouter un élément à une liste vide
    printf("===== Test 4 =====\n");
    t_list *elem4 = ft_lstnew("Quatrième");
    t_list *empty_list = NULL;
    ft_lstadd_back(&empty_list, elem4);
    assert_with_message(empty_list != NULL, "lstadd_back a échoué pour ajouter un élément à une liste vide", success, "Élément ajouté à une liste vide", 1);
    assert_with_message(ft_strncmp((char *)empty_list->content, "Quatrième", 9) == 0, "Contenu de l'élément ajouté à une liste vide incorrect", success, "Contenu de l'élément ajouté validé\n", 2);

    // Afficher les résultats
    if (success) {
        printf("Tous les tests réussis !\n");
    } else {
        printf("Certains tests ont échoué.\n");
    }

    // Libération de la mémoire allouée
    free(list->next->next);
    free(list->next);
    free(list);
    free(empty_list);
}

int main()
{
    test_lstadd_back();
    return 0;
}
