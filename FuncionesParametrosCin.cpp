int main()
{
    funcionEntera(); //Llamando a una funci�n sin argumentos

    bool respuesta = funcionBool(1, "hola"); //Asignando el valor retornado a una variable

    procedimiento(0, "Juan");//Invocando el procedimiento

    //Usando una funci�n como par�metro
    procedimiento(funcionBool(1, "hola"), "Juan");

    return 0;
}
