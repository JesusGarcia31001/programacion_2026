#include <stdio.h>
#include <string.h>

#define MAX 20

struct Est {
    char nom[50];
    char cod[20];
    int ed;
    float prom;
    int act;   // 1 = activo, 0 = inactivo
};

void mostrar(struct Est e) {
    printf("\nNombre: %s", e.nom);
    printf("\nCodigo: %s", e.cod);
    printf("\nEdad: %d", e.ed);
    printf("\nPromedio: %.2f", e.prom);
    printf("\nEstado: %s\n", e.act ? "Activo" : "Inactivo");
}

int main() {
    struct Est est[MAX];
    int tot = 0, op;

    do {
        printf("\n--- MENU ---\n");
        printf("1. Agregar\n");
        printf("2. Mostrar uno\n");
        printf("3. Mostrar todos\n");
        printf("4. Salir\n");
        printf("Opcion: ");
        scanf("%d", &op);
        getchar();

        if (op == 1 && tot < MAX) {
            printf("Nombre: ");
            fgets(est[tot].nom, 50, stdin);
            est[tot].nom[strcspn(est[tot].nom, "\n")] = 0;

            printf("Codigo: ");
            fgets(est[tot].cod, 20, stdin);
            est[tot].cod[strcspn(est[tot].cod, "\n")] = 0;

            printf("Edad: ");
            scanf("%d", &est[tot].ed);

            printf("Promedio: ");
            scanf("%f", &est[tot].prom);

            printf("Activo (1/0): ");
            scanf("%d", &est[tot].act);
            getchar();

            tot++;
            printf("Guardado.\n");
        }

        else if (op == 2) {
            int i;
            printf("Numero (1 a %d): ", tot);
            scanf("%d", &i);

            if (i >= 1 && i <= tot) {
                mostrar(est[i - 1]);
            } else {
                printf("No existe.\n");
            }
        }

        else if (op == 3) {
            int i;
            for (i = 0; i < tot; i++) {
                mostrar(est[i]);
            }
        }

    } while (op != 4);

    return 0;
}
