#include <iostream>
#include <cstdlib>
#include <iomanip>

using std::cout;
using std::cin;
using std::endl;

int main()
{
    int Cheating = 1;
    int TempRand;
    int CustomerRand;
    int GoGame;
    int OpenChoice;
        
    int PurchaseDeductionOne;
    int MoneyBalance = 1000000;
    int MoneyBalanceDollars = 10000;
    int MoneyBalanceCents = 0;
    int ProfitsWhole;
    int BasePrice = 100;
    int BaseDollars = 1;
    int BaseCents = 0;
    int CurrentPriceSetDollars = 1;
    int CurrentPriceSetCents = 0;
    int CurrentPrice = 100;
    int PriceChange = 0;
    int SpacerZero = 0;
    int CurrentPriceOneHundred;
    
    int ProfitsDollars = 0;
    int ProfitsCents = 0;
    
    int CustomerChangePriceChange;
    int VariablePlaceHolderA = 0;
    
    int PurchaseChoice;
    int PurchaseChoice2;
    int PriceChangeChoice;
    
    int LemonPurchase;
    int LemonStock = 0;
    int CupPurchase;
    int CupStock = 0;
    int SugarPurchase;
    int SugarStock = 0;
    
    int CustomerTempBonus;
    int CustomerPriceBonus;
    int CustomerTempRemainderHolding;
    int CustomerCounterChanger;
    int CustomersServed = 0;
    int CustomersPossible = 0;
    
    
    
    //this sections covers 1. Wether to open the store or not. 2. Temperature. >>including making sure the temperature is above 60 degrees.
    while (OpenChoice == 1,2)
    {
    TempRand = 1 + rand() % 110;
    
    while (TempRand < 60)
    {
    TempRand = 1 + rand() % 110;
}

    cout << "The current temperature is " << TempRand << endl;
    
    cout << "Would you like to open the Lemonade Stand Today? 1. Yes 2. No" << endl;
    cin >> OpenChoice;
    if (OpenChoice == 1)
    {
                   //This is the entire section about purchasing stock items.
                   if (MoneyBalanceCents < 10)
                   {
                   cout << "You currently have a balance of $" << MoneyBalanceDollars << "." << SpacerZero << MoneyBalanceCents << ".  Would you like to purchase any stock?" << endl;
                   }
                   else
                   {
                   cout << "You currently have a balance of $" << MoneyBalanceDollars << "." << MoneyBalanceCents << ".  Would you like to purchase any stock?" << endl;
                   }
                   cin >> PurchaseChoice;
                   while (PurchaseChoice == 1)
                   {
                                      cout << "What would you like to Purchase? 1. Lemons 2. Cups 3. Sugar" << endl;
                                      cin >> PurchaseChoice2;
                                      if (PurchaseChoice2 == 1)
                                      {
                                      cout << "You currently have " << LemonStock/2 << " Lemons in stock.  One Lemon can make two glasses of Lemonade.  How many Lemons would you like to purchase?" << endl;
                                      cin >> LemonPurchase;
                                      PurchaseDeductionOne = LemonPurchase*200;
                                      if (PurchaseDeductionOne > MoneyBalance)
                                         {
                                         cout << "I'm sorry, but you don't have enough funds." << endl;
                                         }
                                      else
                                      {
                                      MoneyBalance = MoneyBalance - PurchaseDeductionOne;
                                      LemonStock = LemonStock + LemonPurchase*2;
                                      }
                                      }
                                      if (PurchaseChoice2 == 2)
                                      {
                                      cout << "You currently have " << CupStock << " Cups in stock.  How many packages (10 cups) would you like to purchase?" << endl;
                                      cin >> CupPurchase;
                                      
                                      PurchaseDeductionOne = CupPurchase*300;
                                      if (PurchaseDeductionOne > MoneyBalance)
                                         {
                                         cout << "I'm sorry, but you don't have enough funds." << endl;
                                         }
                                      else
                                      {
                                      MoneyBalance = MoneyBalance - PurchaseDeductionOne;                                      
                                      CupStock = CupStock + CupPurchase*10;
                                      }
                                      }
                                      if (PurchaseChoice2 == 3)
                                      {
                                      cout << "You currently have " << SugarStock/20 << " Lbs. of Sugar in stock.  One Lb. can make twenty glasses of Lemonade.  How many Lbs. would you like to purchase?" << endl;
                                      cin >> SugarPurchase;
                                      
                                      PurchaseDeductionOne = SugarPurchase*400;
                                      if (PurchaseDeductionOne > MoneyBalance)
                                         {
                                         cout << "I'm sorry, but you don't have enough funds." << endl;
                                         }
                                      else
                                      {
                                      MoneyBalance = MoneyBalance - PurchaseDeductionOne;                                      
                                      SugarStock = SugarStock + SugarPurchase*20;
                                      }
                                      }
                   //This section re synchronizes the money balance
                   MoneyBalanceCents = MoneyBalance % 100;
                   MoneyBalanceDollars = MoneyBalance - MoneyBalanceCents;
                   MoneyBalanceDollars = MoneyBalanceDollars/100;
                   //This section re synchronizes the money balance
                   cout << "Would you like to Purchase Anything else?" << endl;
                   cin >> PurchaseChoice;
                   }
                   //this is the end of the section about buying stock items.                  
                   
                    //this will be the section calculating the number of customers that will buy lemonade for the day based on temp.
                    CustomerRand = 0;
                    while (CustomerRand < 35)
                    {
                    CustomerRand = 1 + rand() % 15;
                    CustomerRand = CustomerRand * 4;
                    }
                    CustomerTempRemainderHolding = 0;
                    CustomerTempBonus = 0;
                    CustomerTempRemainderHolding = TempRand % 10;
                    CustomerTempBonus = TempRand - CustomerTempRemainderHolding;
                    CustomerTempBonus = CustomerTempBonus/10;
                    //this will be the bonus/anti-bonus for price changes.
                                       if (CurrentPriceSetCents < 10)
                                       {
                                       cout << "Your current price for a cup of Lemonade is $" << CurrentPriceSetDollars << "." << SpacerZero << CurrentPriceSetCents << " Would you like to change the price?" << endl;
                                       }
                                       else
                                       {
                                       cout << "Your current price for a cup of Lemonade is $" << CurrentPriceSetDollars << "." << CurrentPriceSetCents << " Would you like to change the price?" << endl;
                                       }
                    cin >> PriceChangeChoice;
                    if (PriceChangeChoice == 1)
                    {
                                          
                                          cout << "Please state the price you would like for each cup of lemonade.  State your choice in cents. (Example $1.00 = 100)" << endl;
                                          cin >> PriceChange;
                                          CurrentPrice = PriceChange;
                                          CurrentPriceSetCents = CurrentPrice % 100;
                                          CurrentPriceOneHundred = CurrentPrice - CurrentPriceSetCents;
                                          CurrentPriceSetDollars = CurrentPriceOneHundred / 100;
                                          if (CurrentPriceSetCents < 10)
                                          {
                                          cout << "You have successfully changed the price to $" << CurrentPriceSetDollars << "." << SpacerZero << CurrentPriceSetCents << endl;
                                          }
                                          else
                                          {
                                          cout << "You have successfully changed the price to $" << CurrentPriceSetDollars << "." << CurrentPriceSetCents << endl;
                                          }
                    }
                    if (BasePrice > PriceChange)
                    {
                    VariablePlaceHolderA = BasePrice - PriceChange;
                    CustomerChangePriceChange = VariablePlaceHolderA / 10;
                    }
                    else
                    {
                        VariablePlaceHolderA = PriceChange - BasePrice;
                        CustomerChangePriceChange = VariablePlaceHolderA / 10;
                        }
                    if (BasePrice > PriceChange)
                    {
                        CustomerRand = CustomerRand + CustomerTempBonus + CustomerChangePriceChange;
                    }
                    else
                    {
                        CustomerRand = CustomerRand + CustomerTempBonus - CustomerChangePriceChange;
                    }
                    CustomerCounterChanger = CustomerRand;
                    CustomersPossible = CustomerRand;
                    //updated customers served number//
                    CustomersServed = 0;
                    // ** //
                    
                    while (CustomerCounterChanger > 0)
                    {
                          if (LemonStock > 0)
                          {
                          if (CupStock > 0)
                          {
                          if (SugarStock > 0)
                          {
                          --LemonStock;
                          --CupStock;
                          --SugarStock;
                          --CustomerCounterChanger;
                          //updated customers served number//
                           ++CustomersServed;
                          // ** //
                          }
                          else
                          {
                              cout << "I'm sorry, but you were unable to serve all of your customers because you ran out of Sugar" << endl;
                              CustomerCounterChanger = 0;
                          }
                          }
                          else
                          {
                              cout << "I'm sorry, but you were unable to serve all of your customers because you ran out of Cups" << endl;
                              CustomerCounterChanger = 0;
                          }
                          }
                          else
                          {
                              cout << "I'm sorry, but you were unable to serve all of your customers because you ran out of Lemons" << endl;
                              CustomerCounterChanger = 0;
                          }
                          

                    }
                    ProfitsWhole = CustomersServed * CurrentPrice;
                    cout << CustomersServed << " Customers bought your Lemonade today.  Congratulations!" << endl;
                    
                    ProfitsCents = ProfitsWhole % 100;
                    ProfitsDollars = ProfitsWhole - ProfitsCents;
                    ProfitsDollars = ProfitsDollars/100;
                    
                    if (ProfitsCents < 10)
                    {
                    cout << "You made $" << ProfitsDollars << "." << SpacerZero << ProfitsCents << " Today." << endl;
                    }
                    else
                    {
                    cout << "You made $" << ProfitsDollars << "." << ProfitsCents << " Today." << endl;
                    }
                    MoneyBalance = MoneyBalance + ProfitsWhole;
                    //This section re synchronizes the money balance
                    cout << MoneyBalance << endl;
                   MoneyBalanceCents = MoneyBalance % 100;
                   MoneyBalanceDollars = MoneyBalance - MoneyBalanceCents;
                   MoneyBalanceDollars = MoneyBalanceDollars/100;
                   if (MoneyBalanceCents < 10)
                   {
                   cout << "Your new balance is $" << MoneyBalanceDollars << "." << SpacerZero << MoneyBalanceCents << endl;
                   }
                   else
                   {
                   cout << "Your new balance is $" << MoneyBalanceDollars << "." << MoneyBalanceCents << endl;
                   }
                   //This section re synchronizes the money balance
                    //this is the end of the section calculating the number of customers that will buy lemonade for the day.                  
}
    
    if (OpenChoice == 90838)
{
    Cheating = 1;
               while (Cheating == 1)
               {
               int CheatersChoice = 0;
               cout << "Welcome to the extra special, secret, cheat section" << endl;
               cout << "What would you like to edit?" << endl;
               cout << "1. Money Balance 2. Lemon Balance 3. Cup Balance 4. Sugar Balance 5. Quit cheating" << endl;
               cin >> CheatersChoice;
               // CHEATER CHOICE 1** //
               if (CheatersChoice == 1)
               {
                                  cout << "What would you like to set your Money balance to (remember give it to me in cents ex. $1.00 = 100)" << endl;
                                  cin >> MoneyBalance;
                                  MoneyBalanceCents = MoneyBalance % 100;
                   MoneyBalanceDollars = MoneyBalance - MoneyBalanceCents;
                   MoneyBalanceDollars = MoneyBalanceDollars/100;
                   if (MoneyBalanceCents < 10)
                   {
                   cout << "Your new balance is $" << MoneyBalanceDollars << "." << SpacerZero << MoneyBalanceCents << endl;
                   }
                   else
                   {
                   cout << "Your new balance is $" << MoneyBalanceDollars << "." << MoneyBalanceCents << endl;
                   }
               }
               // CHEATERS CHOICE 1**//
               
               // CHEATERS CHOICE 5**//
               if (CheatersChoice == 5)
               {
                                  cout << "Returning to Main Game" << endl;
                OpenChoice = 1;
                Cheating = 0;
               }
               // CHEATERS CHOICE 5**//
     }
}

if (OpenChoice == 221629)
    {
    return 0;
}
}
}
