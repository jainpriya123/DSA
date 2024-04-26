# Write your MySQL query statement below
# select p.product_id, (p.price*u.units)/(sum(u.unit)) as average_price from price p join UnitsSold u on p.product_id = u.product_id and u.purchase_date between p.start_date and p.end_date group by p.product_id;

select temp.product_id, round(sum(temp.price*coalesce(temp.units,0))/(coalesce(sum(temp.units),1)),2) as average_price from (select p.product_id, p.price, u.units from prices p left join UnitsSold u on (p.product_id = u.product_id and u.purchase_date between p.start_date and p.end_date)) as temp group by temp.product_id;

# select sum(temp.price*temp.units)/(sum(temp.units)) from (select p.product_id, p.price, u.units from prices p join UnitsSold u on (p.product_id = u.product_id and u.purchase_date between p.start_date and p.end_date)) as temp group by temp.product_id;
