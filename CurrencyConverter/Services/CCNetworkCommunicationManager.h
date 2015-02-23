//
//  CCNetworkCommunicationManager.h
//  CurrencyConverter
//
//  Created by Kamil Czopek on 20.02.2015.
//  Copyright (c) 2015 Kamil Czopek. All rights reserved.
//

#import <Foundation/Foundation.h>

/**
 Provides networking activities (downloads) with the exchange rates related endpoints.
 */
@interface CCNetworkCommunicationManager : NSObject

/**
 Success block type definition for the tables list download.
 */
typedef void (^CCNetworkCommunicationManagerTablesListSuccessBlock)(NSData *tablesList);

/**
 Success block type definition for the current rates table download.
 */
typedef void (^CCNetworkCommunicationManagerCurrentTableListSuccessBlock)(NSData *tablesList);

/**
 Error block type definition for the rate table download.
 */
typedef void (^CCNetworkCommunicationManagerErrorBlock)(NSError *error);

/**
 Downloads the rate table list xml data.
 @param successBlock
 @param errorBlock
 */
- (void)downloadRatesTablesListWithSuccessBlock:(CCNetworkCommunicationManagerTablesListSuccessBlock)successBlock andFailureBlock:(CCNetworkCommunicationManagerErrorBlock)failureBlock;

/**
 Downloads the current rate table xml data.
 @param successBlock
 @param errorBlock
 */
- (void)downloadCurrentRatesTableWithSuccessBlock:(CCNetworkCommunicationManagerCurrentTableListSuccessBlock)successBlock andFailureBlock:(CCNetworkCommunicationManagerErrorBlock)failureBlock;

@end
