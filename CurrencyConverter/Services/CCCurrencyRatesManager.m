//
//  NetworkConnectionManager.m
//  CurrencyConverter
//
//  Created by Kamil Czopek on 20.02.2015.
//  Copyright (c) 2015 Kamil Czopek. All rights reserved.
//

#import "CCCurrencyRatesManager.h"
#import "CCNetworkCommunicationManager.h"
#import "CCXMLParser.h"

@interface CCCurrencyRatesManager()
@property (nonatomic, strong) CCNetworkCommunicationManager *networkCommunicationMgr;
@end

@implementation CCCurrencyRatesManager

- (CCNetworkCommunicationManager *)networkCommunicationMgr
{
    if (!_networkCommunicationMgr) {
        _networkCommunicationMgr = [[CCNetworkCommunicationManager alloc] init];
    }
    return _networkCommunicationMgr;
}

- (void)fetchAverageExchangeRatesTablesListWithSuccessBlock:(CurrencyRatesManagerTablesListSuccessBlock)successBlock andFailureBlock:(CurrencyRatesManagerCurrentRatesErrorBlock)failureBlock
{
    [self.networkCommunicationMgr downloadRatesTablesListWithSuccessBlock:^(NSData *data){
        // TODO:
        // 1. Parse the exchange tables list,
        // 2. Pick up the list that's the most up to date,
        // 3. Download the the most recent table,
        // 4. Parse the table and return the result.
    } andFailureBlock:^(NSError *error){
        // TODO: Format and pass the info about the error further.
    }];
}

- (void)fetchCurrentRatesTableWithSuccessBlock:(CurrencyRatesManagerCurrentRatesDictSuccessBlock)successBlock andFailureBlock:(CurrencyRatesManagerCurrentRatesErrorBlock)failureBlock
{
    [self.networkCommunicationMgr downloadCurrentRatesTableWithSuccessBlock:^(NSData *data){
       CCXMLParser *parser = [[CCXMLParser alloc] initWithXMLData:data];
        if ([parser parseItems]) {
            successBlock(parser.exchangeRateItems);
        }
    } andFailureBlock:^(NSError *error){
        // TODO: Format and pass the info about the error further.
    }];
}

@end

