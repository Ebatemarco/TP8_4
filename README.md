# TP8_4
Implementar un módulo con una función, que dada una entrada en formato de entrada de main por línea de 
comandos distinga entre opciones y parámetros y devuelva esta información en tres arreglos a quien la llamó.
o Opción: una opción consiste de dos argumentos: el primero comienza con un guión (“-”) y se 
    denomina clave, y el segundo se denomina valor. Un ejemplo con dos opciones (la clave 
    maxclients con valor 4, y la clave path con valor /var/web) es: webserver -maxclients 4 -path /var/web
o Parámetros: un argumento aislado que no comienza con guión. Un ejemplo con una opción y dos parámetros es:
    copyfile -isverify 1 archivo1.c archivo2.c
o Escribir un main.c que utilice el módulo que escribieron para imprimir en pantalla las opciones y parámetros.
