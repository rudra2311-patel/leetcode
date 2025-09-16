# Write your MySQL query statement below
SELECT unique_id,name
FROM EmployeeUNI E
RIGHT JOIN   Employees S
ON  E.id = S.id