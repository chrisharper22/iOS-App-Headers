//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class IGCameraLoggingContext;

@interface IGSundialInspirationHubContext : NSObject
{
    IGCameraLoggingContext *_loggingContext;
    long long _cameraPosition;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) long long cameraPosition; // @synthesize cameraPosition=_cameraPosition;
@property(readonly, nonatomic) IGCameraLoggingContext *loggingContext; // @synthesize loggingContext=_loggingContext;
- (id)initWithLoggingContext:(id)arg1 cameraPosition:(long long)arg2;

@end

