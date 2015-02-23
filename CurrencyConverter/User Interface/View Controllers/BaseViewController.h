//
//  BaseViewController.h
//  ConvertUnits
//
//  Created by Kamil Czopek on 03.02.2015.
//  Copyright (c) 2015 Kamil Czopek. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <AtkMaw/MAWMathWidget.h>
#import "CCShowConvertedValuesBarButton.h"

/**
 Initial (Basic) View Controller that's supposed to be used in the app.
 */
@interface BaseViewController : UIViewController <MAWMathViewControllerDelegate>

/**
 Bar button item, that triggers the "ShowConvertedValuesSegue". 
 It's text value is being updated based on the current calculation result displayed inside the math widget.
 */
@property (strong, nonatomic) IBOutlet CCShowConvertedValuesBarButton *showConvertedValuesBarButton;

/**
 Clears current result inside the math widget.
 */
- (IBAction)clearAction:(id)sender;


@end

