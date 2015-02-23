//
//  ExchangeRateTableViewModel.h
//  CurrencyConverter
//
//  Created by Kamil Czopek on 21.02.2015.
//  Copyright (c) 2015 Kamil Czopek. All rights reserved.
//

#import <Foundation/Foundation.h>

/**
 Provides a view model for the ExchangeRatesTableViewController class.
 */
@interface CCExchangeRateTableViewModel : NSObject

@property (nonatomic, strong) NSString *entryParamString;

/**
 Returns a number of sections for the exchange rate table.
 */
- (NSInteger)numberOfSectionsInTableView;

/**
 Returns a number of rows for the exchange rate table.
 */
- (NSInteger)numberOfRowsInSection;

/**
 Returns a dictionary that's to be a model for the exchange rate table cell.
 */
- (NSDictionary*)viewModelForCellAtIndexPath:(NSIndexPath*)indexPath;

@end
