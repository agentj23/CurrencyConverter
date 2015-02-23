//
//  ExchangeRateItem.m
//  CurrencyConverter
//
//  Created by Kamil Czopek on 21.02.2015.
//  Copyright (c) 2015 Kamil Czopek. All rights reserved.
//

#import "CCExchangeRateItem.h"

@implementation CCExchangeRateItem

- (instancetype)initWithCurrencyName:(NSString*)name
                                code:(NSString*)code
                            modifier:(NSNumber*)modifier
                        exchangeRate:(NSNumber*)rate
{
    if (self = [super init]) {
        _currencyName = name;
        _currencyCode = code;
        _modifier = modifier;
        _exchangeRate = rate;
    }
    return self;
}

- (void)encodeWithCoder:(NSCoder *)encoder
{
    //Encode the properties of the object
    [encoder encodeObject:self.currencyName forKey:@"currencyName"];
    [encoder encodeObject:self.currencyCode forKey:@"currencyCode"];
    [encoder encodeObject:self.modifier     forKey:@"modifier"];
    [encoder encodeObject:self.exchangeRate forKey:@"exchangeRate"];
}

- (id)initWithCoder:(NSCoder *)decoder
{
    if (self = [super init]) {
        //decode the properties
        self.currencyName = [decoder decodeObjectForKey:@"currencyName"];
        self.currencyCode = [decoder decodeObjectForKey:@"currencyCode"];
        self.modifier = [decoder decodeObjectForKey:@"modifier"];
        self.exchangeRate = [decoder decodeObjectForKey:@"exchangeRate"];
    }
    return self;
}
@end
