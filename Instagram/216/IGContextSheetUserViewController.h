//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <FBSharedFramework/IGViewController.h>

#import "IGContextSheetHeaderViewDelegate-Protocol.h"
#import "IGContextSheetMediaPreviewViewDelegate-Protocol.h"
#import "IGContextSheetSMBSupportActionDelegate-Protocol.h"
#import "IGContextSheetSMBSupportLinkHandlerDelegate-Protocol.h"
#import "IGCoreTextLinkHandler-Protocol.h"
#import "IGCoreTextNonLinkHandler-Protocol.h"
#import "IGFollowControllerDelegate-Protocol.h"
#import "IGGestureHandler-Protocol.h"
#import "IGStoryDataControllerStoryItemListener-Protocol.h"
#import "IGStoryViewerPresentationControllerDelegate-Protocol.h"

@class FBShimmeringView, IGContextSheetEmptyMediaView, IGContextSheetEmptyPrivateAccountView, IGContextSheetHeaderView, IGContextSheetHeaderViewModel, IGContextSheetMediaPreviewView, IGContextSheetSMBSupportLinkHandler, IGCoreTextView, IGFollowController, IGStoryDataController, IGStoryReel, IGStoryViewerPresentationController, IGUser, IGUserSession, NSArray, NSMutableArray, NSString, UIView;
@protocol IGContextSheetUserViewControllerDelegate;

@interface IGContextSheetUserViewController : IGViewController <IGContextSheetHeaderViewDelegate, IGStoryDataControllerStoryItemListener, IGStoryViewerPresentationControllerDelegate, IGContextSheetSMBSupportActionDelegate, IGContextSheetSMBSupportLinkHandlerDelegate, IGFollowControllerDelegate, IGCoreTextLinkHandler, IGCoreTextNonLinkHandler, IGContextSheetMediaPreviewViewDelegate, IGGestureHandler>
{
    IGUser *_user;
    IGUserSession *_userSession;
    IGStoryDataController *_storyDataController;
    long long _mentionType;
    IGContextSheetHeaderView *_headerView;
    IGStoryViewerPresentationController *_storyViewerController;
    IGContextSheetHeaderViewModel *_headerViewModel;
    IGStoryReel *_reel;
    NSString *_priorModule;
    IGContextSheetSMBSupportLinkHandler *_linkHandler;
    IGFollowController *_followController;
    IGCoreTextView *_bioLabelView;
    NSMutableArray *_bioFields;
    UIView *_bioShimmerContentView;
    FBShimmeringView *_shimmeringBioView;
    _Bool _isUserPrivate;
    IGContextSheetEmptyPrivateAccountView *_emptyPrivateAccountView;
    UIView *_mediaPreviewViewHorizontalLine;
    _Bool _isMediaPreviewsEnabled;
    _Bool _isCurrentUser;
    NSArray *_thumbnailURLs;
    IGContextSheetMediaPreviewView *_mediaPreviewView;
    IGContextSheetEmptyMediaView *_emptyMediaView;
    _Bool _hasEmptyMediaPreview;
    NSArray *_feedItems;
    NSString *_mediaId;
    NSString *_reelId;
    NSString *_reelItemId;
    NSString *_sessionId;
    id <IGContextSheetUserViewControllerDelegate> _delegate;
}

- (void).cxx_destruct;
@property(nonatomic) __weak id <IGContextSheetUserViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
- (void)_logMentionBlackBusinessStickerEvent:(long long)arg1;
- (void)_logMentionProfessionalStickerEvent:(long long)arg1;
- (void)_logMentionActionEvent:(long long)arg1;
- (void)_navigateToFeedItem:(id)arg1;
- (void)_fetchMediaWithPath:(id)arg1;
- (void)_stopBioShimmering;
- (void)_startBioShimmering;
- (id)_buildBioStyledString;
- (void)_navigateToProfile;
- (void)_updateContextSheetHeight;
- (void)_fetchUserIfNeeded:(id)arg1;
- (id)_ringSpecForUser:(id)arg1 userSession:(id)arg2;
- (id)_headerViewLayoutSpec;
- (_Bool)_isMentionProfessional;
- (void)coreTextViewDidTapOnNonLinkedString:(id)arg1 touchEvent:(unsigned long long)arg2;
- (void)coreTextView:(id)arg1 didLongTapOnString:(id)arg2 URL:(id)arg3;
- (void)coreTextView:(id)arg1 didTapOnString:(id)arg2 URL:(id)arg3;
- (void)didTapThumbnailWithURL:(id)arg1;
- (void)followController:(id)arg1 didCompleteAction:(long long)arg2 success:(_Bool)arg3;
- (void)followController:(id)arg1 buttonWasTappedWithAction:(long long)arg2;
- (void)followControllerDidDetectNewButtonState:(id)arg1;
- (void)supportLinkHandler:(id)arg1 didOpenUniversalLinkWithSuccess:(_Bool)arg2;
- (void)contextSheetSectionController:(id)arg1 didSelectSMBSupportAction:(id)arg2;
- (void)storyViewerPresentationControllerDidNavigateToMediaId:(id)arg1;
- (void)storyViewerPresentationControllerWillFinishOnMediaId:(id)arg1 viewerExitContextDict:(id)arg2;
- (void)storyViewerPresentationControllerDidFinishOnMediaId:(id)arg1;
- (void)storyViewerPresentationControllerDidPresentViewer:(id)arg1;
- (void)storyDataController:(id)arg1 didReturnNoStoryItemResultsForReelPK:(id)arg2 refreshType:(long long)arg3 updateDuration:(double)arg4;
- (void)storyDataController:(id)arg1 fetchItemsDidFailForReelPK:(id)arg2 error:(id)arg3 refreshType:(long long)arg4 updateDuration:(double)arg5;
- (void)storyDataController:(id)arg1 didUpdateReel:(id)arg2 refreshType:(long long)arg3 updateDuration:(double)arg4;
- (void)contextSheetHeaderViewDidPressFollowButton;
- (void)contextSheetHeaderViewDidPressTertiaryTitleLabel:(id)arg1;
- (void)contextSheetHeaderViewDidPressSubtitleLabel:(id)arg1;
- (void)contextSheetHeaderViewDidPressTitleLabel:(id)arg1;
- (void)contextSheetHeaderViewDidPressView:(id)arg1;
- (void)contextSheetHeaderViewDidPressImage:(id)arg1 profilePictureImageView:(id)arg2;
- (_Bool)canRespondToGesture:(id)arg1;
- (id)analyticsModule;
- (double)profileSheetViewHeight;
- (void)viewDidLayoutSubviews;
- (id)initWithUser:(id)arg1 userSession:(id)arg2 storyDataController:(id)arg3 priorModule:(id)arg4 mentionType:(long long)arg5 mediaId:(id)arg6 reelId:(id)arg7 reelItemId:(id)arg8 sessionId:(id)arg9;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

