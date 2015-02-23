//
//  CCShowConvertedValuesBarButton.m
//  CurrencyConverter
//
//  Created by Kamil Czopek on 22.02.2015.
//  Copyright (c) 2015 Kamil Czopek. All rights reserved.
//

#import "CCShowConvertedValuesBarButton.h"

@implementation CCShowConvertedValuesBarButton

- (void)updateTitleWithEquation:(NSString*)value
{
     if (value && value.length > 0) {
         NSRange range = [value rangeOfString:@"="];
         if (range.location != NSNotFound) {
             value = [value substringFromIndex:range.location+1];
         }
         self.currentValueString = value;
         self.title = [NSString stringWithFormat:@"%@ PLN -> ...", self.currentValueString];
         self.enabled = YES;
     }
     else {
         self.title = @"... PLN";
         self.enabled = NO;
     }
}

@end
