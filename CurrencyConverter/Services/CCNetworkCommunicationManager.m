//
//  CCNetworkCommunicationManager.m
//  CurrencyConverter
//
//  Created by Kamil Czopek on 20.02.2015.
//  Copyright (c) 2015 Kamil Czopek. All rights reserved.
//

#import "CCNetworkCommunicationManager.h"

NSString * const TABLES_LIST_URL = @"http://rss.nbp.pl/kursy/TabelaA.xml";
NSString * const CURRENT_TABLE_URL = @"http://rss.nbp.pl/kursy/xml2/2015/a/15a035.xml";

@interface CCNetworkCommunicationManager()
@property (nonatomic, strong) NSURLSession *session;
@end

@implementation CCNetworkCommunicationManager

- (NSURLSession*)session
{
    if (!_session) {
        NSURLSessionConfiguration *config = [NSURLSessionConfiguration ephemeralSessionConfiguration];
        _session = [NSURLSession sessionWithConfiguration:config];
    }
    return _session;
}

- (void)downloadRatesTablesListWithSuccessBlock:(CCNetworkCommunicationManagerTablesListSuccessBlock)successBlock andFailureBlock:(CCNetworkCommunicationManagerErrorBlock)failureBlock
{
    NSURL *tablesListURL = [NSURL URLWithString:TABLES_LIST_URL];
    NSURLSessionDataTask *dataTask = [self.session dataTaskWithURL:tablesListURL
                                                 completionHandler:^(NSData *data, NSURLResponse *response, NSError *error) {
        if (!error) {
            NSHTTPURLResponse *httpResp =
            (NSHTTPURLResponse*) response;
            if (httpResp.statusCode == 200) {
                successBlock(data);
            }
            else {
                // TODO: Handle response ...
            }
        }
        else {
            // TODO: Handle error ...
        }
    }];
    [dataTask resume];
}

- (void)downloadCurrentRatesTableWithSuccessBlock:(CCNetworkCommunicationManagerCurrentTableListSuccessBlock)successBlock andFailureBlock:(CCNetworkCommunicationManagerErrorBlock)failureBlock
{
    NSURL *currentTableURL = [NSURL URLWithString:CURRENT_TABLE_URL];
    NSURLSessionDataTask *dataTask = [self.session dataTaskWithURL:currentTableURL
                                                 completionHandler:^(NSData *data, NSURLResponse *response, NSError *error) {
                                                     if (!error) {
                                                         NSHTTPURLResponse *httpResp =
                                                         (NSHTTPURLResponse*) response;
                                                         if (httpResp.statusCode == 200) {
                                                             successBlock(data);
                                                         }
                                                         else {
                                                             // TODO: Handle response ...
                                                         }
                                                     }
                                                     else {
                                                         // TODO: Handle error ...
                                                     }
                                                 }];
    
    [dataTask resume];
}

@end
