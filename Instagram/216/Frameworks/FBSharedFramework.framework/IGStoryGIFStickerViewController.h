//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <FBSharedFramework/IGViewController.h>

#import <FBSharedFramework/IGGestureHandler-Protocol.h>
#import <FBSharedFramework/IGKeyboardObserverFrameChangeDelegate-Protocol.h>
#import <FBSharedFramework/IGSearchBarDelegate-Protocol.h>
#import <FBSharedFramework/IGStoryStickerViewControllerSelectionDelegate-Protocol.h>

@class IGKeyboardObserver, IGLabelItemViewModel, IGSearchBarWithCancel, IGSpinnerLabelViewModel, IGStoryStickerViewController, NSArray, NSString;
@protocol FBCancelable, IGGiphyFetching, IGStoryGIFStickerViewControllerDelegate, IGUserLauncherSet;

@interface IGStoryGIFStickerViewController : IGViewController <IGSearchBarDelegate, IGKeyboardObserverFrameChangeDelegate, IGStoryStickerViewControllerSelectionDelegate, IGGestureHandler>
{
    id <IGGiphyFetching> _giphyDataSource;
    id <FBCancelable> _trendingRequestToken;
    id <FBCancelable> _activeSearchRequestToken;
    IGKeyboardObserver *_keyboardObserver;
    NSArray *_trendingModels;
    IGSpinnerLabelViewModel *_spinnerModel;
    IGLabelItemViewModel *_trendingLabelModel;
    NSString *_initialSearchQuery;
    id <IGUserLauncherSet> _launcherSet;
    _Bool _showKeyboardOnAppearance;
    id <IGStoryGIFStickerViewControllerDelegate> _delegate;
    IGSearchBarWithCancel *_searchBarWithCancel;
    IGStoryStickerViewController *_resultsViewController;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) IGStoryStickerViewController *resultsViewController; // @synthesize resultsViewController=_resultsViewController;
@property(nonatomic) _Bool showKeyboardOnAppearance; // @synthesize showKeyboardOnAppearance=_showKeyboardOnAppearance;
@property(readonly, nonatomic) IGSearchBarWithCancel *searchBarWithCancel; // @synthesize searchBarWithCancel=_searchBarWithCancel;
@property(nonatomic) __weak id <IGStoryGIFStickerViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
- (void)stickerViewController:(id)arg1 didSelectARSticker:(id)arg2;
- (void)stickerViewController:(id)arg1 didSelectSendLikesSticker:(id)arg2;
- (void)stickerViewController:(id)arg1 didSelectAvatars:(id)arg2;
- (void)stickerViewController:(id)arg1 didSelectPollStickerV2Model:(id)arg2;
- (void)stickerViewController:(id)arg1 didSelectITakeCareStickerModel:(id)arg2;
- (void)stickerViewController:(id)arg1 didSelectBadgesSupporterThankYouStickerModel:(id)arg2;
- (void)stickerViewController:(id)arg1 didSelectSPAStickerTrayModel:(id)arg2;
- (void)stickerViewController:(id)arg1 didSelectPromptStickerModel:(id)arg2;
- (void)stickerViewController:(id)arg1 didSelectExpressingLoveStickerTrayModel:(id)arg2;
- (void)stickerViewController:(id)arg1 didSelectKaraokeCaptionStickerTrayModel:(id)arg2;
- (void)stickerViewController:(id)arg1 didSelectAudioTrack:(id)arg2;
- (void)stickerViewController:(id)arg1 didSelectAmplifyBlackBusinessStickerModel:(id)arg2;
- (void)stickerViewController:(id)arg1 didSelectUpcomingEventStickerTrayModel:(id)arg2;
- (void)stickerViewController:(id)arg1 didSelectRollCallStickerTrayModel:(id)arg2;
- (void)stickerViewController:(id)arg1 didSelectShareProfessionalStickerModel:(id)arg2;
- (void)stickerViewController:(id)arg1 didSelectVoterRegistrationStickerTrayModel:(id)arg2;
- (void)stickerViewController:(id)arg1 didSelectPlaybackTimeDebuggingStickerModel:(id)arg2;
- (void)stickerViewController:(id)arg1 didSelectCountdownStickerTrayModel:(id)arg2;
- (void)stickerViewController:(id)arg1 didSelectQuizStickerTrayModel:(id)arg2;
- (void)stickerViewController:(id)arg1 didSelectQuestionAnswerStickerModel:(id)arg2;
- (void)stickerViewController:(id)arg1 didSelectSliderStickerModel:(id)arg2;
- (void)stickerViewController:(id)arg1 didSelectMentionStickerModel:(id)arg2;
- (void)stickerViewController:(id)arg1 didSelectPollStickerModel:(id)arg2;
- (void)stickerViewController:(id)arg1 didSelectHashtagStickerModel:(id)arg2;
- (void)stickerViewController:(id)arg1 didSelectInternalStickerModel:(id)arg2;
- (void)stickerViewController:(id)arg1 didSelectGalleryVideoSticker:(id)arg2;
- (void)stickerViewController:(id)arg1 didSelectGalleryImageSticker:(id)arg2;
- (void)stickerViewController:(id)arg1 didSelectCameraStickerModel:(id)arg2;
- (void)stickerViewController:(id)arg1 didSelectLocationStickerModel:(id)arg2;
- (void)stickerViewController:(id)arg1 willDismissLocationPicker:(id)arg2;
- (void)stickerViewController:(id)arg1 willPresentLocationPicker:(id)arg2;
- (void)stickerViewController:(id)arg1 didSelectMemoriesSticker:(id)arg2;
- (void)stickerViewController:(id)arg1 didSelectDateSticker:(id)arg2;
- (void)stickerViewController:(id)arg1 didSelectTimeStickerModel:(id)arg2;
- (void)stickerViewController:(id)arg1 didSelectStaticSticker:(id)arg2;
- (void)stickerViewController:(id)arg1 didSelectEmoji:(id)arg2 emojiView:(id)arg3;
- (void)stickerViewControllerDidSelectLike:(id)arg1;
- (void)stickerViewControllerDidSelectPollMessage:(id)arg1;
- (void)stickerViewControllerDidSelectSelfieSticker:(id)arg1;
- (void)stickerViewController:(id)arg1 didSelectAnimatedSticker:(id)arg2;
- (void)_showTrendingResultsIfNeeded;
- (void)_updateForSearchText:(id)arg1 results:(id)arg2;
- (void)_updateWithTrendingResults:(id)arg1;
- (void)keyboardObserver:(id)arg1 keyboardFrameWillChangeWithBeginFrame:(struct CGRect)arg2 endFrame:(struct CGRect)arg3 duration:(double)arg4 curve:(long long)arg5;
- (void)keyboardObserver:(id)arg1 keyboardFrameDidChangeWithBeginFrame:(struct CGRect)arg2 endFrame:(struct CGRect)arg3 duration:(double)arg4 curve:(long long)arg5;
- (void)searchBarDidTapReturnKey:(id)arg1;
- (void)_searchCancelTapped;
- (void)searchBar:(id)arg1 didChangeSearchText:(id)arg2;
- (_Bool)searchBarShouldBeginEditing:(id)arg1;
- (_Bool)canRespondToGesture:(id)arg1;
@property(readonly, nonatomic) NSString *GIFSearchQuery;
- (void)viewDidLayoutSubviews;
- (void)viewDidLoad;
- (void)viewDidAppear:(_Bool)arg1;
- (id)initWithUserSession:(id)arg1 initialSearchQuery:(id)arg2 requestSurface:(unsigned long long)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
