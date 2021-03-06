//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "IGDropDownViewController.h"

#import "IGDropDownViewControllerDelegate-Protocol.h"
#import "IGStoryHighlightsCreationControllerDelegate-Protocol.h"

@class IGLiveArchiveViewController, IGUserSession, NSNumber, NSString, UIViewController;

@interface IGArchiveHomeViewController : IGDropDownViewController <IGDropDownViewControllerDelegate, IGStoryHighlightsCreationControllerDelegate>
{
    IGUserSession *_userSession;
    long long _visitCount;
    long long _feedArchiveControllerIndex;
    long long _storyArchiveControllerIndex;
    UIViewController *_storyArchiveController;
    IGLiveArchiveViewController *_liveArchiveViewController;
    NSNumber *_liveArchiveControllerIndex;
}

- (void).cxx_destruct;
- (id)analyticsExtras;
- (id)analyticsModule;
- (void)highlightsCreationController:(id)arg1 didPublishSuggestHighlightType:(long long)arg2;
- (void)highlightsCreationControllerDidEditSuggestedHighlight:(id)arg1 addedItems:(id)arg2 removedItems:(id)arg3 title:(id)arg4 coverModel:(id)arg5;
- (void)highlightsCreationControllerDidTapCancel:(id)arg1;
- (void)highlightsCreationControllerDidFinish:(id)arg1 mode:(long long)arg2 reel:(id)arg3;
- (void)dropDownViewController:(id)arg1 didSelectItemAtIndex:(unsigned long long)arg2;
- (_Bool)prefersNavigationBarDividerHidden;
- (id)_titleForSelectedIndex:(unsigned long long)arg1;
- (void)_openArchiveSettings;
- (void)_setupNavigationItems;
- (void)_moreButtonTapped;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewDidLoad;
- (long long)preferredTabBarBehavior;
- (id)initWithUserSession:(id)arg1 defaultSurface:(long long)arg2 badgeCount:(long long)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

