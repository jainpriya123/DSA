# Write your MySQL query statement below
select eU.unique_id, e.name from Employees e left join EmployeeUNI eU on e.id = eU.id;