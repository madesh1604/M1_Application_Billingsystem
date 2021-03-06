# REPORT
# REQUIREMENTS
## _Introduction_
Customer Billing System Project is a simple console application designed to demonstrate the practical use of C programming language and its features as wells as to generate an application which can be used in any departmental store, shops, cafes etc. for billing to the customer. You can use this application to keep the records such as name, address, mobile number, paid amount, due amount, payment date etc. of your regular costumer. Moreover, if you have a new customer, you can add and edit the account at any time.
## Research
Customer Billing System is an application designed to generate the bill to the customer which can beused in any departmental store, shops, cafes etc. You can use this application to keep the records suchas name, address, mobile number, paid amount, due amount, payment data etc. of your regularcustomer. Moreover, if you have a new customer, you can add and edit the account at any time.
  ## __Cost__
 The Cost for the customer billing system aplication  is the intialization of software and system requirements .
The running cost needs an working system with an the battery backsups.
The average cost of manually processing and sending an invoice is about US$25, which covers labor, paper and ink, and postage costs. Billing software does not require these expenses as invoices are sent electronically via email. This way saves a considerable amount of money.
  ## __Features__  
1.  It can hold any number of product and price can be added to the program at any time.
2.  The programming of simple calculations such as calculation of  amount, quantity etc. have been embed in the code of project.
3.  The Customer Billing System project in C gives you the facility of searching the products by two ways, either by name of the product or by the code of product.
4.  The  amount to be paid is shown as bottom.
5.  If you have nothing to do with the program, you can directly exit from the main menu.

   ## __TimeLine__
Problem Statement ---> Research ---> Plan --->Design --->Implement--->Testing --->Execute---> Out for Market 
## Defining our System
Although graphics has not been used in this project, the application of user defined functions and structures have been effectively used here. The major user defined functions used in this C project are:
1.  void create()
2.  void bill()
3.  void display()
4. 	void edit()
5.  void invoice()
6.  void mdelete()
7.  void mdisplay()

Customer Billing System application is so simple to use. In order to use the application, click at the exe file and then, you will have three options to:
1.	 To add product

2.	 To search product

3.	 To exit
As per your need, enter 1, 2,or 3 and follow the instructions provided by the application itself.

__TOOLS USED__
1.  GCC Compiler
2.  G-Edit
3.  GNU/GDB debugger
4.  C/C++ interpreter Ch 5.0       

## SWOT Analysis
__STRENGTH__ 
The manual billing procedure is often tedious and inconvenient. After verifying the transaction, you have to fill out an invoice, register it into your records, extract information, update records, and send the billing statement.With invoicing Applicaion, all that hard work can be done with just a click of a button. The only manual task is to encode the customer and transaction details. Once done, the invoice is generated and sent to the customer. It can even be scheduled to send invoices automatically based on agreed payment terms or billing cycle.

__WEAKNESS__ 
  The biggest disadvantage of online accounting is that you can no longer do without the internet. If you are not connected, you cannot access your accounting. Also, you unfortunately never have a 100% guarantee that data cannot be hacked online. Reputable accounting software vendors adhere to the strictest security rules and have their online security specialists on top to outsmart hackers daily, but there is still a certain risk.  And it Requires large database.

__OPPOURTUNITIES__ 
 In a nutshell, it can be summarized that the future scope of the project circles around maintaining information regarding:
 
We also use  this application for  an online platforms for buying things.

We can add printer in future.

We can give more advance software for Online Billing System including more facilities.

We will host the platform on online servers to make it accessible worldwide.

Database queries Implement the backup mechanism for taking backup of codebase and database.

Implement of the backup mechanism for taking backup of codebase and data base on regular basis on different servers.

__THREATS__ 
Threats are macro environment factors and developments that can derail business model of Billing Cibs. Threats can emerge from various factors such as - changes in consumer preferences, economic growth, technological innovations, political developments & policy changes, and increase in consumer disposable income .
 
## 4W's and 1'H
__Who__
 This project makes an the benefits for the both customers and time and data base for the vendors.

__What__
 The main aim of the project is  to reduce mannual calculations using for billing systems.

__When__
This will happen when there is an interations between the from and to.

__Where__
It takes place anywhere wherever we have need for the Billing Options.

__How__
It works in an simple logic what  are we used for mannual calculations for customer billing we have to use this using an System applications.
## Detail Requirements
__High Level Requirements__
|   ID  |     Description    |       Status       |
| ----- | ------------------ | ------------------ |
| HLR1  | Login and Sign up  | Users need to acces |
| HLR2  | Search filter      | filter by prices and product |

__LOW LEVEL REQUIREMENTS__
| ID  | Description | Status |
| --- | ----------- | ------ |
| LLR1 | User Inputs | To Check the options they choose |
| LLR2 | Basic operation | To generate bills |
| LLR3 | Multifile Approach | To reduce the code structure |

# Behavioural Diagram

![image](https://user-images.githubusercontent.com/91029826/143376522-1464dbee-0bf1-437f-8d65-ee2f6990601d.png)

# Structural Diagram

![image](https://user-images.githubusercontent.com/91029826/143376773-cd8a200d-955d-4dd4-8e97-0af719b4d57d.png)

# Low Level Diagram

![image](https://user-images.githubusercontent.com/91029826/143376903-40c31e2f-a81b-489c-80a4-6ca25fa5262d.png)

## Test Cases 
|   ID   |        Test Scenario           |          Test Data              |
|   --  |      ----------------------          |          ---------              |
|   1    |       For logIn - Administrator needs   Password              |  Administrator password "SANKAR"    |
|   2    |    Administrator wants to Create the record         |(__productcode ="01", productname="sugar", quantity=10 , price=40__) (__productcode="03",productname="rice" quantity="100", price="55"__ ) (__productcode="05" , productname="oil",quantity=15 , price="100"__) |
|   3    |       Edit the record         |(__productcode="03", productname="rice", quantity="10" , price="50" )( productcode="05", productname="oil", quantity="10", price="120"__)|
|  4     |           Exit | Exit to main mennu|
|  5     |         Invoice | Customer wants to invoice of an item |
|  6     |      My cart|Customer Add  (__productcode="05", quantity="06"__ ) (__productcode="03", quantity="10"__ )and (__productcode="01", quantity="06"__)to his cart |
| 7      |  Display   | Display the Added product to Customer  |
|8| Delete Items|  Customer wants to delete the items  __productcode="01"__|
|9| Bill | Finall Bill was created|

## Expected Output
|  ID   |  Expected Output |
|  --   |  --------------  |
|  1    | Administrator loged In Successfullly|
|  2    | Records created  |
| 3|  Edited the items|
|4| Exited to main menu|
|5|(__productcode ="01", productname="sugar", quantity=10 , price=40__ ) (__productcode="03" , productname="rice" , quantity="10", price="50"__) (__productcode="05",productname="oil" ,quantity="10", price="120"__)|
| 6|productcode="01" , productcode="03" , productcode="05"|
|7| __"rice" , "oil", "sugar"__|
|8|__productcode="01"__ deleted from cart|
|9| __Amount =1220   ; thank you for shopping come again.__

# Output Image
![image](https://user-images.githubusercontent.com/91029826/143377520-c4508517-1462-4196-a5ac-858ca948fa78.png)



