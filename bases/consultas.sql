SELECT * FROM Customers
WHERE NOT Country = 'Germany';

SELECT * FROM Customers
ORDER BY Country;

SELECT * FROM Customers
ORDER BY Country DESC; 

SELECT * FROM Customers
ORDER BY Country, CustomerName;

SELECT * FROM Customers
ORDER BY Country ASC, CustomerName DESC;

SELECT column_names
FROM table_name
WHERE column_name IS NULL; 

SELECT column_names
FROM table_name
WHERE column_name IS NOT NULL; 

UPDATE Customers
SET ContactName = 'Alfred Schmidt', City = 'Frankfurt'
WHERE CustomerID = 1;

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


