//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;

@interface IGInsightsLoggingDataBuilder : NSObject
{
    long long _duration;
    NSString *_errorId;
    NSString *_errorMessage;
    double _fbUserId;
    NSString *_fbMediaOwnerId;
    NSString *_mediaId;
    NSString *_igMediaId;
    NSString *_igMediaOwnerId;
    NSString *_parentUnit;
    NSString *_state;
    NSString *_unit;
}

+ (id)insightsLoggingDataFromExistingInsightsLoggingData:(id)arg1;
+ (id)insightsLoggingData;
- (void).cxx_destruct;
- (id)withUnit:(id)arg1;
- (id)withState:(id)arg1;
- (id)withParentUnit:(id)arg1;
- (id)withIgMediaOwnerId:(id)arg1;
- (id)withIgMediaId:(id)arg1;
- (id)withMediaId:(id)arg1;
- (id)withFbMediaOwnerId:(id)arg1;
- (id)withFbUserId:(double)arg1;
- (id)withErrorMessage:(id)arg1;
- (id)withErrorId:(id)arg1;
- (id)withDuration:(long long)arg1;
- (id)build;

@end
