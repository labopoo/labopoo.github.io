### Exámen 28 de Junio

#### PARTE 1

1. ¿Qué es una clase?
2. ¿Qué es un objeto?
3. ¿Qué es un constructor?
4. Suponiendo que se tiene la clase Persona implementada y tiene dos constructores:
   
   a. Constructor por defecto
   
   b. Constructor con un parámetro de tipo String y llamado "nombre"
   
   Escriba el código correspondiente para crear dos objetos, uno utilizando
   el constructor *a* y otro utilizando el constructor *b*.
5. ¿Cuántos objetos se pueden crear de una clase?
6. ¿Qué son los atributos de una clase? ¿Qué representan?
7. ¿Qué son los métodos de una clase? ¿Qué representan?

8. ¿Una clase puede tener más de un constructor? 
9. ¿Qué significa "this"?
10. ¿Qué debe suceder para que dos objetos sean considerados iguales?
11. ¿Para qué sirve el operador "new" en Java?
12. Si ejecuto lo siguiente que está escrito dentro del método main,

```java
Persona p1 = new Persona();
Persona p2 = new Persona();

System.out.println(p1 == p2);
```
¿Qué es lo que imprime? 

13. ¿Para qué sirve la palabra reservada _package_?
14. ¿Para qué sirve la palabra reservada _import_?
15. ¿Para qué utilizamos la clase Scanner?
16. ¿Qué es ArrayList?¿Cuáles son sus características principales?
17. ¿Qué es HashSet?¿Cuáles son sus características principales?
18. ¿Qué es HashMap?¿Cuáles son sus características principales?

#### PARTE 2
19. Se debe implementar una parte de un sistema que sirve para registrar las visitas de 
los clientes de un banco. Para ello, deberán:

- Crear la clase Persona, la misma debe tener como atributos: nombre y dni.
- Crear la clase Cliente, la misma debe tener como atributos: nombre, dni y cbu.
  
  Reutilizar la clase Persona teniendo en cuenta el concepto de herencia de clases.
- Crear la clase Banco, la misma deberá tener como atributos: nombre y una lista
  de clientes que visitaron al banco. 
  
  Esta clase deberá tener sólo el constructor por defecto.
- En la clase Banco, crear un método que retorne un HashSet que contenga los cbu's de
  los clientes que visitaron el banco. El método deberá llamarse "cbusDeClientesVisitantes".
- Crear un método que reciba un HashSet con la estructura del ítem anterior e imprima sus elementos.
- En la clase Banco, crear un método que retorne un HashMap cuyos pares clave-valor
  asocien el cbu de un cliente y la cantidad de visitas que realizó. 
  
  El método deberá llamarse "cantidadDeVisitasPorCliente"
- Crear un método que reciba un HashMap con la estructura del ítem anterior e imprima sus 
  elementos según el siguiente formato:
```
  clave: "121234343531" - valor: 3
```
  
