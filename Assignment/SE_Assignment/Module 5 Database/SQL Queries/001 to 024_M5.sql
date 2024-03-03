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

    ----------------------------------------------------------------------------------

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

create table viewtable(
	Employee_id int auto_increment,
    First_name varchar(30),
    Last_name varchar(30),
    Salary int,
    Joining_date varchar(50),
    Department varchar(30),
    primary key(Employee_id)
);

DELIMITER //
create trigger insert_viewtable after insert on employee
for each row
begin
insert into viewtable(First_name,Last_name,Salary,Joining_date,Department)
values(new.First_name,new.Last_name,new.Salary,new.Joining_date,new.Department);
end //
DELIMITER ;

insert into employee(First_name,Last_name,Salary,Joining_date,Department)
values ('rana','vishwadipsinh',2000000,'19-apr-23 12:00:00 AM','QA'),
('yashraj','jadeja',800000,'10-apr-23 12:00:00 AM','QA');

------------------------------------------------------------------------------

/*
11.Create table given below: Salesperson and Customer
*/

CREATE Table salesperson(
    sno INT NOT NULL PRIMARY KEY,
    sname VARCHAR(10),
    city VARCHAR(15),
    comm DOUBLE    
);

INSERT INTO salesperson(sno,sname,city,comm)
VALUES(1001,'peel','london',0.12),
(1002,'serres','san jose',0.13),
(1004,'motika','london',0.11),
(1007,'rafkin','barcelona',0.15),
(1003,'axelrod','new york',0.1);

CREATE Table customer(
    cnm INT NOT NULL PRIMARY KEY,
    cname VARCHAR(20),
    city VARCHAR(15),
    rating INT,
    sno INT,
    Foreign Key (sno) REFERENCES salesperson(sno)
); 

INSERT INTO customer(cnm,cname,city,rating,sno)
VALUES(201,'hoffman','london',100,1001),
(202,'giovanne','rome',200,1003),
(203,'liu','san jose',300,1002),
(204,'grass','barcelona',100,1002),
(206,'clemens','london',300,1007),
(207,'pereira','rome',100,1004);

/*
12.Retrieve the below data from above table (after this question there is
no table avilable, that's why not answered)

13.All orders for more than $1000.(no order column in above table so not 
answered)
*/

/*
14.Names and cities of all salespeople in London with commission above 0.12
*/

SELECT sname,city,comm
FROM salesperson
WHERE city='london' and comm>=0.12;
/* There is no salesperson above 0.12 comission so changed "above" into "greater
than or equal to" */

/*
15.All salespeople either in Barcelona or in London
*/

SELECT *
from salesperson
WHERE city='london' or city='barcelona';

/*
16.All salespeople with commission between 0.10 and 0.12. (Boundary
valuesshould be excluded).
*/

SELECT *
from salesperson
where comm>0.10 and comm<0.12;

/*
17.All customers excluding those with rating <= 100 unless they are located
inRome
*/

SELECT *
FROM customer
where rating>100 or city='rome';

-----------------------------------------------------------------------------

/*
18. Write a SQL statement that displays all the information about all
salespeople
*/

CREATE Table salesman(
    salesman_id INT NOT NULL PRIMARY KEY,
    sname VARCHAR(35),
    city VARCHAR(10),
    commission DOUBLE
);

INSERT INTO salesman
VALUES(5001,'james hoog','new york',0.15),
(5002,'nail knite','paris',0.13),
(5005,'pit alex','london',0.11),
(5006,'mc lyon','paris',0.14),
(5007,'paul adam','rome',0.13),
(5003,'lauson hen','san jose',0.12);

SELECT *
from salesman;

-------------------------------------------------------------------------------------

/*
19.From the following table, write a SQL query to find orders that are
delivered by a salesperson with ID. 5001. Return ord_no, ord_date,
purch_amt.
*/

    SELECT ord_no,ord_date,purch_amt
    FROM orders
    WHERE salesman_id=5001;

---------------------------------------------------------------------------------

create table item_mast(
	pro_id int not null primary key,
    pro_name varchar(30),
    pro_price double,
    pro_com int 
    );

insert into item_mast
values(101,'Mother Board',3200.00,15),
(102,'Key Board',450.00,16),
(103,'ZIP Drive',250.00,14),
(104,'Speaker',550.00,16),
(105,'Monitor',5000.00,11),
(106,'DVD Drive',900.00,12),
(107,'CD Drive',800.00,12),
(108,'Printer',2600.00,13),
(109,'Refill cartridge',350.00,13),
(110,'Mouse',250.00,12);

/*
20. From the following table, write a SQL query to select a range of
products whose price is in the range Rs.200 to Rs.600. Begin and end
values are included. Return pro_id, pro_name, pro_price, and pro_com.
*/

SELECT pro_id,pro_name,pro_price,pro_com
FROM item_mast
WHERE pro_price between 200 and 600;

/*
21. From the following table, write a SQL query to calculate the average
price for a manufacturer code of 16. Return avg.
*/

SELECT AVG(pro_price) as average_price
FROM item_mast
WHERE pro_com=16;

/*
22. From the following table, write a SQL query to display the pro_name
as 'Item Name' and pro_price as 'Price in Rs.'
*/

select pro_name as item_name,pro_price as price_in_Rs
from item_mast;

/*
23. From the following table, write a SQL query to find the items whose
prices are higher than or equal to $250. Order the result by product price in
descending, then product name in ascending. Return pro_name and
pro_price.
*/

SELECT pro_name,pro_price
FROM item_mast
WHERE pro_price>=250
ORDER BY pro_price DESC,pro_name ASC;

/*
24. From the following table, write a SQL query to calculate average price of
the items for each company. Return average price and companycode.
*/

SELECT pro_com,AVG(pro_price) as average_price
FROM item_mast
GROUP BY pro_com;







































