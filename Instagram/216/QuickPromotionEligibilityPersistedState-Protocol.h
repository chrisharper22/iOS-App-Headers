//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "NSObject-Protocol.h"

@class NSDate, NSString;
@protocol NSObject;

@protocol QuickPromotionEligibilityPersistedState <NSObject>
@property(readonly, copy, nonatomic) NSString *nuxID;
- (void)incrementCountForEvent:(long long)arg1 qpID:(NSString *)arg2;
- (long long)getCountForEvent:(long long)arg1 qpID:(NSString *)arg2;
- (NSDate *)getLastOccurrenceTimeForEvent:(long long)arg1 qpID:(NSString *)arg2;
- (id)initWithNuxID:(NSString *)arg1 appSpecificDataStore:(id <NSObject>)arg2;
@end
