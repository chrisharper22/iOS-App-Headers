//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class MISSING_TYPE;

@interface IGAvatarProfilePictureTTRCLogger : NSObject
{
    MISSING_TYPE *ttrcInstanceId;
}

- (void).cxx_destruct;
- (id)init;
- (void)endInteractionWithCancelReason:(id)arg1;
- (void)endInteractionWithError:(id)arg1;
- (void)endInteractionWithSuccess:(_Bool)arg1 cacheAge:(double)arg2;
- (void)markerPointWithStringValue:(id)arg1;
- (void)annotateMarkerWithKey:(long long)arg1 stringValue:(id)arg2;
- (void)startInteraction;

@end
