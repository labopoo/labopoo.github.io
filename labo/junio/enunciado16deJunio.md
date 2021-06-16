Realizar un sistema que administre el consumo de electricidad de viviendas y empresas.

Cada vivienda o empreza tendrá a una dirección y un dueño asignado. 
La empresa, ademàs de la direcciòn y el dueño, tendrá un atributo que representará la Razòn Social.

El dueño deberá tener asociado un nombre, un apellido y un DNI.

Una vez por mes se deberá cargar cuál fue el consumo de electricidad de cada vivienda o empresa. 
Al cargar el consumo se debe almacenar el mes y los KWh consumidos en ese periodo, 
comprobando que el mes no esté ya cargado para esa vivienda.

Se debe generar el método correspondiente para poder calcular lo que debe pagar cada vivienda o empresa por su consumo. 
Para dicho cálculo se utilizan dos valores:

- Para domicilios particulares: $2 el KWh
- Para empresas: $3 el KWh

Ejemplo: si una vivienda consumió en un mes 20KWh debe pagar $40.

Realizar las clases correspondientes con sus métodos asociados y un programa de prueba que demuestre 
el buen funcionamiento del sistema y cálculos ejemplo de lo que deben pagar las viviendas.

Elementos del problema:
- Viviendas
- Empresas
- Dueños
- meses
- KWh de consumo

Comentarios:
- Como los los meses y los KWh consumidos estàn asociados, se deberá utilizar un hashmap.
  El nombre de cada mes serà la clave y será de tipo String.
- Como se requiere representar ciertos datos de los 3 primeros elementos, éstos deberán ser
  clases y sus atributos deberán representar aquellos datos mencionados en el enunciado.
- Como la tarifa por KWh es igual para todas las viviendas y todas las Empresas, estos
  valores deberàn estar almacenados en variables estáticas. 
  
  En la clase Vivienda: variable estàtica llamada TARIFA_VIVIENDA
  
  En la clase Empresa: variable estática llamada TARIFA_EMPRESA
  
  
