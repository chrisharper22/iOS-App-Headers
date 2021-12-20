//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <FBSharedFramework/IGListSectionController.h>

#import "IGGenericSurveyReelPreviewCellDelegate-Protocol.h"
#import "IGStoryViewerDelegate-Protocol.h"

@class IGGenericSurveyAlertAssistant, IGLabelItemViewModel, IGSimpleReelPreviewViewModel, IGStoryReel, IGUserSession, NSString;
@protocol IGGenericSurveyReelSectionControllerDelegate;

@interface IGGenericSurveyReelSectionController : IGListSectionController <IGGenericSurveyReelPreviewCellDelegate, IGStoryViewerDelegate>
{
    IGUserSession *_userSession;
    IGStoryReel *_reel;
    IGSimpleReelPreviewViewModel *_previewViewModel;
    IGLabelItemViewModel *_promptViewModel;
    double _viewerLaunchStartTime;
    IGGenericSurveyAlertAssistant *_alertAssistant;
    NSString *_module;
    _Bool _showPreviewHint;
    id <IGGenericSurveyReelSectionControllerDelegate> _delegate;
}

+ (id)_reelCellTypeClassMap;
- (void).cxx_destruct;
@property(nonatomic) __weak id <IGGenericSurveyReelSectionControllerDelegate> delegate; // @synthesize delegate=_delegate;
- (void)storyViewerDidUnfollow:(id)arg1;
- (void)storyViewerDidMute:(id)arg1 didMutePosts:(_Bool)arg2;
- (void)storyViewerDidTapViewDay:(id)arg1;
- (void)storyViewerDidTapTryItOn:(id)arg1 onEffectWithID:(id)arg2 effectName:(id)arg3 effectIconURL:(id)arg4;
- (void)storyViewer:(id)arg1 didFocusOnReelWithPK:(id)arg2;
- (_Bool)storyViewerShouldPresentCamera:(id)arg1;
- (void)storyViewerDidFinish:(id)arg1 navigationAction:(long long)arg2 lastMediaID:(id)arg3 viewerExitContextDict:(id)arg4 completion:(CDUnknownBlockType)arg5;
- (void)storyViewer:(id)arg1 didNavigateToStoryItem:(id)arg2;
- (void)_presentViewerWithCurrentViewModel:(id)arg1;
- (void)genericSurveyReelPreviewCellDidTapSurveyReelPreviewView:(id)arg1;
- (void)didUpdateToObject:(id)arg1;
- (id)cellForItemAtIndex:(long long)arg1;
- (struct CGSize)sizeForItemAtIndex:(long long)arg1;
- (long long)numberOfItems;
- (id)initWithUserSession:(id)arg1 alertAssistant:(id)arg2 module:(id)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

