//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@interface IGApplicationStateLoggingInfo : NSObject
{
    _Bool _willBecomeActive;
    long long _state;
    long long _startupOrigin;
}

@property(nonatomic) long long startupOrigin; // @synthesize startupOrigin=_startupOrigin;
@property(nonatomic) long long state; // @synthesize state=_state;
@property(nonatomic) _Bool willBecomeActive; // @synthesize willBecomeActive=_willBecomeActive;
- (id)analyticsExtras;

@end
