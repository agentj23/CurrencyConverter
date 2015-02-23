//
//  NSUserDefaults+PersistentStore.m
//  CurrencyConverter
//
//  Created by Kamil Czopek on 21.02.2015.
//  Copyright (c) 2015 Kamil Czopek. All rights reserved.
//


#import "NSUserDefaults+PersistentStore.h"
#import "CCExchangeRateItem.h"

NSString * const PersistentStoreExchangeRatesKey = @"PersistentStoreExchangeRatesKey";

@implementation NSUserDefaults (PersistentStore)

+ (void)storeExchangeRates:(NSArray*)exchangeRates;
{
    // Need to persist objects prior to having them stored in NSUserDefaults.
    NSMutableArray *archivedObjectsArray = [NSMutableArray arrayWithCapacity:[exchangeRates count]];
    for (CCExchangeRateItem *item in exchangeRates) {
        NSData *encodedItem = [NSKeyedArchiver archivedDataWithRootObject:item];
        [archivedObjectsArray addObject:encodedItem];
    }
    
    [[self standardUserDefaults] setObject:archivedObjectsArray forKey:PersistentStoreExchangeRatesKey];
}

+ (NSArray*)exchangeRates
{
    NSArray *achrivedItems = [[self standardUserDefaults] objectForKey:PersistentStoreExchangeRatesKey];
    NSMutableArray *unarchivedItemsArray = [NSMutableArray arrayWithCapacity:[achrivedItems count]];
    for (NSData *archivedItem in achrivedItems) {
        CCExchangeRateItem *rateItem = (CCExchangeRateItem*)[NSKeyedUnarchiver unarchiveObjectWithData:archivedItem];
        [unarchivedItemsArray addObject:rateItem];
    }
    return unarchivedItemsArray;
}

@end
