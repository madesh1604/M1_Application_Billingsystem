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
