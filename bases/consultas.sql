SELECT * FROM alumnos
WHERE NOT edad = 12;

SELECT * FROM alumnos WHERE nombre LIKE 'a%';

SELECT * FROM alumnos WHERE nombre LIKE '%a';

SELECT * FROM alumnos WHERE nombre LIKE '%a%';

SELECT * FROM alumnos WHERE nombre LIKE 'g%a';

CREATE TABLE alumnos (id INT AUTO_INCREMENT, nombre VARCHAR(50), edad INT, PRIMARY KEY(id));

SELECT * FROM alumnos
ORDER BY edad;

SELECT * FROM alumnos
ORDER BY edad DESC;

SELECT * FROM alumnos
ORDER BY nombre;
                                                                                       
SELECT * FROM alumnos
ORDER BY nombre DESC;
                                                                                       
SELECT *
FROM alumnos
WHERE edad IS NULL; 

SELECT *
FROM alumnos
WHERE edad IS NOT NULL; 
                                                                                 
UPDATE alumnos
SET nombre = "Alfredo", edad = 12
WHERE id = 1;
                                                                                       
UPDATE alumnos
                                                                                       

SELECT * FROM Customers
LIMIT 3; 

SELECT * FROM Customers
WHERE Country='Germany'
LIMIT 3; 

INSERT INTO table2
SELECT * FROM table1
WHERE condition; 

INSERT INTO table2 (column1, column2, column3, ...)
SELECT column1, column2, column3, ...
FROM table1
WHERE condition; 


