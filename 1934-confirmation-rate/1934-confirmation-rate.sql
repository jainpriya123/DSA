# Write your MySQL query statement below 
# select s.user_id, 
# Round(Avg(If(c.action='confirmed',1,0)),2) as confirmation_rate  from signups s left join confirmations c on Signups.user_id = Confirmations.user_id group by c.user_id ;



select  Signups.user_id, Round(Avg(If(Confirmations.action='confirmed',1,0)),2) as confirmation_rate from signups left join Confirmations on  Signups.user_id = Confirmations.user_id group by user_id;