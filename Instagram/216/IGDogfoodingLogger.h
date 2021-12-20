//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@protocol IGAnalyticsEventLoggingProtocol;

@interface IGDogfoodingLogger : NSObject
{
    id <IGAnalyticsEventLoggingProtocol> _logger;
    long long _environment;
}

- (void).cxx_destruct;
- (void)logErrorName:(id)arg1 message:(id)arg2 code:(long long)arg3;
- (void)logAction:(id)arg1;
- (id)initWithLogger:(id)arg1 environment:(long long)arg2;

@end

