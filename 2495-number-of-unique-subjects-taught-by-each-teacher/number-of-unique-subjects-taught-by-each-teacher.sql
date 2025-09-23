# Write your MySQL query statement below
SELECT count(distinct(subject_id)) as cnt,teacher_id 
FROM Teacher
group by teacher_id