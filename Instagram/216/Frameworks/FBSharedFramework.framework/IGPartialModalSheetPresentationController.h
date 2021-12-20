//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIPresentationController.h>

@protocol IGPartialModalSheetPresentationControllerDismissDelegate;

@interface IGPartialModalSheetPresentationController : UIPresentationController
{
    long long _queuedPresenterState;
    _Bool _shouldHidePresentersView;
    id <IGPartialModalSheetPresentationControllerDismissDelegate> _dismissDelegate;
}

- (void).cxx_destruct;
@property(nonatomic) __weak id <IGPartialModalSheetPresentationControllerDismissDelegate> dismissDelegate; // @synthesize dismissDelegate=_dismissDelegate;
@property(nonatomic) _Bool shouldHidePresentersView; // @synthesize shouldHidePresentersView=_shouldHidePresentersView;
- (void)_updatePresentersViewHidden:(_Bool)arg1;
- (void)cancelUpdatingPresentersViewHidden;
- (void)commitUpdatingPresentersViewHidden;
- (void)beginUpdatingPresentersViewHidden:(_Bool)arg1 animated:(_Bool)arg2;
- (void)dismissalTransitionDidEnd:(_Bool)arg1;
- (void)dismissalTransitionWillBegin;
- (void)presentationTransitionWillBegin;

@end

