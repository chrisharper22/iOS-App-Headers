//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <FBSharedFramework/IGSearchBarDelegate-Protocol.h>
#import <FBSharedFramework/UIViewControllerAnimatedTransitioning-Protocol.h>
#import <FBSharedFramework/UIViewControllerTransitioningDelegate-Protocol.h>

@class IGSearchBar, IGSearchBarConfig, IGSearchBarWithCancel, NSNumber, NSString;

@interface IGFullscreenSearchTransitionController : NSObject <IGSearchBarDelegate, UIViewControllerAnimatedTransitioning, UIViewControllerTransitioningDelegate>
{
    _Bool _isPresenting;
    _Bool _shouldRetainSearchBarText;
    IGSearchBar *_presentingSearchBar;
    IGSearchBarWithCancel *_presentedSearchInput;
    IGSearchBarConfig *_transitionSearchBarConfig;
    NSNumber *_keyboardAnimationDuration;
    NSNumber *_keybaordAnimationCurve;
}

- (void).cxx_destruct;
- (id)animationControllerForDismissedController:(id)arg1;
- (id)animationControllerForPresentedController:(id)arg1 presentingController:(id)arg2 sourceController:(id)arg3;
- (void)searchBarDidTapReturnKey:(id)arg1;
- (void)searchBar:(id)arg1 didChangeSearchText:(id)arg2;
- (_Bool)searchBarShouldBeginEditing:(id)arg1;
- (void)_dismissAnimation:(id)arg1;
- (void)_presentAnimation:(id)arg1;
- (void)animateTransition:(id)arg1;
- (double)transitionDuration:(id)arg1;
- (void)configureWithPresentingSearchBar:(id)arg1 presentedSearchInput:(id)arg2 transitionSearchBarConfig:(id)arg3 shouldRetainSearchBarText:(_Bool)arg4;
- (void)configureWithPresentingSearchBar:(id)arg1 presentedSearchInput:(id)arg2;
- (void)_handleKeyboardNotification:(id)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

