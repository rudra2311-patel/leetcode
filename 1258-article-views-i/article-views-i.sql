# Write your MySQL query statement below
Select author_id as id 
FROM Views
Where author_id = viewer_id

Group by author_id
ORDER BY author_id ASC 