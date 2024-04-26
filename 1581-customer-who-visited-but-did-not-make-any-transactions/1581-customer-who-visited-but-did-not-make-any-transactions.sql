# Write your MySQL query statement below

# select v.customer_id, count(customer_id)  from Visits v left outer join Transactions t on v.visit_id = t.visit_id and v.visit_id <> t.visit_id group by customer_id;

select customer_id, count(customer_id) as count_no_trans from Visits where visit_id not in (select v.visit_id from Visits v inner join Transactions t on v.visit_id = t.visit_id) group by customer_id;