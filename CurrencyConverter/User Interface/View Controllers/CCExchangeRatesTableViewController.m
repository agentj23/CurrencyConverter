//
//  ExchangeRatesTableViewController.m
//  CurrencyConverter
//
//  Created by Kamil Czopek on 21.02.2015.
//  Copyright (c) 2015 Kamil Czopek. All rights reserved.
//

#import "CCExchangeRatesTableViewController.h"
#import "CCExchangeRateTableViewModel.h"
#import "CCExchangeRateTableViewCell.h"

@interface CCExchangeRatesTableViewController ()
@property (nonatomic, strong) CCExchangeRateTableViewModel *tableViewModel;
@end

@implementation CCExchangeRatesTableViewController

- (void)viewDidLoad {
    [super viewDidLoad];
}


- (CCExchangeRateTableViewModel*)tableViewModel
{
    if (!_tableViewModel) {
        _tableViewModel = [[CCExchangeRateTableViewModel alloc] init];
    }
    return _tableViewModel;
}

- (void)setValueToBeConvertedAsString:(NSString*)value
{
    self.tableViewModel.entryParamString = value;
}

#pragma mark - Table view data source

- (NSInteger)numberOfSectionsInTableView:(UITableView *)tableView {
    return [self.tableViewModel numberOfSectionsInTableView];
}

- (NSInteger)tableView:(UITableView *)tableView numberOfRowsInSection:(NSInteger)section {
    return [self.tableViewModel numberOfRowsInSection];
}


- (UITableViewCell *)tableView:(UITableView *)tableView cellForRowAtIndexPath:(NSIndexPath *)indexPath {
    CCExchangeRateTableViewCell *cell = [tableView dequeueReusableCellWithIdentifier:@"ExchangeRateTableCell" forIndexPath:indexPath];
    [cell updateWithViewModel:[self.tableViewModel viewModelForCellAtIndexPath:indexPath]];
    
    return cell;
}

@end
