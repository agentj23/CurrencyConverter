//
//  CCShowConvertedValuesBarButton.h
//  CurrencyConverter
//
//  Created by Kamil Czopek on 22.02.2015.
//  Copyright (c) 2015 Kamil Czopek. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface CCShowConvertedValuesBarButton : UIBarButtonItem
@property (nonatomic, strong) NSString *currentValueString;
- (void)updateTitleWithEquation:(NSString*)value;
@end
