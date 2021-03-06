//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class IGStoryEmojiReactionConfig, IGStoryEmojiReactionReactorViewModel, IGStoryFullscreenFooterStoryLikesConfig, IGStoryFullscreenStoryOwnerViewerButtonViewModel, IGStoryFullscreenUploadFooterViewModel, IGStoryViewerPivotModel, IGStoryViewerViewModel, IGUser, IGUserSession, NSString, UIImage;
@protocol IGStoryItemType;

@interface IGStoryFullscreenFooterViewModel : NSObject
{
    _Bool _isCanvasAd;
    _Bool _hasStoryLinks;
    _Bool _showReshareButton;
    _Bool _showDirectButton;
    _Bool _showSaveButton;
    _Bool _isAdSaved;
    _Bool _isDisplayingSensitivityView;
    _Bool _showViewInsightsCTAButton;
    IGStoryFullscreenFooterStoryLikesConfig *_storyLikesConfig;
    _Bool _showClipsCameraCreateButton;
    NSString *_storyReplyComposerPlaceholderText;
    _Bool _showMessageButton;
    NSString *_threadId;
    IGStoryEmojiReactionConfig *_emojiReactionConfig;
    IGStoryEmojiReactionReactorViewModel *_emojiReactionUserReactedButtonViewModel;
    NSString *_draftMessage;
    IGStoryFullscreenStoryOwnerViewerButtonViewModel *_storyOwnerViewerButtonViewModel;
    _Bool _showPromoteButton;
    _Bool _isCurrentlyPromoted;
    _Bool _showHighlightButton;
    _Bool _showInsightsButton;
    _Bool _isHighlight;
    _Bool _isCurrentUserItem;
    _Bool _isArchive;
    unsigned long long _archiveNavButtonStyle;
    _Bool _disableArchiveReshareButton;
    long long _crossShareToFacebookState;
    _Bool _crossShareToFacebookEnabled;
    _Bool _copyLinkShareEnabled;
    _Bool _systemShareEnabled;
    _Bool _showSelfViewCreationEntryPointButton;
    unsigned long long _storyCTAButtonType;
    NSString *_storyCTAButtonDestinationContext;
    UIImage *_leftCTAButtonImage;
    double _leftCTAButtonImageYOffset;
    _Bool _isCTAButtonBackgroundEnabled;
    _Bool _showChevron;
    IGStoryViewerPivotModel *_pivotModel;
    IGStoryFullscreenUploadFooterViewModel *_uploadProgressViewModel;
    _Bool _isSponsored;
    _Bool _isNetego;
    _Bool _showPoliticalContext;
    _Bool _displaceHighlightButtonForCreationEntryPoint;
    _Bool _displaceFacebookSharingButtonForCreationEntryPoint;
    _Bool _showDisclaimer;
    _Bool _showBrandedContentViolationView;
    IGUser *_storyOwner;
    IGStoryViewerViewModel *_viewerViewModel;
    id <IGStoryItemType> _currentStoryItem;
    IGUserSession *_userSession;
    unsigned long long _storyCTAType;
    NSString *_storyCTAButtonTitle;
    unsigned long long _netegoCellState;
    NSString *_politicalContextText;
    NSString *_module;
    NSString *_disclaimerTitle;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) _Bool showBrandedContentViolationView; // @synthesize showBrandedContentViolationView=_showBrandedContentViolationView;
@property(readonly, nonatomic) _Bool showDisclaimer; // @synthesize showDisclaimer=_showDisclaimer;
@property(readonly, copy, nonatomic) NSString *disclaimerTitle; // @synthesize disclaimerTitle=_disclaimerTitle;
@property(readonly, nonatomic) _Bool displaceFacebookSharingButtonForCreationEntryPoint; // @synthesize displaceFacebookSharingButtonForCreationEntryPoint=_displaceFacebookSharingButtonForCreationEntryPoint;
@property(readonly, nonatomic) _Bool displaceHighlightButtonForCreationEntryPoint; // @synthesize displaceHighlightButtonForCreationEntryPoint=_displaceHighlightButtonForCreationEntryPoint;
@property(readonly, copy, nonatomic) NSString *module; // @synthesize module=_module;
@property(readonly, nonatomic) _Bool showPoliticalContext; // @synthesize showPoliticalContext=_showPoliticalContext;
@property(readonly, copy, nonatomic) NSString *politicalContextText; // @synthesize politicalContextText=_politicalContextText;
@property(readonly, nonatomic) unsigned long long netegoCellState; // @synthesize netegoCellState=_netegoCellState;
@property(readonly, nonatomic) _Bool isNetego; // @synthesize isNetego=_isNetego;
@property(readonly, nonatomic) _Bool isSponsored; // @synthesize isSponsored=_isSponsored;
@property(readonly, copy, nonatomic) NSString *storyCTAButtonTitle; // @synthesize storyCTAButtonTitle=_storyCTAButtonTitle;
@property(readonly, nonatomic) unsigned long long storyCTAType; // @synthesize storyCTAType=_storyCTAType;
@property(readonly, nonatomic) IGUserSession *userSession; // @synthesize userSession=_userSession;
@property(retain, nonatomic) id <IGStoryItemType> currentStoryItem; // @synthesize currentStoryItem=_currentStoryItem;
@property(readonly, nonatomic) IGStoryViewerViewModel *viewerViewModel; // @synthesize viewerViewModel=_viewerViewModel;
@property(readonly, nonatomic) IGUser *storyOwner; // @synthesize storyOwner=_storyOwner;
- (id)uploadProgressViewModel;
- (id)pivotModel;
- (id)ownerFooterViewModel;
- (id)ctaButtonFooterViewModel;
- (id)defaultFooterViewModel;
- (void)_configureInjectedReelFooterViewModel;
- (void)_configureOrganicLeftCTAButtonImageForEntryPoint:(long long)arg1;
- (void)_configureOrganicFooterViewModelForEntryPoint:(long long)arg1;
- (id)initWithCurrentItem:(id)arg1 storyViewerViewModel:(id)arg2 threadId:(id)arg3 userSession:(id)arg4 hasStoryLinks:(_Bool)arg5 isCanvasAd:(_Bool)arg6 draftMessage:(id)arg7 showPromoteButton:(_Bool)arg8 showChevron:(_Bool)arg9 showReshareButton:(_Bool)arg10 storyLikesConfig:(id)arg11 showSaveButton:(_Bool)arg12 isAdSaved:(_Bool)arg13 isShareToFBEnabled:(_Bool)arg14 isCopyLinkEnabled:(_Bool)arg15 isSystemShareSheetEnabled:(_Bool)arg16 isDisplayingSensitivityView:(_Bool)arg17 entryPoint:(long long)arg18 module:(id)arg19 netegoCellState:(unsigned long long)arg20 showViewInsightsCTAButton:(_Bool)arg21 emojiReactionConfig:(id)arg22 emojiReactionUserReactedViewModel:(id)arg23 isCTAButtonBackgroundEnabled:(_Bool)arg24 storyOwnerViewerButtonViewModel:(id)arg25 uploadProgressViewModel:(id)arg26 showBrandedContentViolationView:(_Bool)arg27;

@end

