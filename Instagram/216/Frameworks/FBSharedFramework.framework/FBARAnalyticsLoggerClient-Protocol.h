//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <FBSharedFramework/NSObject-Protocol.h>

@class NSDictionary, NSString;

@protocol FBARAnalyticsLoggerClient <NSObject>
@property(readonly, nonatomic) shared_ptr_422868cf structuredLogger;
- (void)logRawEventWithName:(NSString *)arg1 extras:(NSDictionary *)arg2;
- (void)logARWaterfallEventWithExtras:(NSDictionary *)arg1;
@end
