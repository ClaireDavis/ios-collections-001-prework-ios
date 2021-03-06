//
//  FISAppDelegate.h
//  Collections
//
//  Created by Chris Gonzales on 5/30/14.
//  Copyright (c) 2014 FIS. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface FISAppDelegate : UIResponder <UIApplicationDelegate>

@property (strong, nonatomic) UIWindow *window;

- (NSArray *)arrayBySortingArrayAscending: (NSArray *)ascendingArray;
- (NSArray *)arrayBySortingArrayDescending: (NSArray *)descendingArray;
- (NSArray *)arrayBySwappingFirstObjectWithLastObjectInArray: (NSArray *)swap;
- (NSArray *)arrayByReversingArray: (NSArray *)reverse;
- (NSString *)stringInBasicLeetFromString: (NSString *)basic;
- (NSArray *)splitArrayIntoNegativesAndPositives: (NSArray *)negativesAndPositives;
- (NSArray *)namesOfHobbitsInDictionary: (NSDictionary *)hobbits;
- (NSArray *)stringsBeginningWithAInArray: (NSArray *)aWords;
- (NSInteger) sumOfIntegersInArray: (NSArray *)numbersToSum;
- (NSArray *)arrayByPluralizingStringsInArray: (NSArray *)singularArray;
- (NSDictionary *)countsOfWordsInString: (NSString *)wordsToCount;
- (NSDictionary *)songsGroupedByArtistFromArray: (NSArray *)artists;

@end
