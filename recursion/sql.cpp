create database org;
show databases;
use org;
create table worker(
worker_id INT NOT NULL PRIMARY KEY AUTO_INCREMENT,
first_name CHAR(25),
last_name CHAR (25),
salary INT(15),
joining_date datetime,
department CHAR(25)
);
SELECT *FROM worker;

CREATE TABLE bonus(
worker_ref_id INT,
bonus_amount INT(10),
bonus_date DATETIME,
FOREIGN KEY(worker_ref_id)
REFERENCES worker(worker_id)
ON DELETE CASCADE
);
SELECT *FROM bonus;
INSERT INTO bonus
(worker_ref_id,bonus_amount,bonus_date) VALUES
(001,5000,'16-02-20'),
(002,3000,'16-06-11'),
(003,4000,'16-02-20'),
(001,4500,'16-02-20'),
(002,3500,'16-06-11');

CREATE TABLE TITLE(
worker_ref_id INT,
worker_title CHAR(25),
affected_from DATETIME,
FOREIGN KEY(worker_ref_id)
REFERENCES worker(worker_id)
ON DELETE CASCADE
);
SELECT *FROM TITLE;
INSERT INTO TITLE
(worker_ref_id,worker_title,affected_from) VALUES
(001,'manager','2016-02-20 00:00:00'),
(002,'executive','2016-06-11 00:00:00'),
(008,'executive','2016-06-11 00:00:00'),
(005,'manager','2016-06-11 00:00:00'),
(004,'asst manager','2016-06-11 00:00:00'),
(007,'executive','2016-06-11 00:00:00'),
(006,'lead','2016-06-11 00:00:00'),
(003,'lead','2016-06-11 00:00:00');
select *from worker where salary>80000;
select department,avg(salary) from worker group by department;