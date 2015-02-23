//
//  CCXMLParser.h
//  CurrencyConverter
//
//  Created by Kamil Czopek on 21.02.2015.
//  Copyright (c) 2015 Kamil Czopek. All rights reserved.
//

#import <Foundation/Foundation.h>

/**
 Utility class that provides the parsing functionality.
 */
@interface CCXMLParser : NSObject

@property (nonatomic, strong) NSMutableArray *exchangeRateItems;

/**
 Initializer.
 @param data - entry xml data.
 */
- (instancetype)initWithXMLData:(NSData *)data;

/**
 Runs parsing on the current xml data.
 */
- (BOOL)parseItems;
@end
