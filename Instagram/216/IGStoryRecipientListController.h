//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "IGAddHighlightsViewControllerDelegate-Protocol.h"
#import "IGDirectRecipientListViewControllerDelegate-Protocol.h"
#import "IGDirectRecipientListViewControllerPresentationDelegate-Protocol.h"
#import "IGNewPromotionListener-Protocol.h"
#import "IGPostCreationManagerListener-Protocol.h"
#import "IGPostShareListener-Protocol.h"
#import "IGStorySharePostListener-Protocol.h"

@class IGBoostPostLogger, IGDirectCameraCreationViewMode, IGDirectThreadService, IGMedia, IGMediaMetadata, IGStoryAnalyticsUploadWaterfall, IGUserSession, IGViewController, NSArray, NSMutableArray, NSMutableDictionary, NSMutableOrderedSet, NSMutableSet, NSOrderedSet, NSSet, NSString;
@protocol IGDirectRecipientListViewControllerType, IGStoryRecipientListControllerDelegate;

@interface IGStoryRecipientListController : NSObject <IGDirectRecipientListViewControllerDelegate, IGAddHighlightsViewControllerDelegate, IGDirectRecipientListViewControllerPresentationDelegate, IGStorySharePostListener, IGPostCreationManagerListener, IGPostShareListener, IGNewPromotionListener>
{
    NSMutableSet *_selectedExternalShareServices;
    NSMutableOrderedSet *_selectedDirectRecipients;
    NSOrderedSet *_recipientsFromSearch;
    NSSet *_bumpedRecipients;
    NSMutableSet *_selectedHighlightReelIDs;
    NSMutableArray *_selectedHighlightReelTitles;
    NSString *_loggingSessionID;
    double _cameraRequestedTimestamp;
    IGMedia *_sharedStoryItem;
    long long _shareType;
    NSMutableDictionary *_uploadModelsToMetadata;
    _Bool _didFinishAction;
    _Bool _shouldShowPromoteFlow;
    IGBoostPostLogger *_boostPostLogger;
    IGViewController<IGDirectRecipientListViewControllerType> *_recipientListViewController;
    id <IGStoryRecipientListControllerDelegate> _delegate;
    long long _selectedStorySendTarget;
    NSArray *_uploadModels;
    IGMediaMetadata *_metadata;
    IGStoryAnalyticsUploadWaterfall *_uploadWaterfall;
    IGDirectCameraCreationViewMode *_selectedViewMode;
    long long _replyType;
    IGUserSession *_userSession;
    IGDirectThreadService *_threadService;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) IGDirectThreadService *threadService; // @synthesize threadService=_threadService;
@property(readonly, nonatomic) IGUserSession *userSession; // @synthesize userSession=_userSession;
@property(readonly, nonatomic) long long replyType; // @synthesize replyType=_replyType;
@property(readonly, nonatomic) IGDirectCameraCreationViewMode *selectedViewMode; // @synthesize selectedViewMode=_selectedViewMode;
@property(retain, nonatomic) IGStoryAnalyticsUploadWaterfall *uploadWaterfall; // @synthesize uploadWaterfall=_uploadWaterfall;
@property(retain, nonatomic) IGMediaMetadata *metadata; // @synthesize metadata=_metadata;
@property(readonly, copy, nonatomic) NSArray *uploadModels; // @synthesize uploadModels=_uploadModels;
@property(readonly, nonatomic) NSSet *bumpedRecipients; // @synthesize bumpedRecipients=_bumpedRecipients;
@property(readonly, nonatomic) NSOrderedSet *recipientsFromSearch; // @synthesize recipientsFromSearch=_recipientsFromSearch;
@property(readonly, nonatomic) NSOrderedSet *selectedDirectRecipients; // @synthesize selectedDirectRecipients=_selectedDirectRecipients;
@property(readonly, nonatomic) NSSet *selectedExternalShareServices; // @synthesize selectedExternalShareServices=_selectedExternalShareServices;
@property(readonly, nonatomic) long long selectedStorySendTarget; // @synthesize selectedStorySendTarget=_selectedStorySendTarget;
@property(nonatomic) __weak id <IGStoryRecipientListControllerDelegate> delegate; // @synthesize delegate=_delegate;
@property(readonly, nonatomic) IGViewController<IGDirectRecipientListViewControllerType> *recipientListViewController; // @synthesize recipientListViewController=_recipientListViewController;
- (void)newPromotionSuccessDialogOkActionClick;
- (void)newPromotionCreated;
- (void)postShare:(id)arg1 didRenderVideoAtUrl:(id)arg2;
- (void)postShare:(id)arg1 didUpdateProgress:(double)arg2;
- (void)postShare:(id)arg1 didUpdateStatus:(long long)arg2 serverResponse:(id)arg3;
- (void)postCreationManager:(id)arg1 post:(id)arg2 carouselDidRenderImageSource:(id)arg3 hasEdits:(_Bool)arg4;
- (void)postCreationManager:(id)arg1 post:(id)arg2 carouselDidRenderVideoUrl:(id)arg3 hasEdits:(_Bool)arg4;
- (void)postCreationManagerDidResumeArchivedPosts:(id)arg1;
- (void)postCreationManager:(id)arg1 didAddShare:(id)arg2;
- (_Bool)isRecipientListViewControllerDismissed;
- (void)_updateReelWithPk:(id)arg1 added:(_Bool)arg2 baseUploadID:(id)arg3 title:(id)arg4;
- (void)_updateNewReelWithTitle:(id)arg1 cropRect:(struct CGRect)arg2 creationToken:(id)arg3 baseUploadID:(id)arg4;
- (void)addHighlightsSheet:(id)arg1 didUpdateReelWithPK:(id)arg2 added:(_Bool)arg3 title:(id)arg4 coverURL:(id)arg5;
- (void)addHighlightsSheet:(id)arg1 wantsNewReelWithTitle:(id)arg2 cropRect:(struct CGRect)arg3 creationToken:(id)arg4;
- (void)addHighlightsSheetDidCancel:(id)arg1;
- (void)didTapFavoritesSubtitle;
- (void)selectRecipientViewController:(id)arg1 didTapSendToGroupButtonWithSelectedRecipients:(id)arg2 sender:(id)arg3 text:(id)arg4 externalServices:(id)arg5 storyViewerViewModel:(id)arg6 storyViewerLoggingContext:(id)arg7 currentStoryItem:(id)arg8 loggingProvider:(id)arg9 media:(id)arg10 selectedPost:(id)arg11;
- (void)selectRecipientViewController:(id)arg1 willShowPrivacyBanner:(_Bool)arg2;
- (void)selectRecipientViewController:(id)arg1 willToggleFullScreenOn:(_Bool)arg2;
- (void)selectRecipientViewController:(id)arg1 didTapRecipient:(id)arg2 selected:(_Bool)arg3;
- (void)selectRecipientViewController:(id)arg1 didUpdateSelectedRecipients:(id)arg2;
- (void)selectRecipientViewControllerDidTapBackButton:(id)arg1;
- (void)selectRecipientViewControllerDidDismissRecipientList:(id)arg1 recipientsFromSearch:(id)arg2 bumpedRecipients:(id)arg3;
- (void)selectRecipientViewControllerDidTapFinishButton:(id)arg1 storySendTarget:(long long)arg2 sender:(id)arg3 directRecipients:(id)arg4 externalServices:(id)arg5 text:(id)arg6 fromOneTap:(_Bool)arg7 storyViewerViewModel:(id)arg8 storyViewerLoggingContext:(id)arg9 currentStoryItem:(id)arg10 loggingProvider:(id)arg11 media:(id)arg12 selectedPost:(id)arg13;
- (id)selectedRecipientsSoFarFromOneTapping:(id)arg1;
- (void)selectRecipientViewControllerDidTapPromote:(id)arg1;
- (void)selectRecipientViewControllerDidTapAddToHighlight:(id)arg1;
- (id)_selectDirectRecipientBlastList:(id)arg1;
- (id)_selectDirectRecipient:(id)arg1;
- (void)selectRecipientViewController:(id)arg1;
- (void)selectRecipientViewController:(id)arg1 didOneTapSendToBlastList:(id)arg2;
- (void)selectRecipientViewController:(id)arg1 didOneTapSendToDirectRecipient:(id)arg2 messageText:(id)arg3;
- (void)selectRecipientViewController:(id)arg1 didOneTapSendToExternalService:(long long)arg2 willShareToFbWithYourStoryButton:(_Bool)arg3;
- (void)selectRecipientViewController:(id)arg1 didOneTapSendToStoryTarget:(long long)arg2 willShareToFbWithYourStoryButton:(_Bool)arg3;
- (void)storyItemPosted:(id)arg1 videoFileURL:(id)arg2 shareTypeInt:(long long)arg3 mediaData:(id)arg4 postShareId:(id)arg5 reelOwner:(id)arg6;
- (void)_launchMediaPicker;
- (void)_showIneligibleStoryAlertWithDetail:(id)arg1;
- (void)_launchPromoteFlowForStory:(id)arg1;
- (_Bool)_isSubsequentConfiguration;
- (void)_shareToStoryTarget:(long long)arg1 directRecipients:(id)arg2 externalServices:(id)arg3 uploadModels:(id)arg4 metadata:(id)arg5 uploadWaterfall:(id)arg6 userSession:(id)arg7 replyType:(long long)arg8 isSubsequentConfiguration:(_Bool)arg9 isMultiConfiguration:(_Bool)arg10;
- (id)_uploadMetadataForUploadModel:(id)arg1;
- (id)_uploadModel:(id)arg1 shareType:(long long)arg2;
@property(nonatomic) _Bool beExtremelyHackyAndHijackTheNavigationBarBackButton;
- (void)setUploadMetadata:(id)arg1;
- (id)initWithUserSession:(id)arg1 uploadModels:(id)arg2 loggingSessionID:(id)arg3 cameraRequestedTimestamp:(double)arg4 replyType:(long long)arg5 configuration:(id)arg6 selectedViewMode:(id)arg7 oneTapStateTracker:(id)arg8 initialIntendedRecipient:(id)arg9 selectedRecipients:(id)arg10 recipientsFromSearch:(id)arg11 bumpedRecipients:(id)arg12 selectedExternalShareServices:(id)arg13 selectedHighlightReelIDs:(id)arg14 selectedHighlightTitles:(id)arg15 selectedStorySendTarget:(long long)arg16 shareType:(long long)arg17 entryPoint:(id)arg18 title:(id)arg19;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
