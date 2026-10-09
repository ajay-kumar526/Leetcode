# Write your MySQL query statement below
select contest_id, 
round(
count(distinct user_id)*100 / (select count(user_id) from Users) , 2)
as percentage
from Register 
Group By contest_id
Order By percentage DESC , contest_id  asc
