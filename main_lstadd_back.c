#include <stdio.h>
#include <stdlib.h>
#include <assert.h>
#include <string.h>

// Définition d'un élément de la liste chaînée
typedef struct s_list
{
    void *content;
    struct s_list *next;
} t_list;

// Fonction lstnew qui crée un nouvel élément de liste
t_list *lstnew(void *content)
{
    t_list *new_elem;

    new_elem = (t_list *)malloc(sizeof(t_list));
    if (!new_elem)
        return (NULL);
    new_elem->content = content;
    new_elem->next = NULL;
    return (new_elem);
}

// Fonction lstadd_back qui ajoute un élément à la fin de la liste
void lstadd_back(t_list **lst, t_list *new_elem)
{
    t_list *current;

    if (!lst || !new_elem)
        return;
    
    if (*lst == NULL) {
        *lst = new_elem;
    } else {
        current = *lst;
        while (current->next != NULL) {
            current = current->next;
        }
        current->next = new_elem;
    }
}

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
    t_list *elem1 = ft_lstnew("Premier");
    lstadd_back(&list, elem1);
    assert_with_message(list != NULL, "lstadd_back a échoué pour ajouter le premier élément", success, "Premier élément ajouté avec succès", 1);
    assert_with_message(strcmp((char *)list->content, "Premier") == 0, "Contenu du premier élément incorrect", success, "Contenu du premier élément validé", 2);
    assert_with_message(list->next == NULL, "Le champ 'next' du premier élément n'est pas NULL", success, "Le champ 'next' du premier élément est bien NULL", 3);

    // Test 2 : Ajouter un deuxième élément à la fin de la liste
    t_list *elem2 = ft_lstnew("Deuxième");
    lstadd_back(&list, elem2);
    assert_with_message(list->next != NULL, "lstadd_back n'a pas ajouté le deuxième élément", success, "Deuxième élément ajouté avec succès", 4);
    assert_with_message(strcmp((char *)list->next->content, "Deuxième") == 0, "Contenu du deuxième élément incorrect", success, "Contenu du deuxième élément validé", 5);
    assert_with_message(list->next->next == NULL, "Le champ 'next' du deuxième élément n'est pas NULL", success, "Le champ 'next' du deuxième élément est bien NULL", 6);

    // Test 3 : Ajouter un troisième élément à la fin de la liste
    t_list *elem3 = ft_lstnew("Troisième");
    lstadd_back(&list, elem3);
    assert_with_message(list->next->next != NULL, "lstadd_back n'a pas ajouté le troisième élément", success, "Troisième élément ajouté avec succès", 7);
    assert_with_message(strcmp((char *)list->next->next->content, "Troisième") == 0, "Contenu du troisième élément incorrect", success, "Contenu du troisième élément validé", 8);
    assert_with_message(list->next->next->next == NULL, "Le champ 'next' du troisième élément n'est pas NULL", success, "Le champ 'next' du troisième élément est bien NULL", 9);

    // Test 4 : Ajouter un élément à une liste vide
    t_list *elem4 = ft_lstnew("Quatrième");
    t_list *empty_list = NULL;
    lstadd_back(&empty_list, elem4);
    assert_with_message(empty_list != NULL, "lstadd_back a échoué pour ajouter un élément à une liste vide", success, "Élément ajouté à une liste vide", 10);
    assert_with_message(strcmp((char *)empty_list->content, "Quatrième") == 0, "Contenu de l'élément ajouté à une liste vide incorrect", success, "Contenu de l'élément ajouté validé", 11);

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
