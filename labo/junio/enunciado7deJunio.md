1) Crear una subclase de la clase persona que represente a un alumno de una escuela, debe llamarse Alumno. Los atributos que debe tener el alumno son:

- Curso, que debe ser de tipo String.
- Notas, que debe ser de tipo HashMap que asocia un String y un ArrayList de floats representando el nombre de la materia y las notas
que tiene el alumno en la misma, respectivamente.
La declaración del atributo será la siguiente:
```java
  private HashMap<String,ArrayList<Float> notas;
```
2) Se deben crear los métodos:

- Agregar Nota
- Menor Nota
- Mayor Nota
- Promedio Notas
