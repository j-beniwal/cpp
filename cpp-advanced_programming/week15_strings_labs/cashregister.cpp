// Write a program that computes how much a customer has to pay after purchasing
// two items. 
// The price is calculated according to the following rules:
// • Buy one get one half off promotion: the lower price item is half price.
// • If the customer is a club card member, additional 10% off.
// • Tax is added.

// Inputs to the program include:
// • Two items’ prices
// • Have club card or not (User enters ‘Y’ or ‘y’ for “yes”; ‘N’ or ‘n’ for “no”)
// • Tax rate (User enters the percentage as a number; for example, they enter
// 8.25 if the tax rate is 8.25%)

// Program displays:
// • Base price - the price before the discounts and taxes
// • Price after discounts - the price after the buy one get one half off promotion
// and the member’s discount, if applicable
// • Total price – the amount of money the customer has to pay (after tax)
// printed with the precision of 2 decimal digits.

// Hint: In order to print a number in a specific precision, you can use the round
// function passing 2 arguments to it. Use help(round) to get a brief explanation of
// this function, and try playing with it, to better understand what it does.
// To format to two decimal places you can use the string format function with the format of 2.2f.
// For example, an execution could look like this:

// Enter price of the first item: 10
// Enter price of the second item: 20
// Does customer have a club card? (Y/N): y
// Enter tax rate, e.g. 5.5 for 5.5% tax: 8.25
// Base price = 30.00
// Price after discounts = 22.50
// Total price = 24.36

// File Name 
// cashregister.cpp
// Score
// There are five tests each worth 2 points

#include <iostream>
#include <string>
#include <iomanip>
using namespace std;

float priceAfterPromotion(int priceFirstItem, int priceSecondItem);
float clubCardDiscount(float promotionPrice);

int main(){
    int priceFirstItem, priceSecondItem, basePrice;
    float taxRate, promotionPrice, priceAfterClubDiscout, priceAfterTax;
    char clubCard;
    // take the user inputs
    cout<<"Enter price of the first item: ";
    cin>>priceFirstItem;
    cout<<"Enter price of teh second item: ";
    cin>>priceSecondItem;
    cout<<"Does Customer have a club card? (Y/N): ";
    cin>>clubCard;
    cout<<"Enter tax rate, e.g. 5.5 for 5.5% tax: ";
    cin>>taxRate;

    basePrice = priceFirstItem + priceSecondItem;
    cout<<"Base price = "<<basePrice<<endl;

    promotionPrice = priceAfterPromotion(priceFirstItem, priceSecondItem);
    if(clubCard == 'y' || clubCard == 'Y')
        priceAfterClubDiscout =  clubCardDiscount(promotionPrice);
    else
        priceAfterClubDiscout = promotionPrice;

    cout<<"Price after discoutns = "<<setprecision(4)<<priceAfterClubDiscout<<endl;
    priceAfterTax = priceAfterClubDiscout*(100.0+taxRate)/100;

    cout<<"Total Price = "<<setprecision(4)<<priceAfterTax<<endl;
    
    return 0;
}

float clubCardDiscount(float promotionPrice){
    return 0.90*promotionPrice;
}

float priceAfterPromotion(int priceFirstItem, int priceSecondItem){
    if (priceFirstItem>priceSecondItem)
        return (float)priceFirstItem + (float)priceSecondItem/2;
    else
        return (float)priceSecondItem + (float)priceFirstItem/2;
}