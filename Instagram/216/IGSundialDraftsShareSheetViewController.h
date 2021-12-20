//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <FBSharedFramework/IGViewController.h>

#import "IGStoryShareSheetViewControllerDelegate-Protocol.h"
#import "IGSundialDraftsPostCaptureEditingViewControllerDelegate-Protocol.h"
#import "IGSundialShareSheetViewControllerDelegate-Protocol.h"

@class IGAudioSessionClient, IGStoryShareSheetViewController, IGSundialComposition, IGSundialShareSheetViewController, IGUserSession, NSString, UIImage;
@protocol IGSundialDraftsShareSheetViewControllerDelegate;

@interface IGSundialDraftsShareSheetViewController : IGViewController <IGSundialShareSheetViewControllerDelegate, IGSundialDraftsPostCaptureEditingViewControllerDelegate, IGStoryShareSheetViewControllerDelegate>
{
    IGUserSession *_userSession;
    IGSundialShareSheetViewController *_sundialShareSheet;
    IGAudioSessionClient *_audioSession;
    IGStoryShareSheetViewController *_storyShareSheetViewController;
    id <IGSundialDraftsShareSheetViewControllerDelegate> _delegate;
    IGSundialComposition *_composition;
    UIImage *_compositionSnapshot;
    NSString *_analyticsModule;
}

- (void).cxx_destruct;
@property(copy, nonatomic) NSString *analyticsModule; // @synthesize analyticsModule=_analyticsModule;
@property(readonly, nonatomic) UIImage *compositionSnapshot; // @synthesize compositionSnapshot=_compositionSnapshot;
@property(readonly, nonatomic) IGSundialComposition *composition; // @synthesize composition=_composition;
@property(nonatomic) __weak id <IGSundialDraftsShareSheetViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
- (void)storyShareSheetViewController:(id)arg1 didSendToStoryTarget:(long long)arg2 directRecipients:(id)arg3 storyModelArray:(id)arg4 metadataArray:(id)arg5;
- (void)storyShareSheetViewControllerDidDismiss:(id)arg1;
- (void)storyShareSheetViewControllerWillDismiss:(id)arg1;
- (void)storyShareSheetViewControllerDidTapShareFromAudienceSelection:(id)arg1;
- (_Bool)prefersNavigationBarDividerHidden;
- (long long)preferredTabBarBehavior;
- (void)sundialShareSheetViewController:(id)arg1 didUpdateContentFunding:(id)arg2;
- (void)sundialShareSheetViewController:(id)arg1 didUpdateShoppingMetadata:(id)arg2;
- (void)sundialShareSheetViewController:(id)arg1 didUpdateIsPaidPartnership:(_Bool)arg2;
- (void)sundialShareSheetViewController:(id)arg1 didUpdateBrandedContentTags:(id)arg2;
- (void)sundialShareSheetViewController:(id)arg1 didUpdateSponsorPartner:(id)arg2;
- (void)sundialShareSheetViewControllerDidTapBackButton:(id)arg1;
- (void)sundialShareSheetViewController:(id)arg1 didUpdateShareToReels:(_Bool)arg2;
- (void)sundialShareSheetViewController:(id)arg1 didUpdateShareToFeed:(_Bool)arg2;
- (void)sundialShareSheetViewController:(id)arg1 didUpdateCaption:(id)arg2;
- (void)sundialShareSheetViewController:(id)arg1 didShareToStory:(long long)arg2 andDirectRecipients:(id)arg3 storyModelArray:(id)arg4 metadataArray:(id)arg5;
- (void)sundialShareSheetViewController:(id)arg1 didShareComposition:(id)arg2 toDestination:(long long)arg3 withPostId:(id)arg4;
- (void)sundialShareSheetViewController:(id)arg1 didSaveDraft:(id)arg2;
- (void)draftEditingViewController:(id)arg1 didTapConfirmEditsForDraftComposition:(id)arg2 compositionSnapshot:(id)arg3;
- (void)_didTapDirectButton:(id)arg1;
- (void)_didTapEditButton:(id)arg1;
- (void)_didTapCancelButton:(id)arg1;
- (void)viewDidLayoutSubviews;
- (void)_handleGenericErrorRemixDraft;
- (void)_displayRemixUnavailableErrorPrompt;
- (void)_handleUnavailableRemixDraft;
- (void)_handleRemixDraft:(long long)arg1;
- (void)_checkAndHandleRemixDraft;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewDidLoad;
- (void)dealloc;
- (id)initWithDraftComposition:(id)arg1 compositionSnapshot:(id)arg2 userSession:(id)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
