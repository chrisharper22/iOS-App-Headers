//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class IGUserSession, NSDate;

@interface IGAvatarProfilePictureLogger : NSObject
{
    IGUserSession *_userSession;
    NSDate *_editorOpenTime;
    double _timeSpent;
}

- (void).cxx_destruct;
- (void)stopTimeSpentTracker;
- (void)startTimeSpentTracker;
- (void)logAvatarsUpdatedEventWithAction:(id)arg1 poseID:(id)arg2 backgroundID:(id)arg3;
- (void)logTapEditProfileEventWithAction:(long long)arg1;
- (id)initWithUserSession:(id)arg1;

@end

