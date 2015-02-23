//
//  CCExchangeRateTableViewCell.m
//  CurrencyConverter
//
//  Created by Kamil Czopek on 21.02.2015.
//  Copyright (c) 2015 Kamil Czopek. All rights reserved.
//

#import "CCExchangeRateTableViewCell.h"

@implementation CCExchangeRateTableViewCell

- (void)updateWithViewModel:(NSDictionary*)viewModelDict
{
    self.currencyNameLabel.text = viewModelDict[@"currencyName"];
    self.currencyCodeLabel.text = viewModelDict[@"currencyCode"];
    self.amountLabel.text = viewModelDict[@"amount"];
}

@end
