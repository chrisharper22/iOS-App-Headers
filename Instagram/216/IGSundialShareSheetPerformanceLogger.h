//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@interface IGSundialShareSheetPerformanceLogger : NSObject
{
    unsigned long long _userFlowInstanceId;
}

- (void)logShareReelUserTaggedPeopleWithTaggedUserCount:(id)arg1;
- (void)logShareReelPeopleTaggingClicked;
- (void)logShareReelProfilePhotoCropped;
- (void)logShareReelProfilePhotoClicked;
- (void)logShareReelCoverPhotoSaved;
- (void)logShareReelCoverPhotoClicked;
- (void)logShareReelDraftSuccess;
- (void)logShareReelPostSuccessWithVideoDuration:(double)arg1 isOlderDraft:(_Bool)arg2 hasCaption:(_Bool)arg3 shareToFeed:(_Bool)arg4;
- (void)logShareReelCancel;
- (void)logShareReelStart;
- (id)init;

@end

