//
//  BaseViewController.m
//  ConvertUnits
//
//  Created by Kamil Czopek on 03.02.2015.
//  Copyright (c) 2015 Kamil Czopek. All rights reserved.
//

#import "BaseViewController.h"
#import "MyCertificate.h"
#import "CCExchangeRatesTableViewController.h"

@interface BaseViewController ()
@property (nonatomic, strong) MAWMathViewController *mathViewController;
@end

@implementation BaseViewController

- (void)viewDidLoad {
    [super viewDidLoad];
    [self displayContentController];
}

- (void)displayContentController
{
    // Create the Math Widget View Controller
    self.mathViewController = [[MAWMathViewController alloc] init];
    self.mathViewController.delegate = self;
    
    // Configure equation recognition engine
    // Recognition resources
    NSArray *resources   = @[@"math-ak.res", @"math-grm-maw.res"];
    
    // Certificate
    NSData  *certificate = [NSData dataWithBytes:myCertificate.bytes length:myCertificate.length];
    [self.mathViewController configureWithResources:resources
                                   certificate:certificate];
    
    [self addChildViewController:self.mathViewController];
    [self.view addSubview:self.mathViewController.view];
    [self.mathViewController didMoveToParentViewController:self];
}

- (void)prepareForSegue:(UIStoryboardSegue *)segue sender:(id)sender
{
    if ([segue.identifier isEqualToString:@"ShowConvertedValuesSegue"]) {
        CCExchangeRatesTableViewController *vc = (CCExchangeRatesTableViewController*)segue.destinationViewController;
        vc.valueToBeConvertedAsString = self.showConvertedValuesBarButton.currentValueString;
    }
}

#pragma mark - User Actions
- (IBAction)clearAction:(id)sender
{
    [self.mathViewController clear];
    [self.showConvertedValuesBarButton updateTitleWithEquation:self.mathViewController.resultAsText];
}

#pragma mark - Math Widget Delegate - Recognition
- (void)mathViewControllerDidEndRecognition:(MAWMathViewController *)mathViewController
{
    NSLog(@"Equation recognition end");
         dispatch_async(dispatch_get_main_queue(), ^{
             [self.showConvertedValuesBarButton updateTitleWithEquation:mathViewController.resultAsText];
         });
}
@end
