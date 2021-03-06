#include <stdio.h>
#include <stdlib.h>
#include "LinkedList.h"
#include "Employee.h"

/** \brief Parsea los datos los datos de los empleados desde el archivo data.csv (modo texto).
 *
 * \param path char*
 * \param pArrayListEmployee LinkedList*
 * \return int
 *
 */
int parser_EmployeeFromText(FILE* pFile , LinkedList* pArrayListEmployee)
{
    Employee* employee;
    char idAux[100];
    char nombreAux[128];
    char horasAux[100];
    char sueldoAux[100];

    fscanf(pFile, "%[^,],%[^,],%[^,],%[^\n]\n", idAux, nombreAux, horasAux, sueldoAux);//para eliminar la primera linea a leer la cual contiene nombre de los datos

    while(!feof(pFile))
   {
    fscanf(pFile, "%[^,],%[^,],%[^,],%[^\n]\n", idAux, nombreAux, horasAux, sueldoAux);
    employee = employee_newParametros(idAux, nombreAux, horasAux, sueldoAux);
    ll_add(pArrayListEmployee, employee);
   }
    return 1;
}

/** \brief Parsea los datos los datos de los empleados desde el archivo data.csv (modo binario).
 *
 * \param path char*
 * \param pArrayListEmployee LinkedList*
 * \return int
 *
 */
int parser_EmployeeFromBinary(FILE* pFile , LinkedList* pArrayListEmployee)
{
    Employee* employee;


    while(!feof(pFile))
   {
    employee = employee_new();
    fread(employee, sizeof(Employee), 1, pFile);

    ll_add(pArrayListEmployee, employee);
   }

    return 1;
}

