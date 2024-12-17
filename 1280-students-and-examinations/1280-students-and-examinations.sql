# # Write your MySQL query statement below
# select s.student_id, s.student_name, e.subject_name, count(e.subject_name) as attended_exams from students s right join examinations e on s.student_id= e.student_id group by e.student_id, e.subject_name;


select s.student_id, s.student_name, sub.subject_name, count(e.subject_name) as attended_exams 
from students s cross join subjects sub left join examinations e on s.student_id= e.student_id and sub.subject_name= e.subject_name GROUP BY S.student_id, S.student_name, SUb.subject_name order by s.student_id,  SUb.subject_name;


# select s.student_id, s.student_name, sub.subject_name, count(e.subject_name) as attended_exams from examinations e right join (select s.student_id as st_id, s.student_name as st_name, sub.subject_name as sub_name from students s, subjects sub) as newi where newi.st_id= e.student_id and newi.sub_name= e.subject_name group by e.student_id, e.subject_name;
 
# 