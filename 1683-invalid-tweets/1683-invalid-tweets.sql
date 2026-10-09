# Write your MySQL query statement below
select distinct  tweet_id 
from Tweets
where length(content)>15
Order By tweet_id