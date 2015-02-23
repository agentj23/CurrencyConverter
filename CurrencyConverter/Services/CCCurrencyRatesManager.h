//
//  NetworkConnectionManager.h
//  CurrencyConverter
//
//  Created by Kamil Czopek on 20.02.2015.
//  Copyright (c) 2015 Kamil Czopek. All rights reserved.
//

#import <Foundation/Foundation.h>

/**
 Provides fetching for both current rate tales list and for the most recent rate table.
 */
@interface CCCurrencyRatesManager : NSObject

/**
 Success block type definition for the tables list fetch.
 */
typedef void (^CurrencyRatesManagerTablesListSuccessBlock)(NSArray *tablesList);

/**
 Success block type definition for the current rates table fetch.
 */
typedef void (^CurrencyRatesManagerCurrentRatesDictSuccessBlock)(NSArray *currentRatesArray);

/**
 Error block type definition for fetch methods.
 */
typedef void (^CurrencyRatesManagerCurrentRatesErrorBlock)(NSError *error);


/**
 Fetching the rate tables list.
 @param successBlock
 @param errorBlock
 */
- (void)fetchAverageExchangeRatesTablesListWithSuccessBlock:(CurrencyRatesManagerTablesListSuccessBlock)successBlock andFailureBlock:(CurrencyRatesManagerCurrentRatesErrorBlock)failureBlock;

/**
 Fetching the current rate table.
 @param successBlock
 @param errorBlock
 */
- (void)fetchCurrentRatesTableWithSuccessBlock:(CurrencyRatesManagerCurrentRatesDictSuccessBlock)successBlock andFailureBlock:(CurrencyRatesManagerCurrentRatesErrorBlock)failureBlock;

@end
