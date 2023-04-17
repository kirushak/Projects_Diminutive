def main():
    pinCode = ["0209", "2004", "1404", "0602"] 
    accountHoldersName = ["kirushak", "sherphia", "sanjai", "bhasya"]
    accountNumber = ['134', '137', "136", "133"]
    balance = [567000, 71873110, 2341871, 275638]

    flag = False
    for i in range (0,999999999):
       
       
        print("""
    \t\t=== Welcome To Simple ATM System ===
""")
              
        inputName = input("Enter Your Name: ")
        inputName = inputName.lower()
        inputPin = 0000 
        index = 0 
        for name in accountHoldersName:
            count = 0
            if name == inputName:
                index = count 
                inputPin = input("\nEnter Pin Number: ")
            count += 1

        if inputPin == pinCode[index]:
            flag = True
        else:
            print("Invalid data.")
            flag = False
            continue
        if flag == True:
            print("\nYour account number is: ",accountNumber[index])
            print("Your account balance is: Rs.", balance[index])
            drawOrDeposite = input("\nDo you want to draw or deposit cash (draw/deposite/no): ")
            if drawOrDeposite == "draw":
                amount = input("\nEnter the amount you want to draw: ")
                try: 
                    amount = int(amount)
                    if amount > balance[index]:
                        raise
                except:
                    print("invalid amount.")
                    continue
                remainingBalalnce = balance[index] - amount 
                balance.remove(balance[index]) 
                balance.insert(index,remainingBalalnce)
                availableBalance = print("\nYour available balance is: ",remainingBalalnce)
            elif drawOrDeposite == "deposite":
                amount = input("Enter the amount you want to deposite: ")
                try:
                    amount = int(amount)
                    if amount > balance[index]:
                        raise
                except:
                    print("invalid amount.")
                    continue
                remainingBalalnce = balance[index] + amount 
                balance.remove(balance[index])
                balance.insert(index,remainingBalalnce)
                availableBalance = print("Your available balance is: ",remainingBalalnce)
            print("\n\nThank you for using this Simple ATM System. \n  Brought To You By code-projects.org")

main()




