//
//  ExchangeRateItem.h
//  CurrencyConverter
//
//  Created by Kamil Czopek on 21.02.2015.
//  Copyright (c) 2015 Kamil Czopek. All rights reserved.
//

#import <Foundation/Foundation.h>

/**
 Model business object that represent a single exchange rate item.
 */
@interface CCExchangeRateItem : NSObject <NSCoding>

@property (nonatomic, strong) NSString *currencyName;
@property (nonatomic, strong) NSString *currencyCode;
@property (nonatomic, strong) NSNumber *modifier;
@property (nonatomic, strong) NSNumber *exchangeRate;

- (instancetype)initWithCurrencyName:(NSString*)name
                                code:(NSString*)code
                            modifier:(NSNumber*)modifier
                        exchangeRate:(NSNumber*)rate;

@end
