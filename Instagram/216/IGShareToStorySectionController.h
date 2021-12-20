//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <FBSharedFramework/IGListGenericSectionController.h>

#import "IGStoryPostCaptureEditingViewControllerDelegate-Protocol.h"
#import "IGStoryViewerDelegate-Protocol.h"

@class IGShareToStoryValue, IGStoryCaptureAnimationController, IGStoryRingBadgeSpec, IGUserSession, NSString;

@interface IGShareToStorySectionController : IGListGenericSectionController <IGStoryPostCaptureEditingViewControllerDelegate, IGStoryViewerDelegate>
{
    IGShareToStoryValue *_shareToStoryValue;
    IGUserSession *_userSession;
    IGStoryCaptureAnimationController *_captureAnimationController;
    NSString *_analyticsModule;
    IGStoryRingBadgeSpec *_postedStoryRingBadgeSpec;
}

- (void).cxx_destruct;
- (void)storyPostCaptureEditingViewControllerDidCancel:(id)arg1;
- (void)storyPostCaptureEditingViewController:(id)arg1 didShareToStory:(long long)arg2 andDirectRecipients:(id)arg3 storyModelArray:(id)arg4 metadataArray:(id)arg5 exitPoint:(long long)arg6;
- (void)storyViewerDidUnfollow:(id)arg1;
- (void)storyViewerDidMute:(id)arg1 didMutePosts:(_Bool)arg2;
- (void)storyViewerDidFinish:(id)arg1 navigationAction:(long long)arg2 lastMediaID:(id)arg3 viewerExitContextDict:(id)arg4 completion:(CDUnknownBlockType)arg5;
- (void)storyViewer:(id)arg1 didNavigateToStoryItem:(id)arg2;
- (_Bool)storyViewerShouldPresentCamera:(id)arg1;
- (void)storyViewer:(id)arg1 didFocusOnReelWithPK:(id)arg2;
- (void)storyViewerDidTapViewDay:(id)arg1;
- (void)storyViewerDidTapTryItOn:(id)arg1 onEffectWithID:(id)arg2 effectName:(id)arg3 effectIconURL:(id)arg4;
- (void)_didTapProfilePicture:(id)arg1;
- (void)didSelectItemAtIndex:(long long)arg1;
- (id)cellForItemAtIndex:(long long)arg1;
- (struct CGSize)sizeForItemAtIndex:(long long)arg1;
- (id)initWithShareToStoryValue:(id)arg1 userSession:(id)arg2 analyticsModule:(id)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

