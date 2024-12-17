# Write your MySQL query statement below
# select e2.name from Employee e1 join Employee e2 on e1.id=e2.id and e1.id <> e2.managerId group by e2.managerId having count(e2.managerId)>=5 ;

select e1.name from Employee e1 join Employee e2 on e1.id = e2.managerId group by e1.id having count(e1.id)>=5;