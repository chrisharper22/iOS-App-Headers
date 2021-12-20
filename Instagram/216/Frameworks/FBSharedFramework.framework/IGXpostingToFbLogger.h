//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;
@protocol IGAnalyticsEventLoggingProtocol;

@interface IGXpostingToFbLogger : NSObject
{
    id <IGAnalyticsEventLoggingProtocol> _analyticsLogger;
    unsigned long long _entryPoint;
    long long _accountType;
    NSString *_waterfallId;
}

- (void).cxx_destruct;
@property(readonly, copy, nonatomic) NSString *waterfallId; // @synthesize waterfallId=_waterfallId;
- (void)logXpostingEvent:(id)arg1;
- (id)initWithAnalyticsLogger:(id)arg1 entryPoint:(unsigned long long)arg2 accountType:(long long)arg3 waterfallId:(id)arg4;

@end
