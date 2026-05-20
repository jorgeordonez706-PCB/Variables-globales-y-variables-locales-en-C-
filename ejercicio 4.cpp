#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
    const int NUM_EMPLEADOS = 20;
    double salarios_netos[20];

    for (int i = 0; i < NUM_EMPLEADOS; i++) {
        double horas;
        double tarifa;

        printf("--- Empleado %d ---\n", i + 1);
        printf("Ingrese las horas trabajadas en la semana: ");
        scanf("%lf", &horas);
        printf("Ingrese la tarifa por hora: ");
        scanf("%lf", &tarifa);

        double salario_bruto_semanal = 0;

        if (horas <= 35) {
            salario_bruto_semanal = horas * tarifa;
        } else {
            double horas_extra = horas - 35;
            salario_bruto_semanal = (35 * tarifa) + (horas_extra * tarifa * 1.5);
        }

        double salario_bruto_mensual = salario_bruto_semanal * 4;
        double impuesto_mensual = 0;

        if (salario_bruto_mensual > 1050000) {
            impuesto_mensual = (200000 * 0.20) + ((salario_bruto_mensual - 1050000) * 0.30);
        } else if (salario_bruto_mensual > 850000) {
            impuesto_mensual = (salario_bruto_mensual - 850000) * 0.20;
        }

        double salario_neto_semanal = salario_bruto_semanal - (impuesto_mensual / 4);
        salarios_netos[i] = salario_neto_semanal;
    }

    printf("\n=========================================\n");
    printf("   REPORTE DE SALARIOS NETOS SEMANALES\n");
    printf("=========================================\n");
    
    for (int i = 0; i < NUM_EMPLEADOS; i++) {
        printf("Empleado %-2d: $%.2f\n", i + 1, salarios_netos[i]);
    }

    return 0;
}