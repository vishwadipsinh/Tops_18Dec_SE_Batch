create database Assignment;
use Assignment;



/*
1. Create Table Name : Student and Exam
*/

create table student(
rollno int auto_increment primary key,
s_name varchar(20),
branch varchar(20)
);

-- Column Name change karva mate nicheni Query use thay.
-- ALTER TABLE student
-- CHANGE COLUMN vishwadip s_name VARCHAR(20);

create table exam(
rollno int not null,
s_code varchar(20) not null,
marks int,
p_code varchar(20),
primary key(rollno, s_code),
foreign key(rollno) references student(rollno)
);

insert into student(s_name,branch)
values('jay','computer science'),
('suhani','electronics and communication'),
('kriti','electronics and communication');

insert into exam(rollno,s_code,marks,p_code)
values(1,'CS11',50,'CS'),
(1,'CS12',60,'CS'),
(2,'EC101',66,'EC'),
(2,'EC102',70,'EC'),
(3,'EC101',45,'EC'),
(3,'EC102',50,'EC');



/*
2. Create table given below: Employee and IncentiveTable
*/

CREATE TABLE EMPLOYEE(
    EMPLOYEE_ID INT AUTO_INCREMENT PRIMARY KEY,
    FIRST_NAME VARCHAR(20),
    LAST_NAME VARCHAR(20),
    SALARY INT,
    JOINING_DATE VARCHAR(15),
    DEPARTMENT VARCHAR(15)
);

CREATE TABLE INCENTIVE(
    EMPLOYEE_ID INT NOT NULL,
    INCENTIVE_DATE VARCHAR(15),
    INCENTIVE_AMOUNT INT,
    PRIMARY KEY(EMPLOYEE_ID,INCENTIVE_DATE),
    foreign key (EMPLOYEE_ID)references Employee(Employee_id)
    );

    INSERT INTO EMPLOYEE(FIRST_NAME,LAST_NAME,SALARY,JOINING_DATE,DEPARTMENT)
    VALUES('john','abraham',1000000,'01-jan-13 12:00:00 AM','banking'),
    ('michael','clarke',800000,'01-jan-13 12:00:00 AM','insurance'),
    ('roy','thomas',700000,'01-feb-13 12:00:00 AM','banking'),
    ('tom','jose',600000,'01-feb-13 12:00:00 AM','insurance'),
    ('jerry','pinto',650000,'01-feb-13 12:00:00 AM','insurance'),
    ('philip','mathew',750000,'01-jan-13 12:00:00 AM','services'),
    ('testname1','123',650000,'01-jan-13 12:00:00 AM','services'),
    ('testname2','lname%',600000,'01-feb-13 12:00:00 AM','insurance');

    INSERT into incentive(employee_id,incentive_date,incentive_amount)
    VALUES(1,'01-feb-13',5000),
    (2,'01-feb-13',3000),
    (3,'01-feb-13',4000),
    (1,'01-jan-13',4500),
    (2,'01-jan-13',3500);

 /*
3. Get First_Name from employee table using Tom name “Employee Name”.
*/

SELECT first_name
from employee
WHERE first_name='tom';

/*
4. Get FIRST_NAME, Joining Date, and Salary from employee table.
*/

SELECT first_name,joining_date,salary
from employee;

/*
5. Get all employee details from the employee table order by First_Name Ascending 
and Salary descending?
*/

SELECT *
from employee
ORDER BY first_name ASC, salary desc;

/*
6. Get employee details from employee table whose first name contains ‘J’.
*/

SELECT *
from employee
WHERE first_name LIKE '%j%';

/*
7. Get department wise maximum salary from employee table order by
*/

SELECT *
from employee
ORDER BY department ASC, salary desc;

/*
8. salaryascending?
*/

SELECT *
FROM employee
ORDER BY salary ASC;

/*
9. Select first_name, incentive amount from employee and incentives table
for those employees who have incentives and incentive amount greater than
3000
*/

select employee.First_name,incentive.Incentive_amount
from incentive
inner join employee
on incentive.Employee_id = employee.Employee_id
where Incentive_amount>3000;

/*
10. Create After Insert trigger on Employee table which insert records in
viewtable
*/


























