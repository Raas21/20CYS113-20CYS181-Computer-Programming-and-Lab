Python 3.11.2 (tags/v3.11.2:878ead1, Feb  7 2023, 16:38:35) [MSC v.1934 64 bit (AMD64)] on win32
Type "help", "copyright", "credits" or "license()" for more information.
>>> # Program which defines "different functions of an ATM machine"
... print("Welcome to ATM")
... 
... # minimum balance= least amount of cash that must be there in a bank account
... # deposit cash = amount to be deposited
... # OTP= one time password
... minimumbalance = 500
... balance = 500000
... print("Please enter your name")
... name = input()
... print("Please enter your account number")
... accountnumber = int(input())
... print("please slect an option")
... print("1)cash withdrawl")
... print("2)cash deposit")
... print("3)pin change")
... print("4)balance enquiry")
... option = int(input())
... if option == 1:
...     if balance >= minimumbalance:
...         print("Please enter the amount to be withdrawn")
...         amount = int(input())
...         if amount <= balance:
...             print("Please enter your pin")
...             pin = int(input())
...             if pin == 3793:
...                 print("please collect your cash")
...                 print("thank you")
...             else:
...                 print("incorrect pin")
...                 print("transaction cancelled")
...         else:
...             print("cash withdrawl not possible due to insufficient balance")
...     else:
...         print("withdrawl of cash is not possible")
...     
...     # These are the funtions of an ATM
else:
    if option == 2:
        print("please enter amount of cash being deposited")
        depositcash = int(input())
        print("please place your cash in the case provided")
        print("cash deposit has been completed")
    else:
        if option == 3:
            print("Please enter your pin")
            pin = int(input())
            if pin == 3793:
                print("enetr the OTP sent to your mobile number xxxxxx789")
                oTP = int(input())
                print("Please enter new pin")
                newpin = int(input())
                print("re-enter new pin")
                reenterednewpin = int(input())
                if newpin == reenterednewpin:
                    print("your pin has been changed successfully")
                else:
                    print("both pin do not match")
                    print("operation failed")
            else:
                print("incorrect pin")
                print("operation failed")
        else:
            if option == 4:
                print("Please enter your pin")
                pin = int(input())
                if pin == 3793:
                    print("your account balance is")
                    print(balance)
                else:
                    print("incorrect pin")
