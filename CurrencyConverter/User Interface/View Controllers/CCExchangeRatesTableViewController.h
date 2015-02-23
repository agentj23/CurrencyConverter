//
//  ExchangeRatesTableViewController.h
//  CurrencyConverter
//
//  Created by Kamil Czopek on 21.02.2015.
//  Copyright (c) 2015 Kamil Czopek. All rights reserved.
//

#import <UIKit/UIKit.h>

/**
 Displays table with the calculated exchange values for a given entry value.
 */
@interface CCExchangeRatesTableViewController : UITableViewController

/**
 Entry value to be converted.
 */
@property (nonatomic, strong) NSString *valueToBeConvertedAsString;

@end
