SELECT employee_id, department_id
FROM Employee
WHERE primary_flag='Y'
UNION 
SELECT employee_id, department_id
FROM Employee
group by employee_id
having count(employee_id) =1;