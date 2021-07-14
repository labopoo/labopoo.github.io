Ejercicio integrador

Nota: no es necesario que este trabajo sea terminado el día de hoy, es un ejercicio con el que seguiremos trabajando
después de las vacaciones.

Crear un sistema para administrar el saldo de la tarjeta de transporte llamada TarjetaEquis
y para llevar un registro de los pasajeros que están presentes en el medio de transporte.

El sistema consistirá en crear las clases

Clase Viaje, con atributos: precio, fecha, hora

(fecha y hora, por ahora, serán de tipo String)

Clase TarjetaEquis, con atributos: saldo, saldoNegativoMaximo, numeronId, lista "viajes"

La clase TarjetaEquis tendrá como métodos:
- "cargarSube(float monto)"
- "realizarViaje(Viaje viaje)"
- "ultimoMontoAbonado()"

Clase Pasajero, con atributos: nombre, apellido, tarjeta

Clase Sistema, con atributos: lista "pasajerosPresentes", lista "historialDePasajeros", línea 

La clase Sistema tendrá como métodos:
- "subePasajero(Pasajero pasajero)", método que no retorna nada; imprime "¡Bienvenido!"
en caso de que el usuario haya podido pagar su boleto exitosamente e imprime "Saldo Insuficiente"
en caso contrario.
- "seBajaPasajero(Pasajero pasajero)", método que no retorna nada
- "pasajerosQueSeHanSubidoAlgunaVez()", retorna una instancia de clase HashSet
- "pasajerosConUltimoMontoAbonado()", retorna una instancia de la clase HashMap
- "ultimoMontoAbonadoPorPasajero(float numeroId)", retorna el monto del pasajero que tiene la tarjeta con numeroId
   Utilizar el método "pasajerosConUltimoMontoAbonado()"
- "seSuperaElSaldoNegativo()", método que retorna true en caso de superar el saldo negativo y 
false en caso contrario
