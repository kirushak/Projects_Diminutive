#include<iostream>

using namespace std;

int returnBillAmount(){
    char s;
    char ItemsAnswer;
    int billAmount = 0;
    int vegItem;
    int NonVegItem;
    char moreItems;

    cout << "----------------------Welcome to kirushak's online food billing project------------------------" << endl;
    cout << "-----------------------------Please follow the steps accordingly----------------------------------" << endl;
    cout << "Step 1: Press s to start the order process" << endl;
    cout << "You can order both veg and nonveg items" << endl;
    cout << "Step 2: Press a to choose veg order" << endl;
    cout << "Step 3: Press b to choose nonveg order" << endl;
    cout << "Step 4: You will get the final bill amount after your order" << endl;

    start:

    cout << endl;
    cout << "Please press s to start the order process...." << endl;

    // We have to take input to start the order
    cin >> s;

    // checks if the user is given right input
    if (s == 's'){
        items:
        // selects if the user wants to eat veg or nonveg
        cout << "--------------Please select your choice----------------" << endl;
        cout << "(a) Veg items                                       (b) NonVeg items" << endl;
        cin >> ItemsAnswer;

        // Checks what the user decided to eat
        if (ItemsAnswer == 'a'){

            vegItemList:
            cout << "-------------You have choosen Veg items-----------" << endl;
            cout << endl;

            // Let the user choose what they want to eat
            cout << "...Please select 1, 2, 3, 4, 5 as per your choice..." << endl;
            cout << "(1) Veg biriyani - 180/-" << endl;
            cout << "(2) Paneer tikka masala - 200/-" << endl;
            cout << "(3) Dosa - 250/-" << endl;
            cout << "(4) Dum pulao - 170/-" << endl;
            cout << "(5) Veg momo - 100/-" << endl;
            cin >> vegItem;

            if (vegItem == 1){
                billAmount += 180;
            }
            else if (vegItem == 2){
                billAmount += 200;
            }
            else if (vegItem == 3){
                billAmount += 250;
            }
            else if (vegItem == 4){
                billAmount += 170;
            }
            else if (vegItem == 5){
                billAmount += 100;
            }
            else{
                cout << vegItem << " Doesn't exist in VegItem List" << endl;
                cout << "Please try again!" << endl;
                goto vegItemList;
            }

            // To confirm it as the user's final order or they want to add more items in the order
            cout << "Do you want to add more items ?" << endl;
            cout << "Please select y for Yes or n for No" << endl;
            cin >> moreItems;
            if (moreItems == 'y'){
                goto vegItemList;
            }
            else if (moreItems == 'n'){
                return billAmount;
            }
        }
        else if (ItemsAnswer == 'b'){
            NonVegItemList:
            cout << "-------------You have choosen NonVeg items-----------" << endl;
            cout << endl;

            // Let the user choose what they want to eat
            cout << "...Please select 1, 2, 3, 4, 5 as per your choice..." << endl;
            cout << "(1) Mutton biriyani - 380/-" << endl;
            cout << "(2) Murgh butter masala - 300/-" << endl;
            cout << "(3) Chilli chicken - 250/-" << endl;
            cout << "(4) Chicken fried rice - 350/-" << endl;
            cout << "(5) Chicken manchurian - 200/-" << endl;
            cin >> NonVegItem;

            if (NonVegItem == 1){
                billAmount += 380;
            }
            else if (NonVegItem == 2){
                billAmount += 300;
            }
            else if (NonVegItem == 3){
                billAmount += 250;
            }
            else if (NonVegItem == 4){
                billAmount += 350;
            }
            else if (NonVegItem == 5){
                billAmount += 200;
            }
            else{
                cout << NonVegItem << " Doesn't exist in NonVegItem List" << endl;
                cout << "Please try again!" << endl;
                goto NonVegItemList;
            }

            // To confirm it as the user's final order or they want to add more items in the order
            cout << "Do you want to add more items ?" << endl;
            cout << "Please select y for Yes or n for No" << endl;
            cin >> moreItems;
            if (moreItems == 'y'){
                goto NonVegItemList;
            }
            else if (moreItems == 'n'){
                return billAmount;
            }
        }
        else{
            cout << "You have given a wrong input......" << endl;
            cout << "Please try again!" << endl;
            goto items;
        }
    }
    else{
        cout << "You have given a wrong input......" << endl;
        goto start;
    }
}

int main(){
    int returnBillAmount(void);
    int TotalBillAmount = returnBillAmount();

    // Finally prints the total bill value
    cout << "\nYour final bill value is " << TotalBillAmount << " /-" << endl;
    cout << "Thank you!" << endl;
    return 0;
}
