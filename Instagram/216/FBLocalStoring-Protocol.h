//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "NSObject-Protocol.h"

@class NSData, NSString;

@protocol FBLocalStoring <NSObject>
- (NSData *)fb_activity_monitor_storing_getDataForKey:(NSString *)arg1;
- (void)fb_activity_monitor_storing_storeData:(NSData *)arg1 key:(NSString *)arg2;
@end

