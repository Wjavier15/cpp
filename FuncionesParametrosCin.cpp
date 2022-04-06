int main()
{
    funcionEntera(); //Llamando a una función sin argumentos

    bool respuesta = funcionBool(1, "hola"); //Asignando el valor retornado a una variable

    procedimiento(0, "Juan");//Invocando el procedimiento

    //Usando una función como parámetro
    procedimiento(funcionBool(1, "hola"), "Juan");

    return 0;
}
