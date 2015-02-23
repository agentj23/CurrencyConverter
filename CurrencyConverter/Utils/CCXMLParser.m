//
//  CCXMLParser.m
//  CurrencyConverter
//
//  Created by Kamil Czopek on 21.02.2015.
//  Copyright (c) 2015 Kamil Czopek. All rights reserved.
//

#import "CCXMLParser.h"
#import "GDataXMLNode.h"
#import "CCExchangeRateItem.h"

NSString * const XMLRootPath = @"//tabela_kursow/pozycja";
NSString * const XMLCurrencyNameNode = @"nazwa_waluty";
NSString * const XMLCurrencyCodeNode = @"kod_waluty";
NSString * const XMLModifierNode = @"przelicznik";
NSString * const XMLExchangeRateNode = @"kurs_sredni";

@interface CCXMLParser()
@property (nonatomic, strong) NSData *data;
@end

@implementation CCXMLParser

- (instancetype)initWithXMLData:(NSData *)data
{
    if (self = [super init]) {
        _data = data;
    }
    return self;
}

- (NSMutableArray *)exchangeRateItems
{
    if (!_exchangeRateItems) {
        _exchangeRateItems = [[NSMutableArray alloc] init];
    }
    return _exchangeRateItems;
}


- (BOOL)parseItems
{
    NSError *error;
    GDataXMLDocument *doc = [[GDataXMLDocument alloc] initWithData:self.data encoding:NSWindowsCP1250StringEncoding error:&error];
    if (doc == nil) {
        // TODO: Handle error - implement the delegate methods.
    }
    
    NSArray *elements = [doc nodesForXPath:XMLRootPath error:&error];
    for (GDataXMLElement *item in elements) {
        NSString *name = [[item nodesForXPath:XMLCurrencyNameNode error:&error][0] stringValue];
        NSString *code = [[item nodesForXPath:XMLCurrencyCodeNode error:&error][0] stringValue];

        NSString *modifierAsString = [[item nodesForXPath:XMLModifierNode error:&error][0] stringValue];
        NSNumberFormatter *formatter = [[NSNumberFormatter alloc] init];
        formatter.locale = [[NSLocale alloc] initWithLocaleIdentifier:@"pl_PL"];
        NSNumber *modifier = [formatter numberFromString:modifierAsString];
     
        NSString *rateAsString = [[item nodesForXPath:XMLExchangeRateNode error:&error][0] stringValue];
        NSNumber *rate = [formatter numberFromString:rateAsString];
        
        CCExchangeRateItem *item = [[CCExchangeRateItem alloc] initWithCurrencyName:name code:code modifier:modifier exchangeRate:rate];
        [self.exchangeRateItems addObject:item];
    }
    if (!error) {
        return YES;
    }
    return NO;
}

@end
