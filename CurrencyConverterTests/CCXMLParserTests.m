//
//  XMLParsingManagerTests.m
//  CurrencyConverter
//
//  Created by Kamil Czopek on 21.02.2015.
//  Copyright (c) 2015 Kamil Czopek. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <XCTest/XCTest.h>
#import "CCXMLParser.h"

@interface CCXMLParserTests : XCTestCase
@property (nonatomic, strong) NSData *testData;
@property (nonatomic, strong) CCXMLParser *parser;
@end

@implementation CCXMLParserTests

- (void)setUp {
    [super setUp];
    NSString *filePath = [[NSBundle bundleForClass:[self class]] pathForResource:@"Kursy" ofType:@"xml"];
    self.testData = [[[NSMutableData alloc] initWithContentsOfFile:filePath] copy];
    self.parser = [[CCXMLParser alloc] initWithXMLData:self.testData];
}

- (void)tearDown {
    // Put teardown code here. This method is called after the invocation of each test method in the class.
    [super tearDown];
}

- (void)testThatParserExists
{
    XCTAssertNotNil(self.parser, @"should be able to create a parser");
}

- (void)testThatParserReturnsArray
{
    XCTAssertTrue([[self.parser exchangeRateItems] isKindOfClass:[NSArray class]], @"parser should be able to return an array of items");
}

- (void)testThatParserReturnsCorrectAmountOfItems
{
    [self.parser parseItems];
    XCTAssertEqual([[self.parser exchangeRateItems] count], 35, @"shoud return a proper amount of the items");
    
}


@end
