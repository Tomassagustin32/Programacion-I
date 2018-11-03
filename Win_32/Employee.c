Employee* employee_new()
{

}

Employee* employee_newParametros(char* idStr,char* nombreStr,char* horasTrabajadasStr)
{
    Employee* empleado;
    Employee = malloc(sizeof(Employee));
    if(empleado!=NULL)
    {
        empleado->idStr=idStr;
        strcpy(empleado->nombreStr, nombreStr);
        strcpy(empleado->horasTrabajadas, horasTrabajadasStr);
    }
return empleado;
}

int employee_setId(Employee* this,int id)
{
    int estado = 0;
    if(this != NULL)
    {
        estado = 1;
        strcpy(this->id, id);
    }

    return estado;
}

int employee_getId(Employee* this,int* id)
{
    int* id = "";

    if(this != NULL)
    {
        id = this->id;
    }
    else{
        printf("Error en el programa");
    }

    return id;
}

int employee_setNombre(Employee* this,char* nombre)
{
    int estado = 0;
    if(this != NULL)
    {
        estado = 1;
        strcpy(this->nombre, nombre);
    }

    return estado;
}

int employee_getNombre(Employee* this,char* nombre)
{
    char* nombre = "";

    if(this != NULL)
    {
        strcpy(nombre, this-> nombre);

    }
    else{

        printf("Error en el programa");
    }
    return nombre;
}

int employee_setHorasTrabajadas(Employee* this,int horasTrabajadas)
{
    int estado = 0;
    if(this != NULL)
    {
        estado = 1;
        strcpy(this->id, id);
    }

    return estado;
}
