//
//  ExchangeRateTableViewModel.m
//  CurrencyConverter
//
//  Created by Kamil Czopek on 21.02.2015.
//  Copyright (c) 2015 Kamil Czopek. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "CCExchangeRateTableViewModel.h"
#import "NSUserDefaults+PersistentStore.h"
#import "CCExchangeRateItem.h"

@interface CCExchangeRateTableViewModel()
@property (nonatomic, strong) NSArray *exchangeRates;
@property (nonatomic, strong) NSNumber *entryParam;
@end

@implementation CCExchangeRateTableViewModel

- (instancetype)init
{
    if (self = [super init]) {
        
    }
    return self;
}

- (void)setEntryParamString:(NSString *)entryParamString
{
    NSNumberFormatter *formatter = [[NSNumberFormatter alloc] init];
    formatter.locale = [[NSLocale alloc] initWithLocaleIdentifier:@"pl_PL"];
    self.entryParam = [formatter numberFromString:entryParamString];
}

- (NSArray*)exchangeRates
{
    if (!_exchangeRates) {
        _exchangeRates = [NSUserDefaults exchangeRates];
    }
    return _exchangeRates;
}

- (NSInteger)numberOfSectionsInTableView
{
    return 1;
}

- (NSInteger)numberOfRowsInSection
{
    return [self.exchangeRates count];
}

- (NSDictionary*)viewModelForCellAtIndexPath:(NSIndexPath*)indexPath
{
    CCExchangeRateItem *item = [self.exchangeRates objectAtIndex:indexPath.row];
    NSNumber *amount = [NSNumber numberWithFloat:([self.entryParam floatValue] * pow([item.exchangeRate floatValue], -1) * [item.modifier floatValue])];
    NSNumberFormatter *currencyFormatter  = [[NSNumberFormatter alloc] init];
    [currencyFormatter setNumberStyle:NSNumberFormatterCurrencyStyle];
    currencyFormatter.locale = [[NSLocale alloc] initWithLocaleIdentifier:@"pl_PL"];
    NSString *amountAsString = [currencyFormatter stringFromNumber:amount];
    amountAsString = [amountAsString stringByReplacingOccurrencesOfString:@"zł" withString:@""];
    
    NSDictionary *cellViewModel = @{
                                    @"currencyName":item.currencyName,
                                    @"currencyCode":item.currencyCode,
                                    @"amount": amountAsString
                                    };    
    return cellViewModel;
}

@end
