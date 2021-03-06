//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <FBSharedFramework/IGListSectionController.h>

#import "IGFeedItemDirectResponseLoggingProviderDelegate-Protocol.h"
#import "IGFeedItemVideoLoggingProviderDelegate-Protocol.h"
#import "IGFeedItemWithCarouselLoggingProviderDelegate-Protocol.h"
#import "IGGenericSurveyAlertAssistantDeleagte-Protocol.h"
#import "IGGenericSurveyQuestionListSectionControllerDelegate-Protocol.h"
#import "IGGenericSurveyReelSectionControllerDelegate-Protocol.h"
#import "IGListAdapterDataSource-Protocol.h"
#import "IGListDisplayDelegate-Protocol.h"
#import "UIScrollViewDelegate-Protocol.h"

@class IGActionableConfirmationToastController, IGFeedVideoCellManager_DEPRECATED, IGGenericSurveyAlertAssistant, IGGenericSurveyPage, IGGenericSurveyTapCTAContext, IGGenericSurveyVideoAutoplayStrategy, IGHeartAnimator, IGListAdapter, IGListAdapterScrollingContext, IGPlaybackCoordinator, IGUserSession, NSString, UICollectionView;
@protocol IGFeedConfigurationType, IGFeedItemConfigurationType, IGGenericSurveyPageSectionControllerDelegate;

@interface IGGenericSurveyPageSectionController : IGListSectionController <IGFeedItemDirectResponseLoggingProviderDelegate, IGFeedItemWithCarouselLoggingProviderDelegate, IGFeedItemVideoLoggingProviderDelegate, IGGenericSurveyAlertAssistantDeleagte, IGGenericSurveyQuestionListSectionControllerDelegate, IGGenericSurveyReelSectionControllerDelegate, IGListAdapterDataSource, IGListDisplayDelegate, UIScrollViewDelegate>
{
    IGUserSession *_userSession;
    NSString *_sessionId;
    unsigned long long _surveyType;
    id <IGGenericSurveyPageSectionControllerDelegate> _delegate;
    IGListAdapter *_listAdapter;
    IGListAdapterScrollingContext *_scrollingContext;
    UICollectionView *_collectionView;
    IGGenericSurveyPage *_page;
    id <IGFeedItemConfigurationType> _itemConfiguration;
    id <IGFeedConfigurationType> _feedConfiguration;
    IGHeartAnimator *_heartAnimator;
    IGActionableConfirmationToastController *_toastController;
    IGFeedVideoCellManager_DEPRECATED *_videoCellManager;
    IGGenericSurveyAlertAssistant *_alertAssistant;
    NSString *_analyticsModule;
    double _bottomInsets;
    _Bool _isKeyboardShowing;
    _Bool _scrollViewIsAnimating;
    IGGenericSurveyTapCTAContext *_tapCTAContext;
    IGGenericSurveyVideoAutoplayStrategy *_autoPlayStrategy;
    IGPlaybackCoordinator *_playbackCoordinator;
    NSString *_surveySessionId;
}

- (void).cxx_destruct;
@property(readonly, copy, nonatomic) NSString *sessionId; // @synthesize sessionId=_sessionId;
@property(copy, nonatomic) NSString *surveySessionId; // @synthesize surveySessionId=_surveySessionId;
- (id)extraVideoLoggingDictionaryForMedia:(id)arg1;
@property(readonly, copy, nonatomic) NSString *initialSessionId;
- (id)surfaceCategoryId;
- (id)mediaIndexForMedia:(id)arg1;
- (id)exploreInfo;
- (id)chainingInfoForMedia:(id)arg1;
- (id)carouselInfoForMedia:(id)arg1;
- (id)followControllerContextStringForMedia:(id)arg1;
- (id)customModuleForMedia:(id)arg1;
- (id)extraDictionaryForMedia:(id)arg1;
- (id)extraDictionaryForMedia:(id)arg1 carouselItemIndex:(long long)arg2;
- (id)extraDictionaryForMedia:(id)arg1 directResponseInfo:(id)arg2;
- (void)_stopPlayingVideoCell;
- (void)_autoPlayVideoCell;
- (void)_updateCTACellDisplayRectVisibitily;
- (struct UIEdgeInsets)_preferredContentInsets;
- (void)_animateCollectionViewWithKeyboardWillShow:(_Bool)arg1;
- (void)reelSectionControllerDidHideReel:(id)arg1;
- (void)reelSectionControllerDidViewReel:(id)arg1;
- (void)genericSurveyQuestionListSectionController:(id)arg1 didNavToQuestion:(id)arg2 questionIndex:(long long)arg3;
- (void)genericSurveyQuestionListSectionControllerWillDismissKeyboard:(id)arg1;
- (void)genericSurveyQuestionListSectionController:(id)arg1 willShowKeyboardWithItemHeight:(double)arg2;
- (void)genericSurveyQuestionListSectionController:(id)arg1 didReceiveSurveyResult:(id)arg2 extraDict:(id)arg3;
- (void)genericSurveyQuestionListSectionController:(id)arg1 didCompleteWithSurveyResults:(id)arg2 extraDict:(id)arg3;
- (void)scrollViewDidEndScrollingAnimation:(id)arg1;
- (void)scrollViewDidScroll:(id)arg1;
- (void)alertAssistantDetectErrorWithMessage:(id)arg1;
- (id)emptyViewForListAdapter:(id)arg1;
- (id)listAdapter:(id)arg1 sectionControllerForObject:(id)arg2;
- (id)objectsForListAdapter:(id)arg1;
- (void)listAdapter:(id)arg1 didEndDisplayingSectionController:(id)arg2 cell:(id)arg3 atIndex:(long long)arg4;
- (void)listAdapter:(id)arg1 willDisplaySectionController:(id)arg2 cell:(id)arg3 atIndex:(long long)arg4;
- (void)listAdapter:(id)arg1 didEndDisplayingSectionController:(id)arg2;
- (void)listAdapter:(id)arg1 willDisplaySectionController:(id)arg2;
- (id)displayDelegate;
- (void)didSelectItemAtIndex:(long long)arg1;
- (id)cellForItemAtIndex:(long long)arg1;
- (struct CGSize)sizeForItemAtIndex:(long long)arg1;
- (void)didUpdateToObject:(id)arg1;
- (id)navigateToSkipQuestionIfNecessary;
- (void)reset;
- (void)_setupVideoCellManager;
- (void)_setupCollectionViewAndAdapter;
- (void)dealloc;
- (id)initWithUserSession:(id)arg1 delegate:(id)arg2 analyticsModule:(id)arg3 playbackCoordinator:(id)arg4 surveyType:(unsigned long long)arg5;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

