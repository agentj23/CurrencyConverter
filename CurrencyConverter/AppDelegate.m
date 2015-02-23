//
//  AppDelegate.m
//  CurrencyConverter
//
//  Created by Kamil Czopek on 20.02.2015.
//  Copyright (c) 2015 Kamil Czopek. All rights reserved.
//

#import "AppDelegate.h"
#import "CCCurrencyRatesManager.h"
#import "NSUserDefaults+PersistentStore.h"

/**
 App Delegate. Besides baing a delegate it currently starts the initial 
 rate table fetch. Displays the overlay while performing the networking 
 activity.
 */
@interface AppDelegate ()
/**
 Overlay view that's being displayed when the initial rate tables fetch runs.
 */
@property (nonatomic, strong) UIView *overlayView;

/**
 Dispalys the overlay view on the screen.
 */
- (void)showOverlay;

/**
 Hides the overlay view being displayed on the screen.
 */
- (void)hideOverlay;
@end

@implementation AppDelegate

- (BOOL)application:(UIApplication *)application didFinishLaunchingWithOptions:(NSDictionary *)launchOptions
{
    [self showOverlay];
    CCCurrencyRatesManager *currencyMgr = [[CCCurrencyRatesManager alloc] init];
    [currencyMgr fetchCurrentRatesTableWithSuccessBlock:^(NSArray *ratesArray){
        // Store exchange rates.
        dispatch_async(dispatch_get_main_queue(), ^{
            [NSUserDefaults storeExchangeRates:ratesArray];
            [self hideOverlay];
        });
    } andFailureBlock:^(NSError *error) {
        // Display aler to the user.
        dispatch_async(dispatch_get_main_queue(), ^{
            [self hideOverlay];
        });
    }];
    return YES;
}

- (void)showOverlay
{
    self.overlayView = [[UIView alloc] initWithFrame:[UIScreen mainScreen].bounds];
    self.overlayView.backgroundColor = [UIColor colorWithRed:0 green:0 blue:0 alpha:0.5];
    UIActivityIndicatorView *activityIndicator = [[UIActivityIndicatorView alloc] initWithActivityIndicatorStyle:UIActivityIndicatorViewStyleWhiteLarge];
    activityIndicator.center = self.overlayView.center;
    [self.overlayView addSubview:activityIndicator];
    [activityIndicator startAnimating];
    [self.window.rootViewController.view addSubview:self.overlayView];
}

- (void)hideOverlay
{
    [self.overlayView removeFromSuperview];
}

@end
