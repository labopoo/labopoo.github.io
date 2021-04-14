CREATE DATABASE personas;

use personas;

CREATE TABLE alumnos (nombre VARCHAR(50), edad INT);

INSERT INTO alumnos (nombre,edad) VALUES ("Equis",12);

SELECT NOMBRE FROM alumnos;

SELECT EDAD FROM alumnos;

SELECT * FROM alumnos;



DESCRIBE alumnos;

DROP TABLE alumnos;

DROP DATABASE personas;

DELETE FROM alumnos;

DELETE FROM alumnos WHERE nombre = "Gloria";

UPDATE alumnos SET nombre = "Brenda" WHERE edad = 12;

SELECT * FROM alumnos WHERE edad >= 18 AND edad <= 65;

SELECT * FROM alumnos WHERE nombre = "Gloria" OR nombre = "Luis";

ALTER TABLE alumnos ADD legajo int;

ALTER TABLE alumnos DROP COLUMN apellido;

SELECT * FROM alumnos WHERE nombre LIKE 'a%';

SELECT * FROM alumnos WHERE nombre LIKE '%a';

SELECT * FROM alumnos WHERE nombre LIKE '%a%';

SELECT * FROM alumnos WHERE nombre LIKE 'g%a';

CREATE TABLE alumnos (id INT AUTO_INCREMENT, nombre VARCHAR(50), edad INT, PRIMARY KEY(id));







