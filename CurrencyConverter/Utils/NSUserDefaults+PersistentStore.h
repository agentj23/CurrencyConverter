//
//  NSUserDefaults+PersistentStore.h
//  CurrencyConverter
//
//  Created by Kamil Czopek on 21.02.2015.
//  Copyright (c) 2015 Kamil Czopek. All rights reserved.
//

#import <Foundation/Foundation.h>

/**
 Category that provides persistence for the business objects.
 */
@interface NSUserDefaults (PersistentStore)

/**
 Sores the exchange rate table in NSUserDefaults.
 @param exchangeRates - exchange rates table (CCExchangeRateItem objects) that is to be pertsisted.
 */
+ (void)storeExchangeRates:(NSArray*)exchangeRates;

/**
 Returns the persisted exchange rates. 
 */
+ (NSArray*)exchangeRates;

@end
