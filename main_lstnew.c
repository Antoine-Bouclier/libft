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

// Macro pour l'assertion avec message personnalisé et ligne
#define assert_with_message(cond, msg, result, success_msg)    \
    if (!(cond)) {                                \
        result = 0;                                \
        fprintf(stderr, "Ligne %d test n°%d : ❌ %s\n", __LINE__, __COUNTER__, msg); \
    } else { \
        result = 1; \
        printf("Test n°%d : ✅ %s\n", __COUNTER__, success_msg); \
    }

// Fonction de test pour lstnew
void test_lstnew()
{
    int success = 1; // Flag pour suivre les résultats des tests

    // Test 1 : Tester la création d'un premier élément
    t_list *list1 = lstnew("Premier");
    assert_with_message(list1 != NULL, "lstnew a échoué pour le premier élément", success, "Premier élément créé avec succès");
    assert_with_message(list1->content != NULL, "lstnew a alloué un élément sans contenu", success, "Contenu du premier élément correctement initialisé");
    assert_with_message(strcmp((char *)list1->content, "Premier") == 0, "Contenu de l'élément incorrect", success, "Contenu du premier élément validé");
    assert_with_message(list1->next == NULL, "Le champ 'next' de l'élément n'est pas NULL", success, "Le champ 'next' du premier élément est bien NULL");

    // Test 2 : Tester la création d'un second élément et la liaison
    list1->next = lstnew("Deuxième");
    assert_with_message(list1->next != NULL, "lstnew a échoué pour le deuxième élément", success, "Deuxième élément créé avec succès");
    assert_with_message(list1->next->content != NULL, "lstnew a alloué un deuxième élément sans contenu", success, "Contenu du deuxième élément correctement initialisé");
    assert_with_message(strcmp((char *)list1->next->content, "Deuxième") == 0, "Contenu du deuxième élément incorrect", success, "Contenu du deuxième élément validé");
    assert_with_message(list1->next->next == NULL, "Le champ 'next' du deuxième élément n'est pas NULL", success, "Le champ 'next' du deuxième élément est bien NULL");

    // Test 3 : Tester la création d'un troisième élément
    list1->next->next = lstnew("Troisième");
    assert_with_message(list1->next->next != NULL, "lstnew a échoué pour le troisième élément", success, "Troisième élément créé avec succès");
    assert_with_message(list1->next->next->content != NULL, "lstnew a alloué un troisième élément sans contenu", success, "Contenu du troisième élément correctement initialisé");
    assert_with_message(strcmp((char *)list1->next->next->content, "Troisième") == 0, "Contenu du troisième élément incorrect", success, "Contenu du troisième élément validé");
    assert_with_message(list1->next->next->next == NULL, "Le champ 'next' du troisième élément n'est pas NULL", success, "Le champ 'next' du troisième élément est bien NULL");

    // Test 4 : Tester que la fonction lstnew retourne NULL si malloc échoue
    // Pour simuler un échec de malloc, nous allons forcer une erreur.
    // En réalité, tu ne peux pas forcer directement malloc à échouer ici, mais tu pourrais utiliser des outils ou des techniques de simulation.
    t_list *list2 = lstnew(NULL);  // Simuler une erreur en passant NULL
    assert_with_message(list2 == NULL, "lstnew n'a pas retourné NULL lorsque content est NULL", success, "lstnew a retourné NULL comme attendu");

    // Afficher les résultats
    if (success) {
        printf("Tous les tests réussis !\n");
    } else {
        printf("Certains tests ont échoué.\n");
    }

    // Libération de la mémoire allouée
    free(list1->next->next);
    free(list1->next);
    free(list1);
}

int main()
{
    test_lstnew();
    return 0;
}




