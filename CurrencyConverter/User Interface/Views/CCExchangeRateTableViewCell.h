//
//  CCExchangeRateTableViewCell.h
//  CurrencyConverter
//
//  Created by Kamil Czopek on 21.02.2015.
//  Copyright (c) 2015 Kamil Czopek. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface CCExchangeRateTableViewCell : UITableViewCell
@property (strong, nonatomic) IBOutlet UILabel *currencyNameLabel;
@property (strong, nonatomic) IBOutlet UILabel *currencyCodeLabel;
@property (strong, nonatomic) IBOutlet UILabel *amountLabel;

- (void)updateWithViewModel:(NSDictionary*)viewModelDict;

@end
