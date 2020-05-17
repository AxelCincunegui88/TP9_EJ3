

/* La funcion suma digitos toma un numero entero por parametro y convierte sus 
 * los digitos que la componen en unidades que luego se sumaran para dar asi el
 * el resultado
 * 
 * La funcion Suma_Digitos no funciona por lo siguentes motivos:
 * no tiene un caso base , por ende , se llamará a si misma hasta saturar el 
 * stack no contempla los numeros negativos. 
 * 
 */

int suma_digitos(int n1)
{
    if(n1<0)
    {
        n1=-n1; // lo convierte en positivos
    }
    else if(n1<= 9)
    {
        return(n1);     // si el numero es un solo digito se devuelve tal cual
    }
    else
    {
        return((n1%10)+suma_digitos(n1/10)); // caso recursivo
    }
}
