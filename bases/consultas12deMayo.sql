

CREATE TABLE mascotas (
  id     INT NOT NULL AUTO_INCREMENT PRIMARY KEY,
  nombre VARCHAR(100) NOT NULL,
  edad   INT NOT NULL,
  genero VARCHAR(50) NOT NULL
);

create table usuarios (
  nombre varchar(20),
  clave varchar(10),
  primary key(nombre)
 );

INSERT INTO mascotas (nombre, edad, genero)
VALUES
  ("Pepo",5,"macho"),
  ("Lolo",2,"hembra");

ALTER TABLE personas
ADD dni INT; 

ALTER TABLE personas
DROP COLUMN dni; 

ALTER TABLE productos
ADD precio INT; 

SELECT * FROM productos
WHERE nombre LIKE '%o%';

SELECT * FROM productos
WHERE nombre LIKE '%or%';

SELECT * FROM productos
WHERE nombre LIKE 'a_%_%';

FLOAT
-- con .

ALTER TABLE productos
MODIFY COLUMN precio FLOAT; 

DATE 
-- YYYY-MM-DD

DATETIME 
-- YYYY-MM-DD HH:MI:SS

SELECT MIN(precio)
FROM productos;

SELECT MIN(precio)
FROM productos WHERE id >= 10 ;

SELECT MAX(precio)
FROM productos;

SELECT COUNT(precio)
FROM productos
WHERE condicion;

SELECT AVG(precio)
FROM productos
WHERE condicion;  

SELECT SUM(precio)
FROM productos
WHERE condicion; 

ALTER TABLE productos CHANGE precio precioUnitario FLOAT;

SELECT precio
FROM productos
WHERE precio BETWEEN value1 AND value2; 

SELECT precio 
from productos 
WHERE id BETWEEN 1 and 5;

SELECT max(precio)
FROM productos 
WHERE id BETWEEN 1 and 6;












